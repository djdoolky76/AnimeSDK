#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define HLENFIOHJFL_ENGGHCEALJG_DOIDGBHGBGK_OFFSET UNITYSDK_OFFSET(0x18196C30)
#define HLENFIOHJFL_ENGGHCEALJG_GHKACELGDEG_OFFSET UNITYSDK_OFFSET(0x18196C40)
#define HLENFIOHJFL_ENGGHCEALJG__CTOR_OFFSET UNITYSDK_OFFSET(0x18196C20)

inline static constexpr unsigned int HLENFIOHJFL_ENGGHCEALJG_TypeDefinitionIndex = 54203;

class HLENFIOHJFL_ENGGHCEALJG : public ::System::Object
{
public:
	::System::Action* NKGCDDCMBCF; // 0x10
	::System::Action* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLENFIOHJFL_ENGGHCEALJG__CTOR_OFFSET))(this);
	}

	::System::Void DOIDGBHGBGK(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + HLENFIOHJFL_ENGGHCEALJG_DOIDGBHGBGK_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void GHKACELGDEG(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + HLENFIOHJFL_ENGGHCEALJG_GHKACELGDEG_OFFSET))(this, BHDNBGLCNOM);
	}
};
