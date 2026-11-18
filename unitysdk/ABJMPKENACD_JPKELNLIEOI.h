#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FishCameraConfig.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

class ABJMPKENACD_MCHLABNGIPF;

#define ABJMPKENACD_JPKELNLIEOI_HBHLACJNAEI_OFFSET UNITYSDK_OFFSET(0x144B6040)
#define ABJMPKENACD_JPKELNLIEOI__CTOR_OFFSET UNITYSDK_OFFSET(0x144B6030)

inline static constexpr unsigned int ABJMPKENACD_JPKELNLIEOI_TypeDefinitionIndex = 88617;

class ABJMPKENACD_JPKELNLIEOI : public ::System::Object
{
public:
	::MoleMole::FishCameraConfig EJJNGFCGNAK; // 0x10
	::ABJMPKENACD_MCHLABNGIPF* HMBMHNBEOGE; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_JPKELNLIEOI__CTOR_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData HBHLACJNAEI()
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_JPKELNLIEOI_HBHLACJNAEI_OFFSET))(this);
	}
};
