#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define AKAAONCKJJP_MPFLEJBGEMN_HHKMEDJFHLO_OFFSET UNITYSDK_OFFSET(0x143B1570)
#define AKAAONCKJJP_MPFLEJBGEMN_NIKECJDJDGI_OFFSET UNITYSDK_OFFSET(0x143B1580)
#define AKAAONCKJJP_MPFLEJBGEMN__CTOR_OFFSET UNITYSDK_OFFSET(0x143B1560)

inline static constexpr unsigned int AKAAONCKJJP_MPFLEJBGEMN_TypeDefinitionIndex = 42161;

class AKAAONCKJJP_MPFLEJBGEMN : public ::System::Object
{
public:
	::System::Action* OLBAKFLBNIG; // 0x10
	::System::Action* EDNJGMKPFHG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAAONCKJJP_MPFLEJBGEMN__CTOR_OFFSET))(this);
	}

	::System::Void HHKMEDJFHLO(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + AKAAONCKJJP_MPFLEJBGEMN_HHKMEDJFHLO_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void NIKECJDJDGI(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + AKAAONCKJJP_MPFLEJBGEMN_NIKECJDJDGI_OFFSET))(this, PIIPCLCCOIG);
	}
};
