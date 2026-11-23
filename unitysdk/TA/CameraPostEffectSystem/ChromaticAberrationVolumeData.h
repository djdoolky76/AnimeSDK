#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/TA/CameraPostEffectSystem/VolumeDataBase.h"

namespace UnityEngine::Rendering { class VolumeComponent; }

#define TA_CAMERAPOSTEFFECTSYSTEM_CHROMATICABERRATIONVOLUMEDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0x28D6F40)
#define TA_CAMERAPOSTEFFECTSYSTEM_CHROMATICABERRATIONVOLUMEDATA_COPYFROM_OFFSET UNITYSDK_OFFSET(0x28D6FA0)
#define TA_CAMERAPOSTEFFECTSYSTEM_CHROMATICABERRATIONVOLUMEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x17A1C90)

namespace TA::CameraPostEffectSystem
{
	inline static constexpr unsigned int ChromaticAberrationVolumeData_TypeDefinitionIndex = 16392;

	class ChromaticAberrationVolumeData : public ::TA::CameraPostEffectSystem::VolumeDataBase
	{
	public:
		::System::Boolean Open; // 0x10
		::System::Boolean OverrideIntensity; // 0x11
		::System::Byte _padding0[0x2];
		::System::Single Intensity; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_CAMERAPOSTEFFECTSYSTEM_CHROMATICABERRATIONVOLUMEDATA__CTOR_OFFSET))(this);
		}

		::System::Void CopyFrom(::UnityEngine::Rendering::VolumeComponent* BEEE7A5A60941632)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::VolumeComponent*))((::PBYTE)hIl2Cpp + TA_CAMERAPOSTEFFECTSYSTEM_CHROMATICABERRATIONVOLUMEDATA_COPYFROM_OFFSET))(this, BEEE7A5A60941632);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_CAMERAPOSTEFFECTSYSTEM_CHROMATICABERRATIONVOLUMEDATA_CLEAR_OFFSET))(this);
		}
	};
}
