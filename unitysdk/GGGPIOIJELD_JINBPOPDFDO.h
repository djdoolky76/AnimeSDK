#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class NapVirtualPipelineCamera; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }

#define GGGPIOIJELD_JINBPOPDFDO_MHOCBDNKKJK_OFFSET UNITYSDK_OFFSET(0x15F1DF60)
#define GGGPIOIJELD_JINBPOPDFDO__CTOR_OFFSET UNITYSDK_OFFSET(0x15F1DF50)

inline static constexpr unsigned int GGGPIOIJELD_JINBPOPDFDO_TypeDefinitionIndex = 92660;

class GGGPIOIJELD_JINBPOPDFDO : public ::System::Object
{
public:
	::MoleMole::Cameras::NapVirtualPipelineCamera* NNBIPFKGNMG; // 0x10
	::PipelineCamera::CameraCommandUnSpawnSubModules* MJJIOHKLAKK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGGPIOIJELD_JINBPOPDFDO__CTOR_OFFSET))(this);
	}

	::System::Void MHOCBDNKKJK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGGPIOIJELD_JINBPOPDFDO_MHOCBDNKKJK_OFFSET))(this);
	}
};
