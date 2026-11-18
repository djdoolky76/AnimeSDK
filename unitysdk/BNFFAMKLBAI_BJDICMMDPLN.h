#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class NapVirtualPipelineCamera; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }

#define BNFFAMKLBAI_BJDICMMDPLN_MHOCBDNKKJK_OFFSET UNITYSDK_OFFSET(0x13984D70)
#define BNFFAMKLBAI_BJDICMMDPLN__CTOR_OFFSET UNITYSDK_OFFSET(0x13984D60)

inline static constexpr unsigned int BNFFAMKLBAI_BJDICMMDPLN_TypeDefinitionIndex = 63483;

class BNFFAMKLBAI_BJDICMMDPLN : public ::System::Object
{
public:
	::PipelineCamera::CameraCommandUnSpawnSubModules* MJJIOHKLAKK; // 0x10
	::MoleMole::Cameras::NapVirtualPipelineCamera* NNBIPFKGNMG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFFAMKLBAI_BJDICMMDPLN__CTOR_OFFSET))(this);
	}

	::System::Void MHOCBDNKKJK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFFAMKLBAI_BJDICMMDPLN_MHOCBDNKKJK_OFFSET))(this);
	}
};
