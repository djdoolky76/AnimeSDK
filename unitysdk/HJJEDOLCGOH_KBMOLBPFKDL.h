#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define HJJEDOLCGOH_KBMOLBPFKDL_EIEAELCMEGA_OFFSET UNITYSDK_OFFSET(0x17E4E440)
#define HJJEDOLCGOH_KBMOLBPFKDL_NBJIFMFEAAK_OFFSET UNITYSDK_OFFSET(0x17E4E450)
#define HJJEDOLCGOH_KBMOLBPFKDL__CTOR_OFFSET UNITYSDK_OFFSET(0x17E4E430)

inline static constexpr unsigned int HJJEDOLCGOH_KBMOLBPFKDL_TypeDefinitionIndex = 87732;

class HJJEDOLCGOH_KBMOLBPFKDL : public ::System::Object
{
public:
	::System::Action* NLJIJAPOPFM; // 0x10
	::System::Action* KCIPHLPEBIL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJJEDOLCGOH_KBMOLBPFKDL__CTOR_OFFSET))(this);
	}

	::System::Void EIEAELCMEGA(::OAEFGCLEHHO* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + HJJEDOLCGOH_KBMOLBPFKDL_EIEAELCMEGA_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NBJIFMFEAAK(::OAEFGCLEHHO* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + HJJEDOLCGOH_KBMOLBPFKDL_NBJIFMFEAAK_OFFSET))(this, LJBPECKCCEA);
	}
};
