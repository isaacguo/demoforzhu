################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/G4double.cpp \
../src/RunAction.cpp \
../src/demoforzhu.cpp 

OBJS += \
./src/G4double.o \
./src/RunAction.o \
./src/demoforzhu.o 

CPP_DEPS += \
./src/G4double.d \
./src/RunAction.d \
./src/demoforzhu.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


