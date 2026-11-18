#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/EnterBattleState.h"
#include "unitysdk/System/Object.h"

class FLNIDONOPNI;
namespace Nap::NapECS { class EcsEntity; }

#define KJABOGKOOOL_KNACHMLJHFL_AJDJNGHFHMB_OFFSET UNITYSDK_OFFSET(0x1268A7F0)
#define KJABOGKOOOL_KNACHMLJHFL_CLPDJMFFPPD_OFFSET UNITYSDK_OFFSET(0x1268A6E0)
#define KJABOGKOOOL_KNACHMLJHFL__CTOR_OFFSET UNITYSDK_OFFSET(0x1268A6D0)

inline static constexpr unsigned int KJABOGKOOOL_KNACHMLJHFL_TypeDefinitionIndex = 60346;

class KJABOGKOOOL_KNACHMLJHFL : public ::System::Object
{
public:
	::FLNIDONOPNI* CACOKCPFADL; // 0x10
	::Nap::NapECS::EcsEntity* MNGHGOLKKNO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJABOGKOOOL_KNACHMLJHFL__CTOR_OFFSET))(this);
	}

	::System::Void CLPDJMFFPPD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJABOGKOOOL_KNACHMLJHFL_CLPDJMFFPPD_OFFSET))(this);
	}

	::System::Void AJDJNGHFHMB(::MoleMole::Config::EnterBattleState KDEHMPGOCEP, ::MoleMole::Config::EnterBattleState PADJNMGMGHO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::EnterBattleState, ::MoleMole::Config::EnterBattleState))((::PBYTE)hIl2Cpp + KJABOGKOOOL_KNACHMLJHFL_AJDJNGHFHMB_OFFSET))(this, KDEHMPGOCEP, PADJNMGMGHO);
	}
};
