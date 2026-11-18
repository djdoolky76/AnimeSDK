#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class CGHLPBBNBJG;
namespace MoleMole::Config { class ConfigHighLightAirCombatCamera; }

#define CGHLPBBNBJG_BPCGMIBGKGI_BHEKKKNPHAM_OFFSET UNITYSDK_OFFSET(0x16867420)
#define CGHLPBBNBJG_BPCGMIBGKGI__CTOR_OFFSET UNITYSDK_OFFSET(0x16867410)

inline static constexpr unsigned int CGHLPBBNBJG_BPCGMIBGKGI_TypeDefinitionIndex = 78248;

class CGHLPBBNBJG_BPCGMIBGKGI : public ::System::Object
{
public:
	::Foundation::AssetPath CJBJONJDOLI; // 0x10
	::CGHLPBBNBJG* KLHPEBKNIFB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGHLPBBNBJG_BPCGMIBGKGI__CTOR_OFFSET))(this);
	}

	::System::Void BHEKKKNPHAM(::MoleMole::Config::ConfigHighLightAirCombatCamera* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHighLightAirCombatCamera*))((::PBYTE)hIl2Cpp + CGHLPBBNBJG_BPCGMIBGKGI_BHEKKKNPHAM_OFFSET))(this, DFMKILICPFB);
	}
};
