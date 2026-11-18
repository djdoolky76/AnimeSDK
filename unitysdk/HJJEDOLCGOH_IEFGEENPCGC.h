#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define HJJEDOLCGOH_IEFGEENPCGC_GKBEOJBBPGK_OFFSET UNITYSDK_OFFSET(0x16CF4D90)
#define HJJEDOLCGOH_IEFGEENPCGC__CTOR_OFFSET UNITYSDK_OFFSET(0x16CF4D80)

inline static constexpr unsigned int HJJEDOLCGOH_IEFGEENPCGC_TypeDefinitionIndex = 87735;

class HJJEDOLCGOH_IEFGEENPCGC : public ::System::Object
{
public:
	::System::Action* KCIPHLPEBIL; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJJEDOLCGOH_IEFGEENPCGC__CTOR_OFFSET))(this);
	}

	::System::Void GKBEOJBBPGK(::OAEFGCLEHHO* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + HJJEDOLCGOH_IEFGEENPCGC_GKBEOJBBPGK_OFFSET))(this, LJBPECKCCEA);
	}
};
