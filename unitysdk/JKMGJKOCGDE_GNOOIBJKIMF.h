#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JKMGJKOCGDE;
namespace MoleMole::Cameras { class NapVirtualPipelineCamera; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }

#define JKMGJKOCGDE_GNOOIBJKIMF_MHOCBDNKKJK_OFFSET UNITYSDK_OFFSET(0x19460800)
#define JKMGJKOCGDE_GNOOIBJKIMF__CTOR_OFFSET UNITYSDK_OFFSET(0x194607F0)

inline static constexpr unsigned int JKMGJKOCGDE_GNOOIBJKIMF_TypeDefinitionIndex = 89839;

class JKMGJKOCGDE_GNOOIBJKIMF : public ::System::Object
{
public:
	::MoleMole::Cameras::NapVirtualPipelineCamera* NNBIPFKGNMG; // 0x10
	::JKMGJKOCGDE* KLHPEBKNIFB; // 0x18
	::PipelineCamera::CameraCommandUnSpawnSubModules* MJJIOHKLAKK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKMGJKOCGDE_GNOOIBJKIMF__CTOR_OFFSET))(this);
	}

	::System::Void MHOCBDNKKJK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKMGJKOCGDE_GNOOIBJKIMF_MHOCBDNKKJK_OFFSET))(this);
	}
};
