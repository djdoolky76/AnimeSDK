#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AOIMINJPFHO;
class DIHNHHLDLDP;
class EGKEOOLLFGO;

#define HPDFKFNGCJC_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1DC916E0)
#define HPDFKFNGCJC_FCFOEJGPDNO_OFFSET UNITYSDK_OFFSET(0x1DC91730)
#define HPDFKFNGCJC_FEMLPHIGLAP_OFFSET UNITYSDK_OFFSET(0x1DC916D0)
#define HPDFKFNGCJC__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC918C0)

inline static constexpr unsigned int HPDFKFNGCJC_TypeDefinitionIndex = 93814;

class HPDFKFNGCJC : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPDFKFNGCJC__CTOR_OFFSET))(this);
	}

	::System::Int32 FEMLPHIGLAP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPDFKFNGCJC_FEMLPHIGLAP_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::EGKEOOLLFGO* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::EGKEOOLLFGO*))((::PBYTE)hIl2Cpp + HPDFKFNGCJC_BBOMJDBNHIC_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Boolean FCFOEJGPDNO(::System::Single PMNLNNGEIFM, ::AOIMINJPFHO* MPCFCIMLKEG, ::System::Int32 GCFDHEFHCAJ, ::DIHNHHLDLDP* AAOCANGHBDG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::AOIMINJPFHO*, ::System::Int32, ::DIHNHHLDLDP*))((::PBYTE)hIl2Cpp + HPDFKFNGCJC_FCFOEJGPDNO_OFFSET))(this, PMNLNNGEIFM, MPCFCIMLKEG, GCFDHEFHCAJ, AAOCANGHBDG);
	}
};
