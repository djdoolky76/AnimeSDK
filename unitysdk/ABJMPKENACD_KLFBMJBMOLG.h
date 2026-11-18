#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FishCameraConfig.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

class ABJMPKENACD_MCHLABNGIPF;

#define ABJMPKENACD_KLFBMJBMOLG_ICOEAEDEEJK_OFFSET UNITYSDK_OFFSET(0x181E67C0)
#define ABJMPKENACD_KLFBMJBMOLG__CTOR_OFFSET UNITYSDK_OFFSET(0x181E67B0)

inline static constexpr unsigned int ABJMPKENACD_KLFBMJBMOLG_TypeDefinitionIndex = 88635;

class ABJMPKENACD_KLFBMJBMOLG : public ::System::Object
{
public:
	::MoleMole::FishCameraConfig EJJNGFCGNAK; // 0x10
	::ABJMPKENACD_MCHLABNGIPF* HGAHKFMCICO; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_KLFBMJBMOLG__CTOR_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData ICOEAEDEEJK()
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_KLFBMJBMOLG_ICOEAEDEEJK_OFFSET))(this);
	}
};
