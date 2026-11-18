#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FOJONDIPFFL;
namespace MoleMole::Cameras { class NapVirtualPipelineCamera; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }

#define FOJONDIPFFL_OKLIKLABION_CDBCDEHGOFO_OFFSET UNITYSDK_OFFSET(0x1750F350)
#define FOJONDIPFFL_OKLIKLABION__CTOR_OFFSET UNITYSDK_OFFSET(0x1750F340)

inline static constexpr unsigned int FOJONDIPFFL_OKLIKLABION_TypeDefinitionIndex = 55440;

class FOJONDIPFFL_OKLIKLABION : public ::System::Object
{
public:
	::MoleMole::Cameras::NapVirtualPipelineCamera* NNBIPFKGNMG; // 0x10
	::FOJONDIPFFL* KLHPEBKNIFB; // 0x18
	::PipelineCamera::CameraCommandUnSpawnSubModules* EHDFDPBFINE; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOJONDIPFFL_OKLIKLABION__CTOR_OFFSET))(this);
	}

	::System::Void CDBCDEHGOFO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOJONDIPFFL_OKLIKLABION_CDBCDEHGOFO_OFFSET))(this);
	}
};
