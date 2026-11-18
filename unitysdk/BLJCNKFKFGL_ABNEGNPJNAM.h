#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class NapVirtualPipelineCamera; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }

#define BLJCNKFKFGL_ABNEGNPJNAM_MHOCBDNKKJK_OFFSET UNITYSDK_OFFSET(0xF7AD170)
#define BLJCNKFKFGL_ABNEGNPJNAM__CTOR_OFFSET UNITYSDK_OFFSET(0xF7AC500)

inline static constexpr unsigned int BLJCNKFKFGL_ABNEGNPJNAM_TypeDefinitionIndex = 79705;

class BLJCNKFKFGL_ABNEGNPJNAM : public ::System::Object
{
public:
	::PipelineCamera::CameraCommandUnSpawnSubModules* MJJIOHKLAKK; // 0x10
	::MoleMole::Cameras::NapVirtualPipelineCamera* NNBIPFKGNMG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLJCNKFKFGL_ABNEGNPJNAM__CTOR_OFFSET))(this);
	}

	::System::Void MHOCBDNKKJK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLJCNKFKFGL_ABNEGNPJNAM_MHOCBDNKKJK_OFFSET))(this);
	}
};
