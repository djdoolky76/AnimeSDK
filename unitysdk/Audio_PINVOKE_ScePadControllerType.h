#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int Audio_PINVOKE_ScePadControllerType_TypeDefinitionIndex = 38669;

enum class Audio_PINVOKE_ScePadControllerType : ::System::Int32
{
	SCE_PAD_CONTROLLER_TYPE_NOT_CONNECTED = 0,
	SCE_PAD_CONTROLLER_TYPE_DUALSHOCK4 = 1,
	SCE_PAD_CONTROLLER_TYPE_DUALSENSE = 2,
};
