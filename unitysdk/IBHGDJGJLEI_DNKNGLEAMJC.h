#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define IBHGDJGJLEI_DNKNGLEAMJC_FPEDJHKFEME_OFFSET UNITYSDK_OFFSET(0x16560710)
#define IBHGDJGJLEI_DNKNGLEAMJC__CTOR_OFFSET UNITYSDK_OFFSET(0x16560700)

inline static constexpr unsigned int IBHGDJGJLEI_DNKNGLEAMJC_TypeDefinitionIndex = 55770;

class IBHGDJGJLEI_DNKNGLEAMJC : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_DNKNGLEAMJC__CTOR_OFFSET))(this);
	}

	::System::Void FPEDJHKFEME(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_DNKNGLEAMJC_FPEDJHKFEME_OFFSET))(this, GLAOEHCGCFO);
	}
};
