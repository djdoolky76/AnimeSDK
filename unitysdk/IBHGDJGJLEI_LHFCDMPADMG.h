#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define IBHGDJGJLEI_LHFCDMPADMG_HHBPGCFNHLC_OFFSET UNITYSDK_OFFSET(0x15BF3970)
#define IBHGDJGJLEI_LHFCDMPADMG__CTOR_OFFSET UNITYSDK_OFFSET(0x15BF3960)

inline static constexpr unsigned int IBHGDJGJLEI_LHFCDMPADMG_TypeDefinitionIndex = 55795;

class IBHGDJGJLEI_LHFCDMPADMG : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_LHFCDMPADMG__CTOR_OFFSET))(this);
	}

	::System::Void HHBPGCFNHLC(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_LHFCDMPADMG_HHBPGCFNHLC_OFFSET))(this, GLAOEHCGCFO);
	}
};
