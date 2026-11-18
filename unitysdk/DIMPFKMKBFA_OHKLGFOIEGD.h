#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DIMPFKMKBFA;
namespace MoleMole::Cameras { class NapVirtualPipelineCamera; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }

#define DIMPFKMKBFA_OHKLGFOIEGD_MHOCBDNKKJK_OFFSET UNITYSDK_OFFSET(0x16BA1D80)
#define DIMPFKMKBFA_OHKLGFOIEGD__CTOR_OFFSET UNITYSDK_OFFSET(0x16BA1D70)

inline static constexpr unsigned int DIMPFKMKBFA_OHKLGFOIEGD_TypeDefinitionIndex = 41870;

class DIMPFKMKBFA_OHKLGFOIEGD : public ::System::Object
{
public:
	::DIMPFKMKBFA* KLHPEBKNIFB; // 0x10
	::MoleMole::Cameras::NapVirtualPipelineCamera* NNBIPFKGNMG; // 0x18
	::PipelineCamera::CameraCommandUnSpawnSubModules* MJJIOHKLAKK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIMPFKMKBFA_OHKLGFOIEGD__CTOR_OFFSET))(this);
	}

	::System::Void MHOCBDNKKJK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIMPFKMKBFA_OHKLGFOIEGD_MHOCBDNKKJK_OFFSET))(this);
	}
};
