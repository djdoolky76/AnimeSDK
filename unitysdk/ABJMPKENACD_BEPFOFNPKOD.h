#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FishCameraConfig.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

class ABJMPKENACD_MCHLABNGIPF;

#define ABJMPKENACD_BEPFOFNPKOD_NPCFMOCOAGN_OFFSET UNITYSDK_OFFSET(0x181E65F0)
#define ABJMPKENACD_BEPFOFNPKOD__CTOR_OFFSET UNITYSDK_OFFSET(0x181E65E0)

inline static constexpr unsigned int ABJMPKENACD_BEPFOFNPKOD_TypeDefinitionIndex = 88650;

class ABJMPKENACD_BEPFOFNPKOD : public ::System::Object
{
public:
	::MoleMole::FishCameraConfig BBCODANAFGI; // 0x10
	::ABJMPKENACD_MCHLABNGIPF* MFOCAFMBBGM; // 0x38
	::MoleMole::FishCameraConfig KILPCOMOCMD; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_BEPFOFNPKOD__CTOR_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData NPCFMOCOAGN()
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_BEPFOFNPKOD_NPCFMOCOAGN_OFFSET))(this);
	}
};
