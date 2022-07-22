#include <dirent.h>
#include <sys/stat.h>
#include <getopt.h>

#include <io/iousb.h>
#include <common/common.h>
#include <common/payload.h>

#include <exploit/limera1n.h>
#include <exploit/checkm8_arm64.h>
#include <exploit/s5l8950x.h>

io_client_t client;
checkra1n_payload_t payload;
extern bool debug_enabled;

int main() {
    int ret = 0;
    ret = checkm8_s5l8950x(client);
    return ret;
}
