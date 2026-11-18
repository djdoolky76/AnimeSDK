#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define AKAAONCKJJP_AHEGFOOAJHM_HANGHIBMFJJ_OFFSET UNITYSDK_OFFSET(0x143B1480)
#define AKAAONCKJJP_AHEGFOOAJHM_HFONAENHLIC_OFFSET UNITYSDK_OFFSET(0x143B1490)
#define AKAAONCKJJP_AHEGFOOAJHM__CTOR_OFFSET UNITYSDK_OFFSET(0x143B1470)

inline static constexpr unsigned int AKAAONCKJJP_AHEGFOOAJHM_TypeDefinitionIndex = 42202;

class AKAAONCKJJP_AHEGFOOAJHM : public ::System::Object
{
public:
	::System::Action* OLBAKFLBNIG; // 0x10
	::System::Action* EDNJGMKPFHG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAAONCKJJP_AHEGFOOAJHM__CTOR_OFFSET))(this);
	}

	::System::Void HANGHIBMFJJ(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + AKAAONCKJJP_AHEGFOOAJHM_HANGHIBMFJJ_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void HFONAENHLIC(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + AKAAONCKJJP_AHEGFOOAJHM_HFONAENHLIC_OFFSET))(this, PIIPCLCCOIG);
	}
};
