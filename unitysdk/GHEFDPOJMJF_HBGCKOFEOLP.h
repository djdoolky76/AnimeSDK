#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class NapVirtualPipelineCamera; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }

#define GHEFDPOJMJF_HBGCKOFEOLP_MHOCBDNKKJK_OFFSET UNITYSDK_OFFSET(0x13D50B20)
#define GHEFDPOJMJF_HBGCKOFEOLP__CTOR_OFFSET UNITYSDK_OFFSET(0x13D50B10)

inline static constexpr unsigned int GHEFDPOJMJF_HBGCKOFEOLP_TypeDefinitionIndex = 89948;

class GHEFDPOJMJF_HBGCKOFEOLP : public ::System::Object
{
public:
	::MoleMole::Cameras::NapVirtualPipelineCamera* NNBIPFKGNMG; // 0x10
	::PipelineCamera::CameraCommandUnSpawnSubModules* MJJIOHKLAKK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHEFDPOJMJF_HBGCKOFEOLP__CTOR_OFFSET))(this);
	}

	::System::Void MHOCBDNKKJK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHEFDPOJMJF_HBGCKOFEOLP_MHOCBDNKKJK_OFFSET))(this);
	}
};
