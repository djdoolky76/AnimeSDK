#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class NapVirtualPipelineCamera; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }

#define LFEBKBLPAOA_MLMECANHDKN_MHOCBDNKKJK_OFFSET UNITYSDK_OFFSET(0x1A605820)
#define LFEBKBLPAOA_MLMECANHDKN__CTOR_OFFSET UNITYSDK_OFFSET(0x1A605810)

inline static constexpr unsigned int LFEBKBLPAOA_MLMECANHDKN_TypeDefinitionIndex = 48657;

class LFEBKBLPAOA_MLMECANHDKN : public ::System::Object
{
public:
	::PipelineCamera::CameraCommandUnSpawnSubModules* MJJIOHKLAKK; // 0x10
	::MoleMole::Cameras::NapVirtualPipelineCamera* NNBIPFKGNMG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFEBKBLPAOA_MLMECANHDKN__CTOR_OFFSET))(this);
	}

	::System::Void MHOCBDNKKJK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFEBKBLPAOA_MLMECANHDKN_MHOCBDNKKJK_OFFSET))(this);
	}
};
