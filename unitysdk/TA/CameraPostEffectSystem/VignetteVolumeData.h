#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/TA/CameraPostEffectSystem/VolumeDataBase.h"
#include "unitysdk/UnityEngine/E46B881AA2636190.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::Rendering { class VolumeComponent; }

#define TA_CAMERAPOSTEFFECTSYSTEM_VIGNETTEVOLUMEDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0x28CFF70)
#define TA_CAMERAPOSTEFFECTSYSTEM_VIGNETTEVOLUMEDATA_COPYFROM_OFFSET UNITYSDK_OFFSET(0x28D0020)
#define TA_CAMERAPOSTEFFECTSYSTEM_VIGNETTEVOLUMEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x276AAD0)

namespace TA::CameraPostEffectSystem
{
	inline static constexpr unsigned int VignetteVolumeData_TypeDefinitionIndex = 16317;

	class VignetteVolumeData : public ::TA::CameraPostEffectSystem::VolumeDataBase
	{
	public:
		::System::Boolean Open; // 0x10
		::System::Boolean OverrideColor; // 0x11
		::System::Byte _padding0[0x2];
		::UnityEngine::E46B881AA2636190 Color; // 0x14
		::System::Boolean OverrideCenter; // 0x24
		::System::Byte _padding1[0x3];
		::UnityEngine::Vector3 Center; // 0x28
		::System::Boolean OverrideIntensity; // 0x34
		::System::Byte _padding2[0x3];
		::System::Single Intensity; // 0x38
		::System::Boolean OverrideSmoothness; // 0x3C
		::System::Byte _padding3[0x3];
		::System::Single Smoothness; // 0x40

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_CAMERAPOSTEFFECTSYSTEM_VIGNETTEVOLUMEDATA_CLEAR_OFFSET))(this);
		}

		::System::Void CopyFrom(::UnityEngine::Rendering::VolumeComponent* BEEE7A5A60941632)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::VolumeComponent*))((::PBYTE)hIl2Cpp + TA_CAMERAPOSTEFFECTSYSTEM_VIGNETTEVOLUMEDATA_COPYFROM_OFFSET))(this, BEEE7A5A60941632);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_CAMERAPOSTEFFECTSYSTEM_VIGNETTEVOLUMEDATA__CTOR_OFFSET))(this);
		}
	};
}
