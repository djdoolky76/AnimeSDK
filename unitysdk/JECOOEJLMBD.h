#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/MoleMole/Config/BuffGroupName.h"

#define JECOOEJLMBD_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x1659F820)
#define JECOOEJLMBD_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x1659F790)
#define JECOOEJLMBD_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x1659F700)
#define JECOOEJLMBD_IBDMIGBCFOF_OFFSET UNITYSDK_OFFSET(0x1659F640)
#define JECOOEJLMBD_JJBKOIBPLIK_OFFSET UNITYSDK_OFFSET(0x1659F600)
#define JECOOEJLMBD__CCTOR_OFFSET UNITYSDK_OFFSET(0x1659F680)
#define JECOOEJLMBD__CTOR_OFFSET UNITYSDK_OFFSET(0x1659F6F0)

inline static constexpr unsigned int JECOOEJLMBD_TypeDefinitionIndex = 44158;

class JECOOEJLMBD : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x37; // 0x0
	::System::Int32 BOBBHFPEPHC; // 0x20
	::System::UInt32 LECIEAPJIMM; // 0x24
	::System::Int32 GJOMCPFIFAD; // 0x28
	::System::Boolean MBPDODIJHPJ; // 0x2C
	::System::Byte _padding0[0x3];
	::MoleMole::Config::BuffGroupName IJDLBAIFLFA; // 0x30

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JECOOEJLMBD__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JECOOEJLMBD__CTOR_OFFSET))(this);
	}

	::System::Int32 JJBKOIBPLIK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JECOOEJLMBD_JJBKOIBPLIK_OFFSET))(this);
	}

	::MoleMole::Config::BuffGroupName IBDMIGBCFOF()
	{
		return ((::MoleMole::Config::BuffGroupName(*)(::PVOID))((::PBYTE)hIl2Cpp + JECOOEJLMBD_IBDMIGBCFOF_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JECOOEJLMBD_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JECOOEJLMBD_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::MoleMole::Config::BuffGroupName IJDLBAIFLFA, ::System::Int32 BOBBHFPEPHC, ::System::Boolean MBPDODIJHPJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::BuffGroupName, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + JECOOEJLMBD_CNHBDOMKKDE_OFFSET))(this, IJDLBAIFLFA, BOBBHFPEPHC, MBPDODIJHPJ);
	}
};
