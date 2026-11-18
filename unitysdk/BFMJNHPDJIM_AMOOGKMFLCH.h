#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BFMJNHPDJIM;
namespace MoleMole::Cameras { class NapVirtualPipelineCamera; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }

#define BFMJNHPDJIM_AMOOGKMFLCH_MHOCBDNKKJK_OFFSET UNITYSDK_OFFSET(0x14C410F0)
#define BFMJNHPDJIM_AMOOGKMFLCH__CTOR_OFFSET UNITYSDK_OFFSET(0x14C410E0)

inline static constexpr unsigned int BFMJNHPDJIM_AMOOGKMFLCH_TypeDefinitionIndex = 52814;

class BFMJNHPDJIM_AMOOGKMFLCH : public ::System::Object
{
public:
	::BFMJNHPDJIM* KLHPEBKNIFB; // 0x10
	::PipelineCamera::CameraCommandUnSpawnSubModules* MJJIOHKLAKK; // 0x18
	::MoleMole::Cameras::NapVirtualPipelineCamera* NNBIPFKGNMG; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFMJNHPDJIM_AMOOGKMFLCH__CTOR_OFFSET))(this);
	}

	::System::Void MHOCBDNKKJK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFMJNHPDJIM_AMOOGKMFLCH_MHOCBDNKKJK_OFFSET))(this);
	}
};
