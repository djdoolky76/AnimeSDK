#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define AKAAONCKJJP_JLBBOHPOJIB_LGIJJKOKCEA_OFFSET UNITYSDK_OFFSET(0x1435ABB0)
#define AKAAONCKJJP_JLBBOHPOJIB_MFGPKEFDKAA_OFFSET UNITYSDK_OFFSET(0x1435ABA0)
#define AKAAONCKJJP_JLBBOHPOJIB__CTOR_OFFSET UNITYSDK_OFFSET(0x1435AB90)

inline static constexpr unsigned int AKAAONCKJJP_JLBBOHPOJIB_TypeDefinitionIndex = 42196;

class AKAAONCKJJP_JLBBOHPOJIB : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10
	::System::Action* IFKOKLCPMNF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAAONCKJJP_JLBBOHPOJIB__CTOR_OFFSET))(this);
	}

	::System::Void MFGPKEFDKAA(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + AKAAONCKJJP_JLBBOHPOJIB_MFGPKEFDKAA_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void LGIJJKOKCEA(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + AKAAONCKJJP_JLBBOHPOJIB_LGIJJKOKCEA_OFFSET))(this, PIIPCLCCOIG);
	}
};
