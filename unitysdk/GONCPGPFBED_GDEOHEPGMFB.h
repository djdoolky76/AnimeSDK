#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace System { class Action; }

#define GONCPGPFBED_GDEOHEPGMFB_PEGNELIFOBK_OFFSET UNITYSDK_OFFSET(0x125EF160)
#define GONCPGPFBED_GDEOHEPGMFB__CTOR_OFFSET UNITYSDK_OFFSET(0x125EF150)

inline static constexpr unsigned int GONCPGPFBED_GDEOHEPGMFB_TypeDefinitionIndex = 60471;

class GONCPGPFBED_GDEOHEPGMFB : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GONCPGPFBED_GDEOHEPGMFB__CTOR_OFFSET))(this);
	}

	::System::Void PEGNELIFOBK(::ConfigModuleLib::Runtime::LoadOpHandle PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadOpHandle))((::PBYTE)hIl2Cpp + GONCPGPFBED_GDEOHEPGMFB_PEGNELIFOBK_OFFSET))(this, PIIPCLCCOIG);
	}
};
