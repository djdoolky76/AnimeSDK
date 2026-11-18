#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define HJJEDOLCGOH_LHCACONMJOK_ONJBHCAMBLI_OFFSET UNITYSDK_OFFSET(0x17E4E740)
#define HJJEDOLCGOH_LHCACONMJOK__CTOR_OFFSET UNITYSDK_OFFSET(0x17E4E730)

inline static constexpr unsigned int HJJEDOLCGOH_LHCACONMJOK_TypeDefinitionIndex = 87736;

class HJJEDOLCGOH_LHCACONMJOK : public ::System::Object
{
public:
	::System::Action* KCIPHLPEBIL; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJJEDOLCGOH_LHCACONMJOK__CTOR_OFFSET))(this);
	}

	::System::Void ONJBHCAMBLI(::OAEFGCLEHHO* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + HJJEDOLCGOH_LHCACONMJOK_ONJBHCAMBLI_OFFSET))(this, LJBPECKCCEA);
	}
};
