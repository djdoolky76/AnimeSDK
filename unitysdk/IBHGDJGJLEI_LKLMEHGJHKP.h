#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define IBHGDJGJLEI_LKLMEHGJHKP_MCLCJJKCALC_OFFSET UNITYSDK_OFFSET(0x12E9EB00)
#define IBHGDJGJLEI_LKLMEHGJHKP__CTOR_OFFSET UNITYSDK_OFFSET(0x12E9EAF0)

inline static constexpr unsigned int IBHGDJGJLEI_LKLMEHGJHKP_TypeDefinitionIndex = 55789;

class IBHGDJGJLEI_LKLMEHGJHKP : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_LKLMEHGJHKP__CTOR_OFFSET))(this);
	}

	::System::Void MCLCJJKCALC(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_LKLMEHGJHKP_MCLCJJKCALC_OFFSET))(this, GLAOEHCGCFO);
	}
};
