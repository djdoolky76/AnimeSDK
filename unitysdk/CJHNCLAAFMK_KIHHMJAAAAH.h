#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
class PNPFJKPGEHF;
namespace System { class Action; }

#define CJHNCLAAFMK_KIHHMJAAAAH_EBJHOPCPKOC_OFFSET UNITYSDK_OFFSET(0x16963DB0)
#define CJHNCLAAFMK_KIHHMJAAAAH_EJKIGBOPIJB_OFFSET UNITYSDK_OFFSET(0x16963DC0)
#define CJHNCLAAFMK_KIHHMJAAAAH__CTOR_OFFSET UNITYSDK_OFFSET(0x16963DA0)

inline static constexpr unsigned int CJHNCLAAFMK_KIHHMJAAAAH_TypeDefinitionIndex = 65615;

class CJHNCLAAFMK_KIHHMJAAAAH : public ::System::Object
{
public:
	::System::Action* FKHOJLMBILE; // 0x10
	::System::Action* BLLNHDIDKPA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJHNCLAAFMK_KIHHMJAAAAH__CTOR_OFFSET))(this);
	}

	::System::Void EBJHOPCPKOC(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + CJHNCLAAFMK_KIHHMJAAAAH_EBJHOPCPKOC_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void EJKIGBOPIJB(::PNPFJKPGEHF* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::PNPFJKPGEHF*))((::PBYTE)hIl2Cpp + CJHNCLAAFMK_KIHHMJAAAAH_EJKIGBOPIJB_OFFSET))(this, GLAOEHCGCFO);
	}
};
