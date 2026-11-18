#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define MJDCEGKHJEG_JFAFIPCMECB_DDOJEOOFIMC_OFFSET UNITYSDK_OFFSET(0x14D89160)
#define MJDCEGKHJEG_JFAFIPCMECB_LKOBAPJOJEA_OFFSET UNITYSDK_OFFSET(0x14D89150)
#define MJDCEGKHJEG_JFAFIPCMECB__CTOR_OFFSET UNITYSDK_OFFSET(0x14D89140)

inline static constexpr unsigned int MJDCEGKHJEG_JFAFIPCMECB_TypeDefinitionIndex = 56428;

class MJDCEGKHJEG_JFAFIPCMECB : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10
	::System::Action* IFKOKLCPMNF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJDCEGKHJEG_JFAFIPCMECB__CTOR_OFFSET))(this);
	}

	::System::Void LKOBAPJOJEA(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MJDCEGKHJEG_JFAFIPCMECB_LKOBAPJOJEA_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void DDOJEOOFIMC(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MJDCEGKHJEG_JFAFIPCMECB_DDOJEOOFIMC_OFFSET))(this, PIIPCLCCOIG);
	}
};
