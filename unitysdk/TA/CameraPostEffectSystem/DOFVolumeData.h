#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B88870E9FB4B8C1A/F7C63FD12203AD82.h"
#include "unitysdk/TA/CameraPostEffectSystem/VolumeDataBase.h"

namespace UnityEngine::Rendering { class VolumeComponent; }

#define TA_CAMERAPOSTEFFECTSYSTEM_DOFVOLUMEDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0x286F470)
#define TA_CAMERAPOSTEFFECTSYSTEM_DOFVOLUMEDATA_COPYFROM_OFFSET UNITYSDK_OFFSET(0x286F4E0)
#define TA_CAMERAPOSTEFFECTSYSTEM_DOFVOLUMEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x17A1C90)

namespace TA::CameraPostEffectSystem
{
	inline static constexpr unsigned int DOFVolumeData_TypeDefinitionIndex = 16125;

	class DOFVolumeData : public ::TA::CameraPostEffectSystem::VolumeDataBase
	{
	public:
		::System::Boolean Open; // 0x10
		::System::Boolean OverrideFocalDistance; // 0x11
		::System::Byte _padding0[0x2];
		::System::Single FocalDistance; // 0x14
		::System::Boolean OverridePhyFStop; // 0x18
		::System::Byte _padding1[0x3];
		::System::Single PhyFStop; // 0x1C
		::System::Boolean OverridePhySensorWidthMM; // 0x20
		::System::Byte _padding2[0x3];
		::System::Single PhySensorWidthMM; // 0x24
		::System::Boolean OverridePhyFocalRange; // 0x28
		::System::Byte _padding3[0x3];
		::System::Single PhyFocalRange; // 0x2C
		::B88870E9FB4B8C1A::F7C63FD12203AD82 DebugState; // 0x30

		::System::Void CopyFrom(::UnityEngine::Rendering::VolumeComponent* BEEE7A5A60941632)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::VolumeComponent*))((::PBYTE)hIl2Cpp + TA_CAMERAPOSTEFFECTSYSTEM_DOFVOLUMEDATA_COPYFROM_OFFSET))(this, BEEE7A5A60941632);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_CAMERAPOSTEFFECTSYSTEM_DOFVOLUMEDATA__CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_CAMERAPOSTEFFECTSYSTEM_DOFVOLUMEDATA_CLEAR_OFFSET))(this);
		}
	};
}
