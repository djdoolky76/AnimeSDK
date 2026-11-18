#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FishCameraConfig.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

class ABJMPKENACD_MCHLABNGIPF;

#define ABJMPKENACD_IKMDLIGHDGM_AIDJJODPENF_OFFSET UNITYSDK_OFFSET(0x12640700)
#define ABJMPKENACD_IKMDLIGHDGM__CTOR_OFFSET UNITYSDK_OFFSET(0x126406F0)

inline static constexpr unsigned int ABJMPKENACD_IKMDLIGHDGM_TypeDefinitionIndex = 88642;

class ABJMPKENACD_IKMDLIGHDGM : public ::System::Object
{
public:
	::MoleMole::FishCameraConfig EJJNGFCGNAK; // 0x10
	::ABJMPKENACD_MCHLABNGIPF* KGFKHBMEKBL; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_IKMDLIGHDGM__CTOR_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData AIDJJODPENF()
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_IKMDLIGHDGM_AIDJJODPENF_OFFSET))(this);
	}
};
