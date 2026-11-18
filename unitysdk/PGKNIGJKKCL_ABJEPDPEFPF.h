#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class NapVirtualPipelineCamera; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }

#define PGKNIGJKKCL_ABJEPDPEFPF_MHOCBDNKKJK_OFFSET UNITYSDK_OFFSET(0x11979EE0)
#define PGKNIGJKKCL_ABJEPDPEFPF__CTOR_OFFSET UNITYSDK_OFFSET(0x11979ED0)

inline static constexpr unsigned int PGKNIGJKKCL_ABJEPDPEFPF_TypeDefinitionIndex = 75331;

class PGKNIGJKKCL_ABJEPDPEFPF : public ::System::Object
{
public:
	::MoleMole::Cameras::NapVirtualPipelineCamera* NNBIPFKGNMG; // 0x10
	::PipelineCamera::CameraCommandUnSpawnSubModules* MJJIOHKLAKK; // 0x18
	::System::Boolean OBCBDOAEICA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGKNIGJKKCL_ABJEPDPEFPF__CTOR_OFFSET))(this);
	}

	::System::Void MHOCBDNKKJK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGKNIGJKKCL_ABJEPDPEFPF_MHOCBDNKKJK_OFFSET))(this);
	}
};
