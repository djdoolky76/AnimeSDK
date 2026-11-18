#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define KFBAENHGMFB_NGCBJBNIBKP_GPFKDNBHJHP_OFFSET UNITYSDK_OFFSET(0x17645850)
#define KFBAENHGMFB_NGCBJBNIBKP_LOOIEGDCKAK_OFFSET UNITYSDK_OFFSET(0x17645860)
#define KFBAENHGMFB_NGCBJBNIBKP__CTOR_OFFSET UNITYSDK_OFFSET(0x17645840)

inline static constexpr unsigned int KFBAENHGMFB_NGCBJBNIBKP_TypeDefinitionIndex = 78588;

class KFBAENHGMFB_NGCBJBNIBKP : public ::System::Object
{
public:
	::System::Action* BLLNHDIDKPA; // 0x10
	::System::Action* FKHOJLMBILE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFBAENHGMFB_NGCBJBNIBKP__CTOR_OFFSET))(this);
	}

	::System::Void GPFKDNBHJHP(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KFBAENHGMFB_NGCBJBNIBKP_GPFKDNBHJHP_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void LOOIEGDCKAK(::OAEFGCLEHHO* JCHFKGGDDFB)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KFBAENHGMFB_NGCBJBNIBKP_LOOIEGDCKAK_OFFSET))(this, JCHFKGGDDFB);
	}
};
