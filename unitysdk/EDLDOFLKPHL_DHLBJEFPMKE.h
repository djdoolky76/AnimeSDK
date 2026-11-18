#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HEMMOPDOMEA;
class OAEFGCLEHHO;
namespace System { template <typename T1, typename T2> class Action_2; }

#define EDLDOFLKPHL_DHLBJEFPMKE_LPNIOPBMDLE_OFFSET UNITYSDK_OFFSET(0x16BD4C20)
#define EDLDOFLKPHL_DHLBJEFPMKE_NAELDEMHBLO_OFFSET UNITYSDK_OFFSET(0x16BD4C70)
#define EDLDOFLKPHL_DHLBJEFPMKE__CTOR_OFFSET UNITYSDK_OFFSET(0x16BD4C10)

inline static constexpr unsigned int EDLDOFLKPHL_DHLBJEFPMKE_TypeDefinitionIndex = 61486;

class EDLDOFLKPHL_DHLBJEFPMKE : public ::System::Object
{
public:
	::System::Action_2<::System::Boolean, ::HEMMOPDOMEA*>* FKHOJLMBILE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDLDOFLKPHL_DHLBJEFPMKE__CTOR_OFFSET))(this);
	}

	::System::Void LPNIOPBMDLE(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + EDLDOFLKPHL_DHLBJEFPMKE_LPNIOPBMDLE_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void NAELDEMHBLO(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + EDLDOFLKPHL_DHLBJEFPMKE_NAELDEMHBLO_OFFSET))(this, BHDNBGLCNOM);
	}
};
