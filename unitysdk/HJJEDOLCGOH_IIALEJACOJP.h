#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define HJJEDOLCGOH_IIALEJACOJP_HDADIPAJDIL_OFFSET UNITYSDK_OFFSET(0x16F41730)
#define HJJEDOLCGOH_IIALEJACOJP__CTOR_OFFSET UNITYSDK_OFFSET(0x16F41720)

inline static constexpr unsigned int HJJEDOLCGOH_IIALEJACOJP_TypeDefinitionIndex = 87728;

class HJJEDOLCGOH_IIALEJACOJP : public ::System::Object
{
public:
	::System::Action* KCIPHLPEBIL; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJJEDOLCGOH_IIALEJACOJP__CTOR_OFFSET))(this);
	}

	::System::Void HDADIPAJDIL(::OAEFGCLEHHO* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + HJJEDOLCGOH_IIALEJACOJP_HDADIPAJDIL_OFFSET))(this, LJBPECKCCEA);
	}
};
