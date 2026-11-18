#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/EnterBattleState.h"
#include "unitysdk/NDLAFLLJANL_FAJICBOCEOG.h"
#include "unitysdk/OAOOLPCNHKA.h"

class AGJFDPBLDDF;
class NDLAFLLJANL;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define ENEEEAPOCEL_HDGDKKEKNAL_OFFSET UNITYSDK_OFFSET(0x13551680)
#define ENEEEAPOCEL_HKNKJGFJHCF_OFFSET UNITYSDK_OFFSET(0x135517C0)
#define ENEEEAPOCEL_LHIOICIPFCD_OFFSET UNITYSDK_OFFSET(0x13551760)
#define ENEEEAPOCEL_NCHLKOHEAKP_OFFSET UNITYSDK_OFFSET(0x13551DD0)
#define ENEEEAPOCEL_OIFIPMMBMCI_OFFSET UNITYSDK_OFFSET(0x13551FE0)
#define ENEEEAPOCEL_OPEDPJAPGEN_OFFSET UNITYSDK_OFFSET(0x13551A60)
#define ENEEEAPOCEL__CTOR_OFFSET UNITYSDK_OFFSET(0x13551630)

inline static constexpr unsigned int ENEEEAPOCEL_TypeDefinitionIndex = 80809;

class ENEEEAPOCEL : public ::OAOOLPCNHKA
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENEEEAPOCEL__CTOR_OFFSET))(this);
	}

	static ::System::Void HDGDKKEKNAL(::MoleMole::Config::EnterBattleState FDDFDLEINFM, ::NDLAFLLJANL* EMBMHDIAGDE)
	{
		return ((::System::Void(*)(::MoleMole::Config::EnterBattleState, ::NDLAFLLJANL*))((::PBYTE)hIl2Cpp + ENEEEAPOCEL_HDGDKKEKNAL_OFFSET))(FDDFDLEINFM, EMBMHDIAGDE);
	}

	static ::System::Boolean LHIOICIPFCD(::AGJFDPBLDDF* HACJFKBLODH)
	{
		return ((::System::Boolean(*)(::AGJFDPBLDDF*))((::PBYTE)hIl2Cpp + ENEEEAPOCEL_LHIOICIPFCD_OFFSET))(HACJFKBLODH);
	}

	static ::System::Void HKNKJGFJHCF(::System::String* AELLPLBJELA, ::NDLAFLLJANL* EMBMHDIAGDE)
	{
		return ((::System::Void(*)(::System::String*, ::NDLAFLLJANL*))((::PBYTE)hIl2Cpp + ENEEEAPOCEL_HKNKJGFJHCF_OFFSET))(AELLPLBJELA, EMBMHDIAGDE);
	}

	static ::System::Boolean OPEDPJAPGEN(::MoleMole::Config::EnterBattleState FDDFDLEINFM, ::NDLAFLLJANL* EMBMHDIAGDE, ::NDLAFLLJANL_FAJICBOCEOG BCMFJGLGNJL, ::System::Boolean DGFJJCIAGPA)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::EnterBattleState, ::NDLAFLLJANL*, ::NDLAFLLJANL_FAJICBOCEOG, ::System::Boolean))((::PBYTE)hIl2Cpp + ENEEEAPOCEL_OPEDPJAPGEN_OFFSET))(FDDFDLEINFM, EMBMHDIAGDE, BCMFJGLGNJL, DGFJJCIAGPA);
	}

	static ::System::Void NCHLKOHEAKP(::System::String* AELLPLBJELA, ::MoleMole::Config::EnterBattleState JKBLDFBGBPK, ::NDLAFLLJANL* EMBMHDIAGDE)
	{
		return ((::System::Void(*)(::System::String*, ::MoleMole::Config::EnterBattleState, ::NDLAFLLJANL*))((::PBYTE)hIl2Cpp + ENEEEAPOCEL_NCHLKOHEAKP_OFFSET))(AELLPLBJELA, JKBLDFBGBPK, EMBMHDIAGDE);
	}

	static ::System::Void OIFIPMMBMCI(::MoleMole::Battle::Entity* KECKGDFIALJ, ::MoleMole::Config::EnterBattleState FDDFDLEINFM, ::NDLAFLLJANL_FAJICBOCEOG BCMFJGLGNJL)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Config::EnterBattleState, ::NDLAFLLJANL_FAJICBOCEOG))((::PBYTE)hIl2Cpp + ENEEEAPOCEL_OIFIPMMBMCI_OFFSET))(KECKGDFIALJ, FDDFDLEINFM, BCMFJGLGNJL);
	}
};
