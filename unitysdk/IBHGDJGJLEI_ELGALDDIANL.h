#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define IBHGDJGJLEI_ELGALDDIANL_KDACPHMEFOE_OFFSET UNITYSDK_OFFSET(0x1539E440)
#define IBHGDJGJLEI_ELGALDDIANL__CTOR_OFFSET UNITYSDK_OFFSET(0x1539E430)

inline static constexpr unsigned int IBHGDJGJLEI_ELGALDDIANL_TypeDefinitionIndex = 55793;

class IBHGDJGJLEI_ELGALDDIANL : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_ELGALDDIANL__CTOR_OFFSET))(this);
	}

	::System::Void KDACPHMEFOE(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_ELGALDDIANL_KDACPHMEFOE_OFFSET))(this, BHDNBGLCNOM);
	}
};
