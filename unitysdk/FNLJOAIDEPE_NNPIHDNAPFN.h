#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class NapVirtualPipelineCamera; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }

#define FNLJOAIDEPE_NNPIHDNAPFN_OJPHGJNJGCF_OFFSET UNITYSDK_OFFSET(0x13234240)
#define FNLJOAIDEPE_NNPIHDNAPFN__CTOR_OFFSET UNITYSDK_OFFSET(0x13234230)

inline static constexpr unsigned int FNLJOAIDEPE_NNPIHDNAPFN_TypeDefinitionIndex = 69959;

class FNLJOAIDEPE_NNPIHDNAPFN : public ::System::Object
{
public:
	::MoleMole::Cameras::NapVirtualPipelineCamera* NNBIPFKGNMG; // 0x10
	::PipelineCamera::CameraCommandUnSpawnSubModules* EHDFDPBFINE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNLJOAIDEPE_NNPIHDNAPFN__CTOR_OFFSET))(this);
	}

	::System::Void OJPHGJNJGCF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNLJOAIDEPE_NNPIHDNAPFN_OJPHGJNJGCF_OFFSET))(this);
	}
};
