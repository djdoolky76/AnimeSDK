#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define IBHGDJGJLEI_CALBMPPCKGE_IDDDCDEDKDP_OFFSET UNITYSDK_OFFSET(0xEBA9CA0)
#define IBHGDJGJLEI_CALBMPPCKGE__CTOR_OFFSET UNITYSDK_OFFSET(0xEBA9C90)

inline static constexpr unsigned int IBHGDJGJLEI_CALBMPPCKGE_TypeDefinitionIndex = 55769;

class IBHGDJGJLEI_CALBMPPCKGE : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_CALBMPPCKGE__CTOR_OFFSET))(this);
	}

	::System::Void IDDDCDEDKDP(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_CALBMPPCKGE_IDDDCDEDKDP_OFFSET))(this, GLAOEHCGCFO);
	}
};
