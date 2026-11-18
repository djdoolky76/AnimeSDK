#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class NapVirtualPipelineCamera; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }

#define AGGKHJLILDC_BPINEHBEHDN_MHOCBDNKKJK_OFFSET UNITYSDK_OFFSET(0x134C5240)
#define AGGKHJLILDC_BPINEHBEHDN__CTOR_OFFSET UNITYSDK_OFFSET(0x134C5230)

inline static constexpr unsigned int AGGKHJLILDC_BPINEHBEHDN_TypeDefinitionIndex = 65219;

class AGGKHJLILDC_BPINEHBEHDN : public ::System::Object
{
public:
	::PipelineCamera::CameraCommandUnSpawnSubModules* MJJIOHKLAKK; // 0x10
	::MoleMole::Cameras::NapVirtualPipelineCamera* NNBIPFKGNMG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGGKHJLILDC_BPINEHBEHDN__CTOR_OFFSET))(this);
	}

	::System::Void MHOCBDNKKJK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGGKHJLILDC_BPINEHBEHDN_MHOCBDNKKJK_OFFSET))(this);
	}
};
