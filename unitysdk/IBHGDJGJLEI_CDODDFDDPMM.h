#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define IBHGDJGJLEI_CDODDFDDPMM_IEDPJFAMIMJ_OFFSET UNITYSDK_OFFSET(0xF8359F0)
#define IBHGDJGJLEI_CDODDFDDPMM_JCNGLLFCNEG_OFFSET UNITYSDK_OFFSET(0xF8359E0)
#define IBHGDJGJLEI_CDODDFDDPMM__CTOR_OFFSET UNITYSDK_OFFSET(0xF8359D0)

inline static constexpr unsigned int IBHGDJGJLEI_CDODDFDDPMM_TypeDefinitionIndex = 55781;

class IBHGDJGJLEI_CDODDFDDPMM : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10
	::System::Action* IFKOKLCPMNF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_CDODDFDDPMM__CTOR_OFFSET))(this);
	}

	::System::Void JCNGLLFCNEG(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_CDODDFDDPMM_JCNGLLFCNEG_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void IEDPJFAMIMJ(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_CDODDFDDPMM_IEDPJFAMIMJ_OFFSET))(this, BHDNBGLCNOM);
	}
};
