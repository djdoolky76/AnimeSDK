#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FOENNNFFBGL;
namespace MoleMole::Cameras { class NapVirtualPipelineCamera; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }

#define FOENNNFFBGL_ADCFFOMLKGC_MHOCBDNKKJK_OFFSET UNITYSDK_OFFSET(0x11C74C20)
#define FOENNNFFBGL_ADCFFOMLKGC__CTOR_OFFSET UNITYSDK_OFFSET(0x11C74C10)

inline static constexpr unsigned int FOENNNFFBGL_ADCFFOMLKGC_TypeDefinitionIndex = 47043;

class FOENNNFFBGL_ADCFFOMLKGC : public ::System::Object
{
public:
	::PipelineCamera::CameraCommandUnSpawnSubModules* MJJIOHKLAKK; // 0x10
	::FOENNNFFBGL* KLHPEBKNIFB; // 0x18
	::MoleMole::Cameras::NapVirtualPipelineCamera* NNBIPFKGNMG; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOENNNFFBGL_ADCFFOMLKGC__CTOR_OFFSET))(this);
	}

	::System::Void MHOCBDNKKJK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOENNNFFBGL_ADCFFOMLKGC_MHOCBDNKKJK_OFFSET))(this);
	}
};
