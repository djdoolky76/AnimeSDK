#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define IBHGDJGJLEI_CCBGAAOIPLI_EAIPJDKIIAG_OFFSET UNITYSDK_OFFSET(0xEBA9CC0)
#define IBHGDJGJLEI_CCBGAAOIPLI__CTOR_OFFSET UNITYSDK_OFFSET(0xEBA9CB0)

inline static constexpr unsigned int IBHGDJGJLEI_CCBGAAOIPLI_TypeDefinitionIndex = 55762;

class IBHGDJGJLEI_CCBGAAOIPLI : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_CCBGAAOIPLI__CTOR_OFFSET))(this);
	}

	::System::Void EAIPJDKIIAG(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_CCBGAAOIPLI_EAIPJDKIIAG_OFFSET))(this, GLAOEHCGCFO);
	}
};
