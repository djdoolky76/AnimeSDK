#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define IBHGDJGJLEI_DBJPMFBNMJI_EKLPLANFJAN_OFFSET UNITYSDK_OFFSET(0x1539E420)
#define IBHGDJGJLEI_DBJPMFBNMJI__CTOR_OFFSET UNITYSDK_OFFSET(0x1539E410)

inline static constexpr unsigned int IBHGDJGJLEI_DBJPMFBNMJI_TypeDefinitionIndex = 55768;

class IBHGDJGJLEI_DBJPMFBNMJI : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_DBJPMFBNMJI__CTOR_OFFSET))(this);
	}

	::System::Void EKLPLANFJAN(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_DBJPMFBNMJI_EKLPLANFJAN_OFFSET))(this, GLAOEHCGCFO);
	}
};
