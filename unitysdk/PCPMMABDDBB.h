#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/IJPMPAOAEDN.h"
#include "unitysdk/MoleMole/Config/BuffGroupName.h"

#define PCPMMABDDBB_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x136F2CE0)
#define PCPMMABDDBB_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x136F2DB0)
#define PCPMMABDDBB_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x136F2C50)
#define PCPMMABDDBB_IADJFEPJDAN_OFFSET UNITYSDK_OFFSET(0x136F2BC0)
#define PCPMMABDDBB_IBDMIGBCFOF_OFFSET UNITYSDK_OFFSET(0x136F2B70)
#define PCPMMABDDBB_JJBKOIBPLIK_OFFSET UNITYSDK_OFFSET(0x136F2B30)
#define PCPMMABDDBB_LFOIMNGPNFK_OFFSET UNITYSDK_OFFSET(0x136F2BB0)
#define PCPMMABDDBB__CCTOR_OFFSET UNITYSDK_OFFSET(0x136F2BD0)
#define PCPMMABDDBB__CTOR_OFFSET UNITYSDK_OFFSET(0x136F2C40)

inline static constexpr unsigned int PCPMMABDDBB_TypeDefinitionIndex = 52080;

class PCPMMABDDBB : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x34; // 0x0
	::System::Boolean LPEINDNAPFG; // 0x20
	::System::Boolean LCGNHLHPDLE; // 0x21
	::System::Byte _padding0[0x2];
	::IJPMPAOAEDN _KEHOGNPKOLB_k__BackingField; // 0x24
	::System::Int32 AJLJGBAKHKK; // 0x28
	::System::Int32 DGIAGIMPCEA; // 0x2C
	::System::UInt32 AGOPADLDEHJ; // 0x30
	::MoleMole::Config::BuffGroupName INHOBHGNEAC; // 0x34
	::System::Single FIJOBBHOHKP; // 0x38
	::System::Int32 NCKAELBMMJG; // 0x3C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PCPMMABDDBB__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCPMMABDDBB__CTOR_OFFSET))(this);
	}

	::System::Int32 JJBKOIBPLIK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PCPMMABDDBB_JJBKOIBPLIK_OFFSET))(this);
	}

	::MoleMole::Config::BuffGroupName IBDMIGBCFOF()
	{
		return ((::MoleMole::Config::BuffGroupName(*)(::PVOID))((::PBYTE)hIl2Cpp + PCPMMABDDBB_IBDMIGBCFOF_OFFSET))(this);
	}

	::IJPMPAOAEDN LFOIMNGPNFK()
	{
		return ((::IJPMPAOAEDN(*)(::PVOID))((::PBYTE)hIl2Cpp + PCPMMABDDBB_LFOIMNGPNFK_OFFSET))(this);
	}

	::System::Void IADJFEPJDAN(::IJPMPAOAEDN EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::IJPMPAOAEDN))((::PBYTE)hIl2Cpp + PCPMMABDDBB_IADJFEPJDAN_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCPMMABDDBB_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::Boolean CAAFEGLOALC, ::System::UInt32 JMCPHKBIBBO, ::System::Int32 BOBBHFPEPHC, ::MoleMole::Config::BuffGroupName IJDLBAIFLFA, ::System::Int32 AAHOOGPHHDN, ::System::Int32 NLOIKAIIMLD, ::System::Single KNHOLJLLFOC, ::System::Boolean MLOLCDBPEBH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32, ::System::Int32, ::MoleMole::Config::BuffGroupName, ::System::Int32, ::System::Int32, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + PCPMMABDDBB_CNHBDOMKKDE_OFFSET))(this, CAAFEGLOALC, JMCPHKBIBBO, BOBBHFPEPHC, IJDLBAIFLFA, AAHOOGPHHDN, NLOIKAIIMLD, KNHOLJLLFOC, MLOLCDBPEBH);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCPMMABDDBB_FIGPAOKNJLN_OFFSET))(this);
	}
};
