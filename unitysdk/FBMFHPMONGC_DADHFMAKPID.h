#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FishCameraConfig.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

class FBMFHPMONGC_BNAIPBIALGM;

#define FBMFHPMONGC_DADHFMAKPID_NPCFMOCOAGN_OFFSET UNITYSDK_OFFSET(0xF9F7F50)
#define FBMFHPMONGC_DADHFMAKPID__CTOR_OFFSET UNITYSDK_OFFSET(0xF9F7F40)

inline static constexpr unsigned int FBMFHPMONGC_DADHFMAKPID_TypeDefinitionIndex = 50499;

class FBMFHPMONGC_DADHFMAKPID : public ::System::Object
{
public:
	::FBMFHPMONGC_BNAIPBIALGM* MFOCAFMBBGM; // 0x10
	::MoleMole::FishCameraConfig BBCODANAFGI; // 0x18
	::MoleMole::FishCameraConfig KILPCOMOCMD; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_DADHFMAKPID__CTOR_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData NPCFMOCOAGN()
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_DADHFMAKPID_NPCFMOCOAGN_OFFSET))(this);
	}
};
