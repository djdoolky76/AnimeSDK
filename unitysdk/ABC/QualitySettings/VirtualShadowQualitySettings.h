#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/CustomRenderPipeline/VirtualShadowSetting_F6D9E56CE25B6EF6.h"
#include "unitysdk/System/Object.h"

#define ABC_QUALITYSETTINGS_VIRTUALSHADOWQUALITYSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x2066B60)

namespace ABC::QualitySettings
{
	inline static constexpr unsigned int VirtualShadowQualitySettings_TypeDefinitionIndex = 8409;

	class VirtualShadowQualitySettings : public ::System::Object
	{
	public:
		::System::Boolean enabled; // 0x10
		::System::Byte _padding0[0x3];
		::System::Int32 physicalResolution; // 0x14
		::ABC::CustomRenderPipeline::VirtualShadowSetting_F6D9E56CE25B6EF6 softQuality; // 0x18
		::System::Single startDistance; // 0x1C
		::System::Single endDistance; // 0x20
		::System::Single fadeDistance; // 0x24
		::System::Single lodSwitchDistance; // 0x28
		::System::Int32 lodBias; // 0x2C
		::System::UInt32 streamingMemoryLimitInMB; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_QUALITYSETTINGS_VIRTUALSHADOWQUALITYSETTINGS__CTOR_OFFSET))(this);
		}
	};
}
