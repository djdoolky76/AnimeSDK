#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/IJPMPAOAEDN.h"
#include "unitysdk/MoleMole/Config/BuffGroupName.h"

#define LKCLCPDEMAH_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x168552C0)
#define LKCLCPDEMAH_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x16855230)
#define LKCLCPDEMAH_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x168551A0)
#define LKCLCPDEMAH_IADJFEPJDAN_OFFSET UNITYSDK_OFFSET(0x16855110)
#define LKCLCPDEMAH_IBDMIGBCFOF_OFFSET UNITYSDK_OFFSET(0x168550C0)
#define LKCLCPDEMAH_JJBKOIBPLIK_OFFSET UNITYSDK_OFFSET(0x16855080)
#define LKCLCPDEMAH_LFOIMNGPNFK_OFFSET UNITYSDK_OFFSET(0x16855100)
#define LKCLCPDEMAH__CCTOR_OFFSET UNITYSDK_OFFSET(0x16855120)
#define LKCLCPDEMAH__CTOR_OFFSET UNITYSDK_OFFSET(0x16855190)

inline static constexpr unsigned int LKCLCPDEMAH_TypeDefinitionIndex = 50077;

class LKCLCPDEMAH : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x35; // 0x0
	::IJPMPAOAEDN _KEHOGNPKOLB_k__BackingField; // 0x20
	::MoleMole::Config::BuffGroupName INHOBHGNEAC; // 0x24
	::System::Int32 AJLJGBAKHKK; // 0x28
	::System::Boolean LCGNHLHPDLE; // 0x2C
	::System::Byte _padding0[0x3];
	::System::Single FIJOBBHOHKP; // 0x30
	::System::UInt32 PFLFNCBLLGD; // 0x34
	::System::Int32 DGIAGIMPCEA; // 0x38
	::System::Int32 NCKAELBMMJG; // 0x3C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LKCLCPDEMAH__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKCLCPDEMAH__CTOR_OFFSET))(this);
	}

	::System::Int32 JJBKOIBPLIK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LKCLCPDEMAH_JJBKOIBPLIK_OFFSET))(this);
	}

	::MoleMole::Config::BuffGroupName IBDMIGBCFOF()
	{
		return ((::MoleMole::Config::BuffGroupName(*)(::PVOID))((::PBYTE)hIl2Cpp + LKCLCPDEMAH_IBDMIGBCFOF_OFFSET))(this);
	}

	::IJPMPAOAEDN LFOIMNGPNFK()
	{
		return ((::IJPMPAOAEDN(*)(::PVOID))((::PBYTE)hIl2Cpp + LKCLCPDEMAH_LFOIMNGPNFK_OFFSET))(this);
	}

	::System::Void IADJFEPJDAN(::IJPMPAOAEDN EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::IJPMPAOAEDN))((::PBYTE)hIl2Cpp + LKCLCPDEMAH_IADJFEPJDAN_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKCLCPDEMAH_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKCLCPDEMAH_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::Boolean CAAFEGLOALC, ::System::UInt32 JIJFDGHPNHE, ::System::Int32 BOBBHFPEPHC, ::MoleMole::Config::BuffGroupName IJDLBAIFLFA, ::System::Int32 AAHOOGPHHDN, ::System::Int32 NLOIKAIIMLD, ::System::Single KNHOLJLLFOC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32, ::System::Int32, ::MoleMole::Config::BuffGroupName, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + LKCLCPDEMAH_CNHBDOMKKDE_OFFSET))(this, CAAFEGLOALC, JIJFDGHPNHE, BOBBHFPEPHC, IJDLBAIFLFA, AAHOOGPHHDN, NLOIKAIIMLD, KNHOLJLLFOC);
	}
};
