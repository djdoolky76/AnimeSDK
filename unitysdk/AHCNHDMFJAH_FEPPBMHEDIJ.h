#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class NapVirtualPipelineCamera; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }

#define AHCNHDMFJAH_FEPPBMHEDIJ_MHOCBDNKKJK_OFFSET UNITYSDK_OFFSET(0x17DD6130)
#define AHCNHDMFJAH_FEPPBMHEDIJ__CTOR_OFFSET UNITYSDK_OFFSET(0x17DD6120)

inline static constexpr unsigned int AHCNHDMFJAH_FEPPBMHEDIJ_TypeDefinitionIndex = 78391;

class AHCNHDMFJAH_FEPPBMHEDIJ : public ::System::Object
{
public:
	::MoleMole::Cameras::NapVirtualPipelineCamera* NNBIPFKGNMG; // 0x10
	::PipelineCamera::CameraCommandUnSpawnSubModules* MJJIOHKLAKK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHCNHDMFJAH_FEPPBMHEDIJ__CTOR_OFFSET))(this);
	}

	::System::Void MHOCBDNKKJK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHCNHDMFJAH_FEPPBMHEDIJ_MHOCBDNKKJK_OFFSET))(this);
	}
};
