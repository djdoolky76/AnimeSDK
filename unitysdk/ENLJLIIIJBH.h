#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AOIMINJPFHO;
class CCGPPMCENAC;
class DIHNHHLDLDP;
class EGKEOOLLFGO;

#define ENLJLIIIJBH_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1F432420)
#define ENLJLIIIJBH_FCFOEJGPDNO_OFFSET UNITYSDK_OFFSET(0x1F432470)
#define ENLJLIIIJBH_FEMLPHIGLAP_OFFSET UNITYSDK_OFFSET(0x1F432410)
#define ENLJLIIIJBH_LJLLJLMLNND_OFFSET UNITYSDK_OFFSET(0x1F432660)
#define ENLJLIIIJBH__CTOR_OFFSET UNITYSDK_OFFSET(0x1F432650)

inline static constexpr unsigned int ENLJLIIIJBH_TypeDefinitionIndex = 28942;

class ENLJLIIIJBH : public ::System::Object
{
public:
	::Il2CppArray<::CCGPPMCENAC*>* GLCOCNJJLKK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENLJLIIIJBH__CTOR_OFFSET))(this);
	}

	::System::Int32 FEMLPHIGLAP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENLJLIIIJBH_FEMLPHIGLAP_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::EGKEOOLLFGO* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::EGKEOOLLFGO*))((::PBYTE)hIl2Cpp + ENLJLIIIJBH_BBOMJDBNHIC_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Boolean FCFOEJGPDNO(::System::Single PMNLNNGEIFM, ::AOIMINJPFHO* MPCFCIMLKEG, ::System::Int32 GCFDHEFHCAJ, ::DIHNHHLDLDP* AAOCANGHBDG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::AOIMINJPFHO*, ::System::Int32, ::DIHNHHLDLDP*))((::PBYTE)hIl2Cpp + ENLJLIIIJBH_FCFOEJGPDNO_OFFSET))(this, PMNLNNGEIFM, MPCFCIMLKEG, GCFDHEFHCAJ, AAOCANGHBDG);
	}

	::System::Void LJLLJLMLNND(::Il2CppArray<::CCGPPMCENAC*>* HBEPDMIABKM)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::CCGPPMCENAC*>*))((::PBYTE)hIl2Cpp + ENLJLIIIJBH_LJLLJLMLNND_OFFSET))(this, HBEPDMIABKM);
	}
};
