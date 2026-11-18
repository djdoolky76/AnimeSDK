#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FishCameraConfig.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

class ABJMPKENACD_MCHLABNGIPF;

#define ABJMPKENACD_ALKLIKDBIKB_BNEAHGBEAGP_OFFSET UNITYSDK_OFFSET(0x17DBC0A0)
#define ABJMPKENACD_ALKLIKDBIKB__CTOR_OFFSET UNITYSDK_OFFSET(0x17DBC090)

inline static constexpr unsigned int ABJMPKENACD_ALKLIKDBIKB_TypeDefinitionIndex = 88645;

class ABJMPKENACD_ALKLIKDBIKB : public ::System::Object
{
public:
	::MoleMole::FishCameraConfig EJJNGFCGNAK; // 0x10
	::ABJMPKENACD_MCHLABNGIPF* ONLJAOFCNCH; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_ALKLIKDBIKB__CTOR_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData BNEAHGBEAGP()
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_ALKLIKDBIKB_BNEAHGBEAGP_OFFSET))(this);
	}
};
