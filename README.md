# NasuaOS file download repository

Copy `catalog.txt` and the `files/` directory to the root of a public GitHub
repository. The catalog uses this format:

```text
NASUA-FILE-CATALOG-1
filename|version|sha256-lowercase|files/path/to/file
```

Each entry describes one file. `filename` is the name saved in
`/home/user/downloads`, `version` is a descriptive version string, the SHA-256
is calculated from the exact file bytes, and the final field is the path inside
the GitHub repository. Keep destination filenames unique and shorter than 28
characters. Individual downloads are limited to 60,000 bytes.

Example:

```text
example.txt|1.0.0|91d5cc20a5e6696f6a3549a76b6ff40c9855fa7d5de017942d9af69ee871e53e|files/example.txt
```

List and download files from NasuaOS with:

```text
download --repo OWNER/REPO list
download --repo OWNER/REPO get example.txt
```
