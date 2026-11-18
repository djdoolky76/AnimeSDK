#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGLIFHIAIEH.h"
#include "unitysdk/KFIEJHHKEOL.h"
#include "unitysdk/KBKLCGKKIPI.h"

class EOGCDNPHKDI;
class JKHNCKENNKN;
namespace MoleMole::Arcade::CompanionProject { class CpAnimAxisInfo; }
namespace MoleMole::Arcade::CompanionProject { class CpSkillEffectMoveData; }

#define IKJHJOMNJFG_GMMEAGBMEFE_OFFSET UNITYSDK_OFFSET(0x1E76E060)
#define IKJHJOMNJFG_LGAFACFIAGI_OFFSET UNITYSDK_OFFSET(0x1E76E1A0)
#define IKJHJOMNJFG_MLOKEBDBDCN_OFFSET UNITYSDK_OFFSET(0x1E76D9D0)
#define IKJHJOMNJFG_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x1E76DB40)
#define IKJHJOMNJFG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E76E210)

inline static constexpr unsigned int IKJHJOMNJFG_TypeDefinitionIndex = 94356;

class IKJHJOMNJFG : public ::KFIEJHHKEOL
{
public:
	::MoleMole::Arcade::CompanionProject::CpSkillEffectMoveData* KJFPEDEODNM; // 0x60
	::EOGCDNPHKDI* LNEEMAGIHLB; // 0x68
	::JKHNCKENNKN* GJKKPBCJGHD; // 0x70
	::JGLIFHIAIEH AENOEFFHHEM; // 0x78
	::System::UInt32 MNAIIBHLHMA; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKJHJOMNJFG__CTOR_OFFSET))(this);
	}

	::System::Void MLOKEBDBDCN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKJHJOMNJFG_MLOKEBDBDCN_OFFSET))(this);
	}

	::System::Void PLPONJAKNEB(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IKJHJOMNJFG_PLPONJAKNEB_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void LGAFACFIAGI(::System::Boolean MBEMOHDDEMA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IKJHJOMNJFG_LGAFACFIAGI_OFFSET))(this, MBEMOHDDEMA);
	}

	::KBKLCGKKIPI GMMEAGBMEFE(::MoleMole::Arcade::CompanionProject::CpAnimAxisInfo* GHLDDFLECFK, ::System::Single EJAOAGGJHHA)
	{
		return ((::KBKLCGKKIPI(*)(::PVOID, ::MoleMole::Arcade::CompanionProject::CpAnimAxisInfo*, ::System::Single))((::PBYTE)hIl2Cpp + IKJHJOMNJFG_GMMEAGBMEFE_OFFSET))(this, GHLDDFLECFK, EJAOAGGJHHA);
	}
};
