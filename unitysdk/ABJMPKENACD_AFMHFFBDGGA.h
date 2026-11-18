#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FishCameraConfig.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

class ABJMPKENACD_MCHLABNGIPF;

#define ABJMPKENACD_AFMHFFBDGGA_PAPBICDEHDC_OFFSET UNITYSDK_OFFSET(0x17C96C60)
#define ABJMPKENACD_AFMHFFBDGGA__CTOR_OFFSET UNITYSDK_OFFSET(0x17C96C50)

inline static constexpr unsigned int ABJMPKENACD_AFMHFFBDGGA_TypeDefinitionIndex = 88655;

class ABJMPKENACD_AFMHFFBDGGA : public ::System::Object
{
public:
	::ABJMPKENACD_MCHLABNGIPF* BCOOJHAHOOH; // 0x10
	::MoleMole::FishCameraConfig EJJNGFCGNAK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_AFMHFFBDGGA__CTOR_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData PAPBICDEHDC()
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_AFMHFFBDGGA_PAPBICDEHDC_OFFSET))(this);
	}
};
