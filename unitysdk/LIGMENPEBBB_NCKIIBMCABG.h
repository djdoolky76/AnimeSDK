#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LIGMENPEBBB;
namespace MoleMole::Cameras { class NapVirtualPipelineCamera; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }

#define LIGMENPEBBB_NCKIIBMCABG_MHOCBDNKKJK_OFFSET UNITYSDK_OFFSET(0x15660C00)
#define LIGMENPEBBB_NCKIIBMCABG__CTOR_OFFSET UNITYSDK_OFFSET(0x15660BF0)

inline static constexpr unsigned int LIGMENPEBBB_NCKIIBMCABG_TypeDefinitionIndex = 50626;

class LIGMENPEBBB_NCKIIBMCABG : public ::System::Object
{
public:
	::MoleMole::Cameras::NapVirtualPipelineCamera* NNBIPFKGNMG; // 0x10
	::PipelineCamera::CameraCommandUnSpawnSubModules* MJJIOHKLAKK; // 0x18
	::LIGMENPEBBB* KLHPEBKNIFB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIGMENPEBBB_NCKIIBMCABG__CTOR_OFFSET))(this);
	}

	::System::Void MHOCBDNKKJK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIGMENPEBBB_NCKIIBMCABG_MHOCBDNKKJK_OFFSET))(this);
	}
};
