#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int Audio_PINVOKE_ScePadVibrationMode_TypeDefinitionIndex = 38667;

enum class Audio_PINVOKE_ScePadVibrationMode : ::System::Int32
{
	SCE_PAD_VIBRATION_MODE_COMPATIBLE2 = 3,
	SCE_PAD_VIBRATION_MODE_ADVANCED_AND_COMPATIBLE = 4,
	SCE_PAD_VIBRATION_MODE_COMPATIBLE = 2,
	SCE_PAD_VIBRATION_MODE_ADVANCED = 1,
	SCE_PAD_VIBRATION_MODE_ADVANCED_AND_COMPATIBLE2 = 5,
};
