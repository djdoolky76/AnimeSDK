#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FishCameraConfig.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

class FBMFHPMONGC_BNAIPBIALGM;

#define FBMFHPMONGC_OGOAKAPACMH_BNEAHGBEAGP_OFFSET UNITYSDK_OFFSET(0x17139BB0)
#define FBMFHPMONGC_OGOAKAPACMH__CTOR_OFFSET UNITYSDK_OFFSET(0x17139BA0)

inline static constexpr unsigned int FBMFHPMONGC_OGOAKAPACMH_TypeDefinitionIndex = 50474;

class FBMFHPMONGC_OGOAKAPACMH : public ::System::Object
{
public:
	::FBMFHPMONGC_BNAIPBIALGM* ONLJAOFCNCH; // 0x10
	::MoleMole::FishCameraConfig EJJNGFCGNAK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_OGOAKAPACMH__CTOR_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData BNEAHGBEAGP()
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_OGOAKAPACMH_BNEAHGBEAGP_OFFSET))(this);
	}
};
