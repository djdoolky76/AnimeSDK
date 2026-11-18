#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/MoleMole/Config/BuffGroupName.h"

#define CHHCIMFNBIK_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x18DD0AA0)
#define CHHCIMFNBIK_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x18DD0B00)
#define CHHCIMFNBIK_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x18DD0A10)
#define CHHCIMFNBIK_IBDMIGBCFOF_OFFSET UNITYSDK_OFFSET(0x18DD0950)
#define CHHCIMFNBIK_JJBKOIBPLIK_OFFSET UNITYSDK_OFFSET(0x18DD0910)
#define CHHCIMFNBIK__CCTOR_OFFSET UNITYSDK_OFFSET(0x18DD0990)
#define CHHCIMFNBIK__CTOR_OFFSET UNITYSDK_OFFSET(0x18DD0A00)

inline static constexpr unsigned int CHHCIMFNBIK_TypeDefinitionIndex = 54488;

class CHHCIMFNBIK : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x38; // 0x0
	::MoleMole::Config::BuffGroupName IJDLBAIFLFA; // 0x20
	::System::Int32 BOBBHFPEPHC; // 0x24

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHHCIMFNBIK__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHHCIMFNBIK__CTOR_OFFSET))(this);
	}

	::System::Int32 JJBKOIBPLIK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHHCIMFNBIK_JJBKOIBPLIK_OFFSET))(this);
	}

	::MoleMole::Config::BuffGroupName IBDMIGBCFOF()
	{
		return ((::MoleMole::Config::BuffGroupName(*)(::PVOID))((::PBYTE)hIl2Cpp + CHHCIMFNBIK_IBDMIGBCFOF_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHHCIMFNBIK_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::MoleMole::Config::BuffGroupName IJDLBAIFLFA, ::System::Int32 BOBBHFPEPHC)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::BuffGroupName, ::System::Int32))((::PBYTE)hIl2Cpp + CHHCIMFNBIK_CNHBDOMKKDE_OFFSET))(this, IJDLBAIFLFA, BOBBHFPEPHC);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHHCIMFNBIK_FIGPAOKNJLN_OFFSET))(this);
	}
};
