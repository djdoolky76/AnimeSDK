#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FishCameraConfig.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

class FBMFHPMONGC_BNAIPBIALGM;

#define FBMFHPMONGC_GFJPPGLKEGA_IFLEABPIDBO_OFFSET UNITYSDK_OFFSET(0x14283210)
#define FBMFHPMONGC_GFJPPGLKEGA__CTOR_OFFSET UNITYSDK_OFFSET(0x14283200)

inline static constexpr unsigned int FBMFHPMONGC_GFJPPGLKEGA_TypeDefinitionIndex = 50503;

class FBMFHPMONGC_GFJPPGLKEGA : public ::System::Object
{
public:
	::MoleMole::FishCameraConfig EJJNGFCGNAK; // 0x10
	::FBMFHPMONGC_BNAIPBIALGM* FGBNBFHOKAA; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_GFJPPGLKEGA__CTOR_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData IFLEABPIDBO()
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_GFJPPGLKEGA_IFLEABPIDBO_OFFSET))(this);
	}
};
