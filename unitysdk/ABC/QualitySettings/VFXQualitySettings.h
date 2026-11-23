#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/CustomRenderPipeline/TransparentSettings_E76AF1A1FD0C4D65.h"
#include "unitysdk/System/Object.h"

#define ABC_QUALITYSETTINGS_VFXQUALITYSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ABC::QualitySettings
{
	inline static constexpr unsigned int VFXQualitySettings_TypeDefinitionIndex = 6892;

	class VFXQualitySettings : public ::System::Object
	{
	public:
		::System::Boolean useParticleDistanceLOD; // 0x10
		::System::Byte _padding0[0x3];
		::ABC::CustomRenderPipeline::TransparentSettings_E76AF1A1FD0C4D65 transparentRenderMode; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_QUALITYSETTINGS_VFXQUALITYSETTINGS__CTOR_OFFSET))(this);
		}
	};
}
