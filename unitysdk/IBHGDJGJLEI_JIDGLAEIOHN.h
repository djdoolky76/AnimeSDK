#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define IBHGDJGJLEI_JIDGLAEIOHN_GMGBBAFAJCJ_OFFSET UNITYSDK_OFFSET(0xEBA9D70)
#define IBHGDJGJLEI_JIDGLAEIOHN__CTOR_OFFSET UNITYSDK_OFFSET(0xEBA9D60)

inline static constexpr unsigned int IBHGDJGJLEI_JIDGLAEIOHN_TypeDefinitionIndex = 55748;

class IBHGDJGJLEI_JIDGLAEIOHN : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_JIDGLAEIOHN__CTOR_OFFSET))(this);
	}

	::System::Void GMGBBAFAJCJ(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_JIDGLAEIOHN_GMGBBAFAJCJ_OFFSET))(this, GLAOEHCGCFO);
	}
};
