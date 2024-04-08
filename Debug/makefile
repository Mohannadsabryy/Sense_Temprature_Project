################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
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

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
Sense_Temp.lss \

FLASH_IMAGE += \
Sense_Temp.hex \

SIZEDUMMY += \
sizedummy \


# All Target
all: Sense_Temp.elf secondary-outputs

# Tool invocations
Sense_Temp.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,Sense_Temp.map -mmcu=atmega32 -o "Sense_Temp.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

Sense_Temp.lss: Sense_Temp.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S Sense_Temp.elf  >"Sense_Temp.lss"
	@echo 'Finished building: $@'
	@echo ' '

Sense_Temp.hex: Sense_Temp.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex Sense_Temp.elf  "Sense_Temp.hex"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: Sense_Temp.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 Sense_Temp.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) Sense_Temp.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
