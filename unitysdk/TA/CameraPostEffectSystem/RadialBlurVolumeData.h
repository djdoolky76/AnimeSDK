#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/TA/CameraPostEffectSystem/VolumeDataBase.h"

namespace UnityEngine::Rendering { class VolumeComponent; }

#define TA_CAMERAPOSTEFFECTSYSTEM_RADIALBLURVOLUMEDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0x28C0670)
#define TA_CAMERAPOSTEFFECTSYSTEM_RADIALBLURVOLUMEDATA_COPYFROM_OFFSET UNITYSDK_OFFSET(0x28C06E0)
#define TA_CAMERAPOSTEFFECTSYSTEM_RADIALBLURVOLUMEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x17A1C90)

namespace TA::CameraPostEffectSystem
{
	inline static constexpr unsigned int RadialBlurVolumeData_TypeDefinitionIndex = 16278;

	class RadialBlurVolumeData : public ::TA::CameraPostEffectSystem::VolumeDataBase
	{
	public:
		::System::Boolean Open; // 0x10
		::System::Boolean OverrideRadialBlurX; // 0x11
		::System::Byte _padding0[0x2];
		::System::Single RadialBlurX; // 0x14
		::System::Boolean OverrideRadialBlurY; // 0x18
		::System::Byte _padding1[0x3];
		::System::Single RadialBlurY; // 0x1C
		::System::Boolean OverrideRadialBlurRadius; // 0x20
		::System::Byte _padding2[0x3];
		::System::Single RadialBlurRadius; // 0x24
		::System::Boolean OverrideExtrusionXIntensity; // 0x28
		::System::Byte _padding3[0x3];
		::System::Single ExtrusionXIntensity; // 0x2C
		::System::Boolean OverrideExtrusionYIntensity; // 0x30
		::System::Byte _padding4[0x3];
		::System::Single ExtrusionYIntensity; // 0x34

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_CAMERAPOSTEFFECTSYSTEM_RADIALBLURVOLUMEDATA_CLEAR_OFFSET))(this);
		}

		::System::Void CopyFrom(::UnityEngine::Rendering::VolumeComponent* BEEE7A5A60941632)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::VolumeComponent*))((::PBYTE)hIl2Cpp + TA_CAMERAPOSTEFFECTSYSTEM_RADIALBLURVOLUMEDATA_COPYFROM_OFFSET))(this, BEEE7A5A60941632);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_CAMERAPOSTEFFECTSYSTEM_RADIALBLURVOLUMEDATA__CTOR_OFFSET))(this);
		}
	};
}
