# NasuaOS App Repository

This folder is a starter repository for `appstore`. Create a public GitHub
repository and upload the contents of this folder to its root:

- `catalog.txt`
- `apps/hello.napp`
- `hello.cpp` (the source for the example binary)

The catalog format is line-oriented:

```text
NASUA-APPSTORE-1
name|version|abi|size-in-bytes|sha256-lowercase|apps/name.napp
```

Each package must be a NAPP binary built for the current ABI. The catalog pins
its exact size and SHA-256, and `appstore` checks both plus the NAPP header
before writing it to `/apps`.

To use this repository after uploading it:

```text
appstore --repo YOUR_GITHUB_NAME/YOUR_REPOSITORY list
appstore --repo YOUR_GITHUB_NAME/YOUR_REPOSITORY install hello
bootapp --app hello
```

The `main` branch is used by default. Only public repositories are supported.
HTTPS verifies the GitHub server certificate, but packages are executable
code: install only from repositories you trust. The SHA-256 in this catalog
checks that the downloaded binary matches the catalog; it is not a publisher
signature.

If you rebuild an app or change the catalog, update its byte size and SHA-256
as well. The installer rejects mismatches and does not overwrite an already
installed app.
