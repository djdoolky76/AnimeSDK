#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/MoleMole/Config/EnterBattleState.h"

#define ELCCFMJIIPD_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x14177540)
#define ELCCFMJIIPD_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x141774B0)
#define ELCCFMJIIPD_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x14177420)
#define ELCCFMJIIPD__CCTOR_OFFSET UNITYSDK_OFFSET(0x141773A0)
#define ELCCFMJIIPD__CTOR_OFFSET UNITYSDK_OFFSET(0x14177410)

inline static constexpr unsigned int ELCCFMJIIPD_TypeDefinitionIndex = 81457;

class ELCCFMJIIPD : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x59; // 0x0
	::MoleMole::Config::EnterBattleState EAAJMNAOLAE; // 0x20
	::MoleMole::Config::EnterBattleState HMMAHHECBCA; // 0x24

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELCCFMJIIPD__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELCCFMJIIPD__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELCCFMJIIPD_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELCCFMJIIPD_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::MoleMole::Config::EnterBattleState KDEHMPGOCEP, ::MoleMole::Config::EnterBattleState PADJNMGMGHO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::EnterBattleState, ::MoleMole::Config::EnterBattleState))((::PBYTE)hIl2Cpp + ELCCFMJIIPD_CNHBDOMKKDE_OFFSET))(this, KDEHMPGOCEP, PADJNMGMGHO);
	}
};
