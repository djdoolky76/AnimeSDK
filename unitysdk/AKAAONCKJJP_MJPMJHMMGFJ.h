#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
class PHOJFKLNMDH;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define AKAAONCKJJP_MJPMJHMMGFJ_JGDHBMEBHKE_OFFSET UNITYSDK_OFFSET(0x1820AAA0)
#define AKAAONCKJJP_MJPMJHMMGFJ_OJAGJGHKPJG_OFFSET UNITYSDK_OFFSET(0x1820AB10)
#define AKAAONCKJJP_MJPMJHMMGFJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1820AA90)

inline static constexpr unsigned int AKAAONCKJJP_MJPMJHMMGFJ_TypeDefinitionIndex = 42176;

class AKAAONCKJJP_MJPMJHMMGFJ : public ::System::Object
{
public:
	::System::Action_1<::PHOJFKLNMDH*>* EDNJGMKPFHG; // 0x10
	::System::Action* OLBAKFLBNIG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAAONCKJJP_MJPMJHMMGFJ__CTOR_OFFSET))(this);
	}

	::System::Void JGDHBMEBHKE(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + AKAAONCKJJP_MJPMJHMMGFJ_JGDHBMEBHKE_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void OJAGJGHKPJG(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + AKAAONCKJJP_MJPMJHMMGFJ_OJAGJGHKPJG_OFFSET))(this, PIIPCLCCOIG);
	}
};
