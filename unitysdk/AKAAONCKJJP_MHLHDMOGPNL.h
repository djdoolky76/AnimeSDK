#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define AKAAONCKJJP_MHLHDMOGPNL_KMCIOIEHFML_OFFSET UNITYSDK_OFFSET(0x11BA63F0)
#define AKAAONCKJJP_MHLHDMOGPNL_PEBJNLFJLDG_OFFSET UNITYSDK_OFFSET(0x11BA6400)
#define AKAAONCKJJP_MHLHDMOGPNL__CTOR_OFFSET UNITYSDK_OFFSET(0x11BA63E0)

inline static constexpr unsigned int AKAAONCKJJP_MHLHDMOGPNL_TypeDefinitionIndex = 42179;

class AKAAONCKJJP_MHLHDMOGPNL : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10
	::System::Action* OLBAKFLBNIG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAAONCKJJP_MHLHDMOGPNL__CTOR_OFFSET))(this);
	}

	::System::Void KMCIOIEHFML(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + AKAAONCKJJP_MHLHDMOGPNL_KMCIOIEHFML_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void PEBJNLFJLDG(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + AKAAONCKJJP_MHLHDMOGPNL_PEBJNLFJLDG_OFFSET))(this, PIIPCLCCOIG);
	}
};
