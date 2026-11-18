#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

class AEJLJONCNNJ;
namespace Nap::NapECS { class EcsWorld; }

#define AEJLJONCNNJ_JGFOIPALFEG_EFKKONJMGLF_OFFSET UNITYSDK_OFFSET(0x17CBA950)
#define AEJLJONCNNJ_JGFOIPALFEG__CTOR_OFFSET UNITYSDK_OFFSET(0x17CBA940)

inline static constexpr unsigned int AEJLJONCNNJ_JGFOIPALFEG_TypeDefinitionIndex = 76685;

class AEJLJONCNNJ_JGFOIPALFEG : public ::System::Object
{
public:
	::AEJLJONCNNJ* KLHPEBKNIFB; // 0x10
	::Nap::NapECS::EcsWorld* GEEHGDABNJF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEJLJONCNNJ_JGFOIPALFEG__CTOR_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData EFKKONJMGLF()
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID))((::PBYTE)hIl2Cpp + AEJLJONCNNJ_JGFOIPALFEG_EFKKONJMGLF_OFFSET))(this);
	}
};
