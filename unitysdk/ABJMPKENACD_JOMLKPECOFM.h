#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FishCameraConfig.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

class ABJMPKENACD_MCHLABNGIPF;

#define ABJMPKENACD_JOMLKPECOFM_IFLEABPIDBO_OFFSET UNITYSDK_OFFSET(0x135D2B40)
#define ABJMPKENACD_JOMLKPECOFM__CTOR_OFFSET UNITYSDK_OFFSET(0x135D2B30)

inline static constexpr unsigned int ABJMPKENACD_JOMLKPECOFM_TypeDefinitionIndex = 88623;

class ABJMPKENACD_JOMLKPECOFM : public ::System::Object
{
public:
	::ABJMPKENACD_MCHLABNGIPF* FGBNBFHOKAA; // 0x10
	::MoleMole::FishCameraConfig EJJNGFCGNAK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_JOMLKPECOFM__CTOR_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData IFLEABPIDBO()
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_JOMLKPECOFM_IFLEABPIDBO_OFFSET))(this);
	}
};
