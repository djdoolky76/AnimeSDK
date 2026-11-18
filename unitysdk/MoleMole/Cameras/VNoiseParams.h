#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define MOLEMOLE_CAMERAS_VNOISEPARAMS_LODCKPOCHBN_OFFSET UNITYSDK_OFFSET(0x7D8FB0)
#define MOLEMOLE_CAMERAS_VNOISEPARAMS_MKHBJMODDFB_OFFSET UNITYSDK_OFFSET(0x7D9080)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int VNoiseParams_TypeDefinitionIndex = 62624;

	struct alignas(4) VNoiseParams
	{
		::System::Single Frequency; // 0x10
		::System::Single Amplitude; // 0x14
		::System::Single RandomAmplitude; // 0x18

		::System::Single LODCKPOCHBN(::System::Single FNIOPKPHDEH, ::System::Single AFBKFHHGMBE)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VNOISEPARAMS_LODCKPOCHBN_OFFSET))(this, FNIOPKPHDEH, AFBKFHHGMBE);
		}

		::System::Single MKHBJMODDFB(::System::Single FNIOPKPHDEH, ::System::Single AFBKFHHGMBE)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VNOISEPARAMS_MKHBJMODDFB_OFFSET))(this, FNIOPKPHDEH, AFBKFHHGMBE);
		}
	};
}
