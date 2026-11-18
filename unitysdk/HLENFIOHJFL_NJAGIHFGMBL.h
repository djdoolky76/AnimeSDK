#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define HLENFIOHJFL_NJAGIHFGMBL_NNEDJJNCLKK_OFFSET UNITYSDK_OFFSET(0x1011C0D0)
#define HLENFIOHJFL_NJAGIHFGMBL__CTOR_OFFSET UNITYSDK_OFFSET(0x1011C0C0)

inline static constexpr unsigned int HLENFIOHJFL_NJAGIHFGMBL_TypeDefinitionIndex = 54205;

class HLENFIOHJFL_NJAGIHFGMBL : public ::System::Object
{
public:
	::System::Action* FGHOIDFGJHB; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLENFIOHJFL_NJAGIHFGMBL__CTOR_OFFSET))(this);
	}

	::System::Void NNEDJJNCLKK(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + HLENFIOHJFL_NJAGIHFGMBL_NNEDJJNCLKK_OFFSET))(this, BHDNBGLCNOM);
	}
};
