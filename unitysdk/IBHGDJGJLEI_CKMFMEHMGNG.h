#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define IBHGDJGJLEI_CKMFMEHMGNG_FECPCHMLAEF_OFFSET UNITYSDK_OFFSET(0x1539E400)
#define IBHGDJGJLEI_CKMFMEHMGNG__CTOR_OFFSET UNITYSDK_OFFSET(0x1539E3F0)

inline static constexpr unsigned int IBHGDJGJLEI_CKMFMEHMGNG_TypeDefinitionIndex = 55775;

class IBHGDJGJLEI_CKMFMEHMGNG : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_CKMFMEHMGNG__CTOR_OFFSET))(this);
	}

	::System::Void FECPCHMLAEF(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_CKMFMEHMGNG_FECPCHMLAEF_OFFSET))(this, BHDNBGLCNOM);
	}
};
