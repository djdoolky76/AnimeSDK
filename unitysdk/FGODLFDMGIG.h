#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AOIMINJPFHO;
class DIHNHHLDLDP;
class EGKEOOLLFGO;

#define FGODLFDMGIG_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1D988480)
#define FGODLFDMGIG_FCFOEJGPDNO_OFFSET UNITYSDK_OFFSET(0x1D9884D0)
#define FGODLFDMGIG_FEMLPHIGLAP_OFFSET UNITYSDK_OFFSET(0x1D988470)
#define FGODLFDMGIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D988570)

inline static constexpr unsigned int FGODLFDMGIG_TypeDefinitionIndex = 94160;

class FGODLFDMGIG : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGODLFDMGIG__CTOR_OFFSET))(this);
	}

	::System::Int32 FEMLPHIGLAP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FGODLFDMGIG_FEMLPHIGLAP_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::EGKEOOLLFGO* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::EGKEOOLLFGO*))((::PBYTE)hIl2Cpp + FGODLFDMGIG_BBOMJDBNHIC_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Boolean FCFOEJGPDNO(::System::Single PMNLNNGEIFM, ::AOIMINJPFHO* MPCFCIMLKEG, ::System::Int32 GCFDHEFHCAJ, ::DIHNHHLDLDP* AAOCANGHBDG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::AOIMINJPFHO*, ::System::Int32, ::DIHNHHLDLDP*))((::PBYTE)hIl2Cpp + FGODLFDMGIG_FCFOEJGPDNO_OFFSET))(this, PMNLNNGEIFM, MPCFCIMLKEG, GCFDHEFHCAJ, AAOCANGHBDG);
	}
};
