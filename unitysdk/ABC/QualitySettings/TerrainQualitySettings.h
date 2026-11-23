#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ABC_QUALITYSETTINGS_TERRAINQUALITYSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1FACE50)

namespace ABC::QualitySettings
{
	inline static constexpr unsigned int TerrainQualitySettings_TypeDefinitionIndex = 7968;

	class TerrainQualitySettings : public ::System::Object
	{
	public:
		::System::Boolean runtimeCompressTexture; // 0x10
		::System::Byte _padding0[0x3];
		::System::Single texelPerCM; // 0x14
		::System::Int32 albedoPageNum; // 0x18
		::System::Int32 normalPageNum; // 0x1C
		::System::Boolean enableGPUDriven; // 0x20
		::System::Boolean enableHeightfieldDeformation; // 0x21
		::System::Byte _padding1[0x2];
		::System::Single hmPixelError; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_QUALITYSETTINGS_TERRAINQUALITYSETTINGS__CTOR_OFFSET))(this);
		}
	};
}
