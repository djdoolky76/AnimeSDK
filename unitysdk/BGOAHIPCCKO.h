#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

namespace MoleMole { class TurnBattleUnitBase; }

#define BGOAHIPCCKO_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x142503D0)
#define BGOAHIPCCKO_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x142502A0)
#define BGOAHIPCCKO_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x14250210)
#define BGOAHIPCCKO_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x14250330)
#define BGOAHIPCCKO_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x14250120)
#define BGOAHIPCCKO__CCTOR_OFFSET UNITYSDK_OFFSET(0x14250190)
#define BGOAHIPCCKO__CTOR_OFFSET UNITYSDK_OFFSET(0x14250200)

inline static constexpr unsigned int BGOAHIPCCKO_TypeDefinitionIndex = 63913;

class BGOAHIPCCKO : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x15E; // 0x0
	::MoleMole::TurnBattleUnitBase* JJFILOBCCGA; // 0x20
	::System::Single CPPDKIMMGBG; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGOAHIPCCKO__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGOAHIPCCKO__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGOAHIPCCKO_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGOAHIPCCKO_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGOAHIPCCKO_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGOAHIPCCKO_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::Single MKMAKEFALAP, ::MoleMole::TurnBattleUnitBase* DGCGOJNDKPM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::MoleMole::TurnBattleUnitBase*))((::PBYTE)hIl2Cpp + BGOAHIPCCKO_CNHBDOMKKDE_OFFSET))(this, MKMAKEFALAP, DGCGOJNDKPM);
	}
};
