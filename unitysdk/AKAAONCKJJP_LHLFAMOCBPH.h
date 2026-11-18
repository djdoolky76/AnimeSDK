#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define AKAAONCKJJP_LHLFAMOCBPH_ADBCMMGIINK_OFFSET UNITYSDK_OFFSET(0x143B1550)
#define AKAAONCKJJP_LHLFAMOCBPH_FCDLBLHPNCD_OFFSET UNITYSDK_OFFSET(0x143B1540)
#define AKAAONCKJJP_LHLFAMOCBPH__CTOR_OFFSET UNITYSDK_OFFSET(0x143B1530)

inline static constexpr unsigned int AKAAONCKJJP_LHLFAMOCBPH_TypeDefinitionIndex = 42192;

class AKAAONCKJJP_LHLFAMOCBPH : public ::System::Object
{
public:
	::System::Action* IFKOKLCPMNF; // 0x10
	::System::Action* EDNJGMKPFHG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAAONCKJJP_LHLFAMOCBPH__CTOR_OFFSET))(this);
	}

	::System::Void FCDLBLHPNCD(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + AKAAONCKJJP_LHLFAMOCBPH_FCDLBLHPNCD_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void ADBCMMGIINK(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + AKAAONCKJJP_LHLFAMOCBPH_ADBCMMGIINK_OFFSET))(this, PIIPCLCCOIG);
	}
};
