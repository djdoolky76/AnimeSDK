#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define CINEMACHINE_NOISESETTINGS_NOISEPARAMS_GETVALUEAT_OFFSET UNITYSDK_OFFSET(0x2A798D0)

namespace Cinemachine
{
	inline static constexpr unsigned int NoiseSettings_NoiseParams_TypeDefinitionIndex = 18426;

	struct alignas(4) NoiseSettings_NoiseParams
	{
		::System::Single Frequency; // 0x10
		::System::Single Amplitude; // 0x14
		::System::Boolean Constant; // 0x18

		::System::Single GetValueAt(::System::Single FF0A37159A523E06, ::System::Single FEE08B4173489EF2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_NOISESETTINGS_NOISEPARAMS_GETVALUEAT_OFFSET))(this, FF0A37159A523E06, FEE08B4173489EF2);
		}
	};
}
