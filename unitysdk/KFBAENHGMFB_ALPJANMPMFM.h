#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define KFBAENHGMFB_ALPJANMPMFM_DHJKHFJFNJD_OFFSET UNITYSDK_OFFSET(0x129836E0)
#define KFBAENHGMFB_ALPJANMPMFM_MBIBODLKDJF_OFFSET UNITYSDK_OFFSET(0x129836D0)
#define KFBAENHGMFB_ALPJANMPMFM__CTOR_OFFSET UNITYSDK_OFFSET(0x129836C0)

inline static constexpr unsigned int KFBAENHGMFB_ALPJANMPMFM_TypeDefinitionIndex = 78587;

class KFBAENHGMFB_ALPJANMPMFM : public ::System::Object
{
public:
	::System::Action* HGBOMLCCBEE; // 0x10
	::System::Action* CAAFEGLOALC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFBAENHGMFB_ALPJANMPMFM__CTOR_OFFSET))(this);
	}

	::System::Void MBIBODLKDJF(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KFBAENHGMFB_ALPJANMPMFM_MBIBODLKDJF_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void DHJKHFJFNJD(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KFBAENHGMFB_ALPJANMPMFM_DHJKHFJFNJD_OFFSET))(this, PIIPCLCCOIG);
	}
};
