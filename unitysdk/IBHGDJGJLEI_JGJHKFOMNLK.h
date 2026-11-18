#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define IBHGDJGJLEI_JGJHKFOMNLK_ENGKEMALIHH_OFFSET UNITYSDK_OFFSET(0x16097800)
#define IBHGDJGJLEI_JGJHKFOMNLK__CTOR_OFFSET UNITYSDK_OFFSET(0x16097530)

inline static constexpr unsigned int IBHGDJGJLEI_JGJHKFOMNLK_TypeDefinitionIndex = 55792;

class IBHGDJGJLEI_JGJHKFOMNLK : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_JGJHKFOMNLK__CTOR_OFFSET))(this);
	}

	::System::Void ENGKEMALIHH(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_JGJHKFOMNLK_ENGKEMALIHH_OFFSET))(this, GLAOEHCGCFO);
	}
};
