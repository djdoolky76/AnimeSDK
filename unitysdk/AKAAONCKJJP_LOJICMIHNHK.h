#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AKAAONCKJJP;
class OAEFGCLEHHO;
namespace System { class Action; }

#define AKAAONCKJJP_LOJICMIHNHK_LDOLHHHFDPD_OFFSET UNITYSDK_OFFSET(0x16FF4300)
#define AKAAONCKJJP_LOJICMIHNHK_MMJCIKAFHNE_OFFSET UNITYSDK_OFFSET(0x16FF4270)
#define AKAAONCKJJP_LOJICMIHNHK__CTOR_OFFSET UNITYSDK_OFFSET(0x16FF4260)

inline static constexpr unsigned int AKAAONCKJJP_LOJICMIHNHK_TypeDefinitionIndex = 42162;

class AKAAONCKJJP_LOJICMIHNHK : public ::System::Object
{
public:
	::System::Action* IFKOKLCPMNF; // 0x10
	::AKAAONCKJJP* KLHPEBKNIFB; // 0x18
	::System::Action* EDNJGMKPFHG; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAAONCKJJP_LOJICMIHNHK__CTOR_OFFSET))(this);
	}

	::System::Void MMJCIKAFHNE(::OAEFGCLEHHO* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + AKAAONCKJJP_LOJICMIHNHK_MMJCIKAFHNE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void LDOLHHHFDPD(::OAEFGCLEHHO* HAAEBCOBKFF)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + AKAAONCKJJP_LOJICMIHNHK_LDOLHHHFDPD_OFFSET))(this, HAAEBCOBKFF);
	}
};
