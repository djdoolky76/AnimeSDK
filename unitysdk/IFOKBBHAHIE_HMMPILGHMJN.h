#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define IFOKBBHAHIE_HMMPILGHMJN_HJCCGMHPMIH_OFFSET UNITYSDK_OFFSET(0x165730B0)
#define IFOKBBHAHIE_HMMPILGHMJN__CTOR_OFFSET UNITYSDK_OFFSET(0x165730A0)

inline static constexpr unsigned int IFOKBBHAHIE_HMMPILGHMJN_TypeDefinitionIndex = 67441;

class IFOKBBHAHIE_HMMPILGHMJN : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFOKBBHAHIE_HMMPILGHMJN__CTOR_OFFSET))(this);
	}

	::System::Void HJCCGMHPMIH(::OAEFGCLEHHO* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IFOKBBHAHIE_HMMPILGHMJN_HJCCGMHPMIH_OFFSET))(this, LJBPECKCCEA);
	}
};
