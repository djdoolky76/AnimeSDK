#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define IBHGDJGJLEI_LKBPFDCBHIE_NFNBGELDPMI_OFFSET UNITYSDK_OFFSET(0x140D7E70)
#define IBHGDJGJLEI_LKBPFDCBHIE__CTOR_OFFSET UNITYSDK_OFFSET(0x140D7E60)

inline static constexpr unsigned int IBHGDJGJLEI_LKBPFDCBHIE_TypeDefinitionIndex = 55785;

class IBHGDJGJLEI_LKBPFDCBHIE : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_LKBPFDCBHIE__CTOR_OFFSET))(this);
	}

	::System::Void NFNBGELDPMI(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_LKBPFDCBHIE_NFNBGELDPMI_OFFSET))(this, GLAOEHCGCFO);
	}
};
