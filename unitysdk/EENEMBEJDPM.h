#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/IJPMPAOAEDN.h"
#include "unitysdk/MoleMole/Config/BuffGroupName.h"

#define EENEMBEJDPM_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x154A2C70)
#define EENEMBEJDPM_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x154A2D30)
#define EENEMBEJDPM_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x154A2BE0)
#define EENEMBEJDPM_IADJFEPJDAN_OFFSET UNITYSDK_OFFSET(0x154A2B50)
#define EENEMBEJDPM_IBDMIGBCFOF_OFFSET UNITYSDK_OFFSET(0x154A2B00)
#define EENEMBEJDPM_JJBKOIBPLIK_OFFSET UNITYSDK_OFFSET(0x154A2AC0)
#define EENEMBEJDPM_LFOIMNGPNFK_OFFSET UNITYSDK_OFFSET(0x154A2B40)
#define EENEMBEJDPM__CCTOR_OFFSET UNITYSDK_OFFSET(0x154A2B60)
#define EENEMBEJDPM__CTOR_OFFSET UNITYSDK_OFFSET(0x154A2BD0)

inline static constexpr unsigned int EENEMBEJDPM_TypeDefinitionIndex = 81286;

class EENEMBEJDPM : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x32; // 0x0
	::MoleMole::Config::BuffGroupName IJDLBAIFLFA; // 0x20
	::IJPMPAOAEDN _KEHOGNPKOLB_k__BackingField; // 0x24
	::System::Boolean MGHIIMICACG; // 0x28
	::System::Byte _padding0[0x3];
	::System::Int32 BOBBHFPEPHC; // 0x2C
	::System::Int32 GJOMCPFIFAD; // 0x30
	::System::UInt32 LECIEAPJIMM; // 0x34

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EENEMBEJDPM__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EENEMBEJDPM__CTOR_OFFSET))(this);
	}

	::System::Int32 JJBKOIBPLIK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EENEMBEJDPM_JJBKOIBPLIK_OFFSET))(this);
	}

	::MoleMole::Config::BuffGroupName IBDMIGBCFOF()
	{
		return ((::MoleMole::Config::BuffGroupName(*)(::PVOID))((::PBYTE)hIl2Cpp + EENEMBEJDPM_IBDMIGBCFOF_OFFSET))(this);
	}

	::IJPMPAOAEDN LFOIMNGPNFK()
	{
		return ((::IJPMPAOAEDN(*)(::PVOID))((::PBYTE)hIl2Cpp + EENEMBEJDPM_LFOIMNGPNFK_OFFSET))(this);
	}

	::System::Void IADJFEPJDAN(::IJPMPAOAEDN EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::IJPMPAOAEDN))((::PBYTE)hIl2Cpp + EENEMBEJDPM_IADJFEPJDAN_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EENEMBEJDPM_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::MoleMole::Config::BuffGroupName IJDLBAIFLFA, ::System::Int32 BOBBHFPEPHC, ::System::Boolean MGHIIMICACG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::BuffGroupName, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + EENEMBEJDPM_CNHBDOMKKDE_OFFSET))(this, IJDLBAIFLFA, BOBBHFPEPHC, MGHIIMICACG);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EENEMBEJDPM_FIGPAOKNJLN_OFFSET))(this);
	}
};
