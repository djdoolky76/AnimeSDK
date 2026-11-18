#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DJPEEJFNCHL;

#define MKFNBHDICNJ_NCIHAEDLJAG_HNFEEDAMPGE_OFFSET UNITYSDK_OFFSET(0x12D90E70)
#define MKFNBHDICNJ_NCIHAEDLJAG__CTOR_OFFSET UNITYSDK_OFFSET(0x12D90E60)

inline static constexpr unsigned int MKFNBHDICNJ_NCIHAEDLJAG_TypeDefinitionIndex = 61385;

class MKFNBHDICNJ_NCIHAEDLJAG : public ::System::Object
{
public:
	::System::Int32 LGKIDBDPEFH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_NCIHAEDLJAG__CTOR_OFFSET))(this);
	}

	::System::Boolean HNFEEDAMPGE(::DJPEEJFNCHL* LJBPECKCCEA)
	{
		return ((::System::Boolean(*)(::PVOID, ::DJPEEJFNCHL*))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_NCIHAEDLJAG_HNFEEDAMPGE_OFFSET))(this, LJBPECKCCEA);
	}
};
