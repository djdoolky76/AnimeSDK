#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/GrassMemorySettings.h"

#define ABC_QUALITYSETTINGS_FOLIAGEQUALITYSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x2047EC0)

namespace ABC::QualitySettings
{
	inline static constexpr unsigned int FoliageQualitySettings_TypeDefinitionIndex = 8326;

	class FoliageQualitySettings : public ::System::Object
	{
	public:
		::System::Boolean grassEnabled; // 0x10
		::System::Byte _padding0[0x3];
		::System::Single grassGlobalRenderDistance; // 0x14
		::System::UInt32 grassGlobalLodBias; // 0x18
		::UnityEngine::GrassMemorySettings grassMemorySettings; // 0x1C
		::System::Boolean windEnabled; // 0x28
		::System::Boolean volumeWindEnabled; // 0x29
		::System::Byte _padding1[0x2];
		::System::Single windDistance; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_QUALITYSETTINGS_FOLIAGEQUALITYSETTINGS__CTOR_OFFSET))(this);
		}
	};
}
