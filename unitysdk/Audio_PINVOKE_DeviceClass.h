#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int Audio_PINVOKE_DeviceClass_TypeDefinitionIndex = 38681;

enum class Audio_PINVOKE_DeviceClass : ::System::Int32
{
	All = 0,
	GameControl = 4,
	Device = 1,
	Pointer = 2,
	Keyboard = 3,
};
