################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include X-CUBE-AI/App/subdir.mk
-include USB_HOST/Target/subdir.mk
-include USB_HOST/App/subdir.mk
-include Middlewares/Third_Party/FatFs/src/option/subdir.mk
-include Middlewares/Third_Party/FatFs/src/subdir.mk
-include Middlewares/ST/STM32_USB_Host_Library/Core/Src/subdir.mk
-include Middlewares/ST/STM32_USB_Host_Library/Class/CDC/Src/subdir.mk
-include FATFS/Target/subdir.mk
-include FATFS/App/subdir.mk
-include Drivers/STM32F7xx_HAL_Driver/Src/subdir.mk
-include Core/Startup/subdir.mk
-include Core/Src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

OPTIONAL_TOOL_DEPS := \
$(wildcard ../makefile.defs) \
$(wildcard ../makefile.init) \
$(wildcard ../makefile.targets) \


BUILD_ARTIFACT_NAME := Sine_Model
BUILD_ARTIFACT_EXTENSION := elf
BUILD_ARTIFACT_PREFIX :=
BUILD_ARTIFACT := $(BUILD_ARTIFACT_PREFIX)$(BUILD_ARTIFACT_NAME)$(if $(BUILD_ARTIFACT_EXTENSION),.$(BUILD_ARTIFACT_EXTENSION),)

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
Sine_Model.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
Sine_Model.list \

OBJCOPY_BIN += \
Sine_Model.bin \


# All Target
all: main-build

# Main-build Target
main-build: Sine_Model.elf secondary-outputs

# Tool invocations
Sine_Model.elf: $(OBJS) $(USER_OBJS) /home/pierre/ToneCrafter/test-cubeai-from-cubemx_Sine_Model/test-cubeai-from-cubemx_Sine_Model/STM32F746NGHX_FLASH.ld makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-gcc -o "Sine_Model.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m7 -T"/home/pierre/ToneCrafter/test-cubeai-from-cubemx_Sine_Model/test-cubeai-from-cubemx_Sine_Model/STM32F746NGHX_FLASH.ld" --specs=nosys.specs -Wl,-Map="Sine_Model.map" -Wl,--gc-sections -static -L../Middlewares/ST/AI/Lib -u_printf_float --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

Sine_Model.list: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "Sine_Model.list"
	@echo 'Finished building: $@'
	@echo ' '

Sine_Model.bin: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "Sine_Model.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(SIZE_OUTPUT)$(OBJDUMP_LIST)$(EXECUTABLES)$(OBJS)$(S_DEPS)$(S_UPPER_DEPS)$(C_DEPS)$(OBJCOPY_BIN) Sine_Model.elf
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_BIN)

fail-specified-linker-script-missing:
	@echo 'Error: Cannot find the specified linker script. Check the linker settings in the build configuration.'
	@exit 2

warn-no-linker-script-specified:
	@echo 'Warning: No linker script specified. Check the linker settings in the build configuration.'

.PHONY: all clean dependents fail-specified-linker-script-missing warn-no-linker-script-specified

-include ../makefile.targets
