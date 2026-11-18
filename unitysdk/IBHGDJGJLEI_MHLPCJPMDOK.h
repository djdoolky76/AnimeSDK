#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define IBHGDJGJLEI_MHLPCJPMDOK_ALMKCPPCIKD_OFFSET UNITYSDK_OFFSET(0x101304E0)
#define IBHGDJGJLEI_MHLPCJPMDOK_NPOIAHJDPGK_OFFSET UNITYSDK_OFFSET(0x101304F0)
#define IBHGDJGJLEI_MHLPCJPMDOK__CTOR_OFFSET UNITYSDK_OFFSET(0x101304D0)

inline static constexpr unsigned int IBHGDJGJLEI_MHLPCJPMDOK_TypeDefinitionIndex = 55782;

class IBHGDJGJLEI_MHLPCJPMDOK : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10
	::System::Action* IFKOKLCPMNF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_MHLPCJPMDOK__CTOR_OFFSET))(this);
	}

	::System::Void ALMKCPPCIKD(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_MHLPCJPMDOK_ALMKCPPCIKD_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void NPOIAHJDPGK(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_MHLPCJPMDOK_NPOIAHJDPGK_OFFSET))(this, BHDNBGLCNOM);
	}
};
