#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/IJPMPAOAEDN.h"
#include "unitysdk/MoleMole/Config/BuffGroupName.h"

namespace System { class String; }

#define IGGMIDHNJNJ_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x160A2830)
#define IGGMIDHNJNJ_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x160A28B0)
#define IGGMIDHNJNJ_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x160A28F0)
#define IGGMIDHNJNJ_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x160A27A0)
#define IGGMIDHNJNJ_IADJFEPJDAN_OFFSET UNITYSDK_OFFSET(0x160A2710)
#define IGGMIDHNJNJ_IBDMIGBCFOF_OFFSET UNITYSDK_OFFSET(0x160A2640)
#define IGGMIDHNJNJ_JJBKOIBPLIK_OFFSET UNITYSDK_OFFSET(0x160A2600)
#define IGGMIDHNJNJ_LFOIMNGPNFK_OFFSET UNITYSDK_OFFSET(0x160A2700)
#define IGGMIDHNJNJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x160A2680)
#define IGGMIDHNJNJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x160A2720)
#define IGGMIDHNJNJ__CTOR_OFFSET UNITYSDK_OFFSET(0x160A2790)

inline static constexpr unsigned int IGGMIDHNJNJ_TypeDefinitionIndex = 58826;

class IGGMIDHNJNJ : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x33; // 0x0
	::System::Int32 DGIAGIMPCEA; // 0x20
	::IJPMPAOAEDN _KEHOGNPKOLB_k__BackingField; // 0x24
	::MoleMole::Config::BuffGroupName IJDLBAIFLFA; // 0x28
	::System::UInt32 PFLFNCBLLGD; // 0x2C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IGGMIDHNJNJ__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGGMIDHNJNJ__CTOR_OFFSET))(this);
	}

	::System::Int32 JJBKOIBPLIK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGGMIDHNJNJ_JJBKOIBPLIK_OFFSET))(this);
	}

	::MoleMole::Config::BuffGroupName IBDMIGBCFOF()
	{
		return ((::MoleMole::Config::BuffGroupName(*)(::PVOID))((::PBYTE)hIl2Cpp + IGGMIDHNJNJ_IBDMIGBCFOF_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGGMIDHNJNJ_TOSTRING_OFFSET))(this);
	}

	::IJPMPAOAEDN LFOIMNGPNFK()
	{
		return ((::IJPMPAOAEDN(*)(::PVOID))((::PBYTE)hIl2Cpp + IGGMIDHNJNJ_LFOIMNGPNFK_OFFSET))(this);
	}

	::System::Void IADJFEPJDAN(::IJPMPAOAEDN EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::IJPMPAOAEDN))((::PBYTE)hIl2Cpp + IGGMIDHNJNJ_IADJFEPJDAN_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGGMIDHNJNJ_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 PPNALIJJAJL, ::System::UInt32 NMOGICJLOIA, ::MoleMole::Config::BuffGroupName IJDLBAIFLFA, ::System::Int32 BOBBHFPEPHC, ::System::Boolean MGHIIMICACG)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::MoleMole::Config::BuffGroupName, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + IGGMIDHNJNJ_CNHBDOMKKDE_OFFSET))(this, PPNALIJJAJL, NMOGICJLOIA, IJDLBAIFLFA, BOBBHFPEPHC, MGHIIMICACG);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGGMIDHNJNJ_DPIHOJBBGLA_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGGMIDHNJNJ_FIGPAOKNJLN_OFFSET))(this);
	}
};
