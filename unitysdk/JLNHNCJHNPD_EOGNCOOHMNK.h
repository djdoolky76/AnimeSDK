#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define JLNHNCJHNPD_EOGNCOOHMNK_KOCHOIMNLKM_OFFSET UNITYSDK_OFFSET(0x13AD92B0)
#define JLNHNCJHNPD_EOGNCOOHMNK_OEBFOPIEAJH_OFFSET UNITYSDK_OFFSET(0x13AD92A0)
#define JLNHNCJHNPD_EOGNCOOHMNK__CTOR_OFFSET UNITYSDK_OFFSET(0x13AD9290)

inline static constexpr unsigned int JLNHNCJHNPD_EOGNCOOHMNK_TypeDefinitionIndex = 79259;

class JLNHNCJHNPD_EOGNCOOHMNK : public ::System::Object
{
public:
	::System::Action* OIPJFHJAKLA; // 0x10
	::System::Action* IFKOKLCPMNF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLNHNCJHNPD_EOGNCOOHMNK__CTOR_OFFSET))(this);
	}

	::System::Void OEBFOPIEAJH(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + JLNHNCJHNPD_EOGNCOOHMNK_OEBFOPIEAJH_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void KOCHOIMNLKM(::OAEFGCLEHHO* NFFNEFLKPDG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + JLNHNCJHNPD_EOGNCOOHMNK_KOCHOIMNLKM_OFFSET))(this, NFFNEFLKPDG);
	}
};
