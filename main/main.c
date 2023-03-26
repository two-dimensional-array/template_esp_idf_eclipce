#include "nvs.h"
#include "nvs_flash.h"

void app_main()
{
    ESP_ERROR_CHECK(nvs_flash_init());
}
