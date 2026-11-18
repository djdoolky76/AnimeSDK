#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class NapVirtualPipelineCamera; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }

#define IEBDNKDCKMP_KLOJGAABFDL_MHOCBDNKKJK_OFFSET UNITYSDK_OFFSET(0x1A39AFC0)
#define IEBDNKDCKMP_KLOJGAABFDL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A39AFB0)

inline static constexpr unsigned int IEBDNKDCKMP_KLOJGAABFDL_TypeDefinitionIndex = 85484;

class IEBDNKDCKMP_KLOJGAABFDL : public ::System::Object
{
public:
	::PipelineCamera::CameraCommandUnSpawnSubModules* MJJIOHKLAKK; // 0x10
	::MoleMole::Cameras::NapVirtualPipelineCamera* NNBIPFKGNMG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEBDNKDCKMP_KLOJGAABFDL__CTOR_OFFSET))(this);
	}

	::System::Void MHOCBDNKKJK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEBDNKDCKMP_KLOJGAABFDL_MHOCBDNKKJK_OFFSET))(this);
	}
};
