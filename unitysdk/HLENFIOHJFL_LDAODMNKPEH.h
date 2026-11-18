#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HLENFIOHJFL;
class OAEFGCLEHHO;
namespace System { class Action; }

#define HLENFIOHJFL_LDAODMNKPEH_DMMJIPAGOFM_OFFSET UNITYSDK_OFFSET(0x15BDE400)
#define HLENFIOHJFL_LDAODMNKPEH__CTOR_OFFSET UNITYSDK_OFFSET(0x15BDE3F0)

inline static constexpr unsigned int HLENFIOHJFL_LDAODMNKPEH_TypeDefinitionIndex = 54200;

class HLENFIOHJFL_LDAODMNKPEH : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10
	::HLENFIOHJFL* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLENFIOHJFL_LDAODMNKPEH__CTOR_OFFSET))(this);
	}

	::System::Void DMMJIPAGOFM(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + HLENFIOHJFL_LDAODMNKPEH_DMMJIPAGOFM_OFFSET))(this, BHDNBGLCNOM);
	}
};
