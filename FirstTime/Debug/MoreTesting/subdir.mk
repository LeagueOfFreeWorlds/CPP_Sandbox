################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../MoreTesting/Exec.cpp 

OBJS += \
./MoreTesting/Exec.o 

CPP_DEPS += \
./MoreTesting/Exec.d 


# Each subdirectory must supply rules for building sources it contributes
MoreTesting/%.o: ../MoreTesting/%.cpp MoreTesting/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


