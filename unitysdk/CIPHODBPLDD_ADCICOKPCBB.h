#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class NapVirtualPipelineCamera; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }

#define CIPHODBPLDD_ADCICOKPCBB_MHOCBDNKKJK_OFFSET UNITYSDK_OFFSET(0x147A24B0)
#define CIPHODBPLDD_ADCICOKPCBB__CTOR_OFFSET UNITYSDK_OFFSET(0x147A24A0)

inline static constexpr unsigned int CIPHODBPLDD_ADCICOKPCBB_TypeDefinitionIndex = 86491;

class CIPHODBPLDD_ADCICOKPCBB : public ::System::Object
{
public:
	::MoleMole::Cameras::NapVirtualPipelineCamera* NNBIPFKGNMG; // 0x10
	::PipelineCamera::CameraCommandUnSpawnSubModules* MJJIOHKLAKK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIPHODBPLDD_ADCICOKPCBB__CTOR_OFFSET))(this);
	}

	::System::Void MHOCBDNKKJK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIPHODBPLDD_ADCICOKPCBB_MHOCBDNKKJK_OFFSET))(this);
	}
};
