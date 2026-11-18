#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FishCameraConfig.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

class ABJMPKENACD_MCHLABNGIPF;
namespace MoleMole { class FishMoveParam; }

#define ABJMPKENACD_BHEFFDCPGJH_NEENDIDIIHH_OFFSET UNITYSDK_OFFSET(0x135D1410)
#define ABJMPKENACD_BHEFFDCPGJH__CTOR_OFFSET UNITYSDK_OFFSET(0x135D1400)

inline static constexpr unsigned int ABJMPKENACD_BHEFFDCPGJH_TypeDefinitionIndex = 88633;

class ABJMPKENACD_BHEFFDCPGJH : public ::System::Object
{
public:
	::MoleMole::FishCameraConfig BBCODANAFGI; // 0x10
	::MoleMole::FishCameraConfig KILPCOMOCMD; // 0x38
	::MoleMole::FishMoveParam* HNOPAJLDCFB; // 0x60
	::ABJMPKENACD_MCHLABNGIPF* FOBKJGCBGKP; // 0x68
	::System::Single AMHNBECNCNP; // 0x70
	::System::Single OLHBMKFCBNM; // 0x74
	::System::Single BAKAJPOHLHH; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_BHEFFDCPGJH__CTOR_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData NEENDIDIIHH()
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_BHEFFDCPGJH_NEENDIDIIHH_OFFSET))(this);
	}
};
