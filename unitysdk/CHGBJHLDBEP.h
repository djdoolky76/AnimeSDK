#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AOIMINJPFHO;
class DIHNHHLDLDP;
class EGKEOOLLFGO;

#define CHGBJHLDBEP_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1E22F0A0)
#define CHGBJHLDBEP_FCFOEJGPDNO_OFFSET UNITYSDK_OFFSET(0x1E22F140)
#define CHGBJHLDBEP_FEMLPHIGLAP_OFFSET UNITYSDK_OFFSET(0x1E22F090)
#define CHGBJHLDBEP__CTOR_OFFSET UNITYSDK_OFFSET(0x1E22F1D0)

inline static constexpr unsigned int CHGBJHLDBEP_TypeDefinitionIndex = 93488;

class CHGBJHLDBEP : public ::System::Object
{
public:
	::System::Single GPDCBHEPDGL; // 0x10
	::System::Single HLMJGDACAOA; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHGBJHLDBEP__CTOR_OFFSET))(this);
	}

	::System::Int32 FEMLPHIGLAP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHGBJHLDBEP_FEMLPHIGLAP_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::EGKEOOLLFGO* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::EGKEOOLLFGO*))((::PBYTE)hIl2Cpp + CHGBJHLDBEP_BBOMJDBNHIC_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Boolean FCFOEJGPDNO(::System::Single PMNLNNGEIFM, ::AOIMINJPFHO* MPCFCIMLKEG, ::System::Int32 GCFDHEFHCAJ, ::DIHNHHLDLDP* AAOCANGHBDG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::AOIMINJPFHO*, ::System::Int32, ::DIHNHHLDLDP*))((::PBYTE)hIl2Cpp + CHGBJHLDBEP_FCFOEJGPDNO_OFFSET))(this, PMNLNNGEIFM, MPCFCIMLKEG, GCFDHEFHCAJ, AAOCANGHBDG);
	}
};
