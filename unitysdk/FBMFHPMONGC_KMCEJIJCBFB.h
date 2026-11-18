#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FishCameraConfig.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

class FBMFHPMONGC_BNAIPBIALGM;
namespace MoleMole { class FishMoveParam; }

#define FBMFHPMONGC_KMCEJIJCBFB_NEENDIDIIHH_OFFSET UNITYSDK_OFFSET(0x171398B0)
#define FBMFHPMONGC_KMCEJIJCBFB__CTOR_OFFSET UNITYSDK_OFFSET(0x171398A0)

inline static constexpr unsigned int FBMFHPMONGC_KMCEJIJCBFB_TypeDefinitionIndex = 50479;

class FBMFHPMONGC_KMCEJIJCBFB : public ::System::Object
{
public:
	::MoleMole::FishCameraConfig BBCODANAFGI; // 0x10
	::FBMFHPMONGC_BNAIPBIALGM* FOBKJGCBGKP; // 0x38
	::MoleMole::FishMoveParam* HNOPAJLDCFB; // 0x40
	::MoleMole::FishCameraConfig KILPCOMOCMD; // 0x48
	::System::Single AMHNBECNCNP; // 0x70
	::System::Single BAKAJPOHLHH; // 0x74
	::System::Single OLHBMKFCBNM; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_KMCEJIJCBFB__CTOR_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData NEENDIDIIHH()
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_KMCEJIJCBFB_NEENDIDIIHH_OFFSET))(this);
	}
};
