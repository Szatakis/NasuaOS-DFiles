#include <napp.h>

NAPP_APPLICATION("hello", "Example appstore app", false);

int _start(const napp_api* api)
{
    if (!api || api->abi_version != NAPP_ABI_VERSION)
    {
        return 1;
    }

    api->print_line("Hello from a NasuaOS app repository!");
    return 0;
}
