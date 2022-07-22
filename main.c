#include <dirent.h>
#include <sys/stat.h>
#include <getopt.h>

#include <io/iousb.h>
#include <common/common.h>
#include <common/payload.h>

#include <exploit/limera1n.h>
#include <exploit/checkm8_arm64.h>
#include <exploit/s5l8950x.h>

int main() {
    ret = checkm8_s5l8950x(client);
    return ret;
}
