#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FishCameraConfig.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

class FBMFHPMONGC_BNAIPBIALGM;

#define FBMFHPMONGC_KLMJCKAPIEC_NCFCGHIPMKO_OFFSET UNITYSDK_OFFSET(0x15E42090)
#define FBMFHPMONGC_KLMJCKAPIEC__CTOR_OFFSET UNITYSDK_OFFSET(0x15E42080)

inline static constexpr unsigned int FBMFHPMONGC_KLMJCKAPIEC_TypeDefinitionIndex = 50515;

class FBMFHPMONGC_KLMJCKAPIEC : public ::System::Object
{
public:
	::FBMFHPMONGC_BNAIPBIALGM* EEMOEMFLABI; // 0x10
	::MoleMole::FishCameraConfig EJJNGFCGNAK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_KLMJCKAPIEC__CTOR_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData NCFCGHIPMKO()
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_KLMJCKAPIEC_NCFCGHIPMKO_OFFSET))(this);
	}
};
