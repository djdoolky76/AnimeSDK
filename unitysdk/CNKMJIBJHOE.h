#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AOIMINJPFHO;
class DIHNHHLDLDP;
class EGKEOOLLFGO;

#define CNKMJIBJHOE_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1DC86DF0)
#define CNKMJIBJHOE_FCFOEJGPDNO_OFFSET UNITYSDK_OFFSET(0x1DC86ED0)
#define CNKMJIBJHOE_FEMLPHIGLAP_OFFSET UNITYSDK_OFFSET(0x1DC86DE0)
#define CNKMJIBJHOE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC86F70)

inline static constexpr unsigned int CNKMJIBJHOE_TypeDefinitionIndex = 94042;

class CNKMJIBJHOE : public ::System::Object
{
public:
	::System::Single KBCGNCKLCFB; // 0x10
	::System::Single GIDHMPOIHIM; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNKMJIBJHOE__CTOR_OFFSET))(this);
	}

	::System::Int32 FEMLPHIGLAP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNKMJIBJHOE_FEMLPHIGLAP_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::EGKEOOLLFGO* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::EGKEOOLLFGO*))((::PBYTE)hIl2Cpp + CNKMJIBJHOE_BBOMJDBNHIC_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Boolean FCFOEJGPDNO(::System::Single PMNLNNGEIFM, ::AOIMINJPFHO* MPCFCIMLKEG, ::System::Int32 GCFDHEFHCAJ, ::DIHNHHLDLDP* AAOCANGHBDG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::AOIMINJPFHO*, ::System::Int32, ::DIHNHHLDLDP*))((::PBYTE)hIl2Cpp + CNKMJIBJHOE_FCFOEJGPDNO_OFFSET))(this, PMNLNNGEIFM, MPCFCIMLKEG, GCFDHEFHCAJ, AAOCANGHBDG);
	}
};
