#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FishCameraConfig.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

class ABJMPKENACD_MCHLABNGIPF;

#define ABJMPKENACD_JCOIDCDOMPA_NCFCGHIPMKO_OFFSET UNITYSDK_OFFSET(0x16436030)
#define ABJMPKENACD_JCOIDCDOMPA__CTOR_OFFSET UNITYSDK_OFFSET(0x16436020)

inline static constexpr unsigned int ABJMPKENACD_JCOIDCDOMPA_TypeDefinitionIndex = 88647;

class ABJMPKENACD_JCOIDCDOMPA : public ::System::Object
{
public:
	::ABJMPKENACD_MCHLABNGIPF* EEMOEMFLABI; // 0x10
	::MoleMole::FishCameraConfig EJJNGFCGNAK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_JCOIDCDOMPA__CTOR_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData NCFCGHIPMKO()
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_JCOIDCDOMPA_NCFCGHIPMKO_OFFSET))(this);
	}
};
