#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define IBHGDJGJLEI_NHPEIGADOIA_GJNLBINPEKP_OFFSET UNITYSDK_OFFSET(0x16F57B40)
#define IBHGDJGJLEI_NHPEIGADOIA__CTOR_OFFSET UNITYSDK_OFFSET(0x16F57B30)

inline static constexpr unsigned int IBHGDJGJLEI_NHPEIGADOIA_TypeDefinitionIndex = 55756;

class IBHGDJGJLEI_NHPEIGADOIA : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_NHPEIGADOIA__CTOR_OFFSET))(this);
	}

	::System::Void GJNLBINPEKP(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_NHPEIGADOIA_GJNLBINPEKP_OFFSET))(this, BHDNBGLCNOM);
	}
};
