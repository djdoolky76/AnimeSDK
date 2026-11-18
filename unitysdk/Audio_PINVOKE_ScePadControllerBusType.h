#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int Audio_PINVOKE_ScePadControllerBusType_TypeDefinitionIndex = 38683;

enum class Audio_PINVOKE_ScePadControllerBusType : ::System::Int32
{
	SCE_PAD_CONTROLLER_BUS_TYPE_NOT_CONNECTED = 0,
	SCE_PAD_CONTROLLER_BUS_TYPE_USB = 1,
	SCE_PAD_CONTROLLER_BUS_TYPE_BT = 2,
};
