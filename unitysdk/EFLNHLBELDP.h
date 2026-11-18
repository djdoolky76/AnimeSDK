#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DKIIJMMHMKO;
class OAKHJBEBAFM_INIDKKCLJNM;
namespace System { template <typename T> class Action_1; }

#define EFLNHLBELDP_BHCNMKAFFNI_OFFSET UNITYSDK_OFFSET(0x1414BB80)
#define EFLNHLBELDP_EAPIJKBCOHE_OFFSET UNITYSDK_OFFSET(0x1414BA90)
#define EFLNHLBELDP_MCMCFOBEEKL_OFFSET UNITYSDK_OFFSET(0x1414BCB0)
#define EFLNHLBELDP_PDEAKEADCHN_OFFSET UNITYSDK_OFFSET(0x1414BB10)
#define EFLNHLBELDP__CTOR_OFFSET UNITYSDK_OFFSET(0x1414BA80)

inline static constexpr unsigned int EFLNHLBELDP_TypeDefinitionIndex = 81463;

class EFLNHLBELDP : public ::System::Object
{
public:
	::DKIIJMMHMKO* GELILHOFIID; // 0x10
	::OAKHJBEBAFM_INIDKKCLJNM* ILOAECHMBEO; // 0x18
	::System::Action_1<::System::Int32>* NMIIECNEANB; // 0x20
	::System::Int32 ABHBKFJKINO; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFLNHLBELDP__CTOR_OFFSET))(this);
	}

	::System::Void EAPIJKBCOHE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFLNHLBELDP_EAPIJKBCOHE_OFFSET))(this);
	}

	::System::Void PDEAKEADCHN(::System::Boolean LIEJIGMGGOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EFLNHLBELDP_PDEAKEADCHN_OFFSET))(this, LIEJIGMGGOL);
	}

	::System::Void BHCNMKAFFNI(::OAKHJBEBAFM_INIDKKCLJNM* HBDIHKMNDEE, ::System::Int32 ABHBKFJKINO, ::System::Action_1<::System::Int32>* HLPFGHDCLPK)
	{
		return ((::System::Void(*)(::PVOID, ::OAKHJBEBAFM_INIDKKCLJNM*, ::System::Int32, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + EFLNHLBELDP_BHCNMKAFFNI_OFFSET))(this, HBDIHKMNDEE, ABHBKFJKINO, HLPFGHDCLPK);
	}

	::System::Void MCMCFOBEEKL(::DKIIJMMHMKO* HBEBCJMMCLC)
	{
		return ((::System::Void(*)(::PVOID, ::DKIIJMMHMKO*))((::PBYTE)hIl2Cpp + EFLNHLBELDP_MCMCFOBEEKL_OFFSET))(this, HBEBCJMMCLC);
	}
};
