#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define AKAAONCKJJP_NDAPOEECACE_CBFGACDLGOD_OFFSET UNITYSDK_OFFSET(0x144E4350)
#define AKAAONCKJJP_NDAPOEECACE_IAHJGPABMMG_OFFSET UNITYSDK_OFFSET(0x144E4340)
#define AKAAONCKJJP_NDAPOEECACE__CTOR_OFFSET UNITYSDK_OFFSET(0x144E4330)

inline static constexpr unsigned int AKAAONCKJJP_NDAPOEECACE_TypeDefinitionIndex = 42167;

class AKAAONCKJJP_NDAPOEECACE : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10
	::System::Action* OLBAKFLBNIG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAAONCKJJP_NDAPOEECACE__CTOR_OFFSET))(this);
	}

	::System::Void IAHJGPABMMG(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + AKAAONCKJJP_NDAPOEECACE_IAHJGPABMMG_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void CBFGACDLGOD(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + AKAAONCKJJP_NDAPOEECACE_CBFGACDLGOD_OFFSET))(this, PIIPCLCCOIG);
	}
};
