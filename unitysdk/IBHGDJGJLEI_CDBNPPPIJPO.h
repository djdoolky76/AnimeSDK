#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define IBHGDJGJLEI_CDBNPPPIJPO_GDAOLCPHKID_OFFSET UNITYSDK_OFFSET(0x12E9E8F0)
#define IBHGDJGJLEI_CDBNPPPIJPO_MPBHKEIHFBP_OFFSET UNITYSDK_OFFSET(0x12E9E900)
#define IBHGDJGJLEI_CDBNPPPIJPO__CTOR_OFFSET UNITYSDK_OFFSET(0x12E9E8E0)

inline static constexpr unsigned int IBHGDJGJLEI_CDBNPPPIJPO_TypeDefinitionIndex = 55772;

class IBHGDJGJLEI_CDBNPPPIJPO : public ::System::Object
{
public:
	::System::Action* IFKOKLCPMNF; // 0x10
	::System::Action* EDNJGMKPFHG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_CDBNPPPIJPO__CTOR_OFFSET))(this);
	}

	::System::Void GDAOLCPHKID(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_CDBNPPPIJPO_GDAOLCPHKID_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void MPBHKEIHFBP(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_CDBNPPPIJPO_MPBHKEIHFBP_OFFSET))(this, BHDNBGLCNOM);
	}
};
