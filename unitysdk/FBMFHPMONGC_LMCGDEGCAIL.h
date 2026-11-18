#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FishCameraConfig.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

class FBMFHPMONGC_BNAIPBIALGM;

#define FBMFHPMONGC_LMCGDEGCAIL_AIDJJODPENF_OFFSET UNITYSDK_OFFSET(0xBB32F40)
#define FBMFHPMONGC_LMCGDEGCAIL__CTOR_OFFSET UNITYSDK_OFFSET(0xBB32F30)

inline static constexpr unsigned int FBMFHPMONGC_LMCGDEGCAIL_TypeDefinitionIndex = 50487;

class FBMFHPMONGC_LMCGDEGCAIL : public ::System::Object
{
public:
	::MoleMole::FishCameraConfig EJJNGFCGNAK; // 0x10
	::FBMFHPMONGC_BNAIPBIALGM* KGFKHBMEKBL; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_LMCGDEGCAIL__CTOR_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData AIDJJODPENF()
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_LMCGDEGCAIL_AIDJJODPENF_OFFSET))(this);
	}
};
