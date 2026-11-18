#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define KFBAENHGMFB_COEBDEFGDHO_LJHBIJFIHGI_OFFSET UNITYSDK_OFFSET(0x1860D6E0)
#define KFBAENHGMFB_COEBDEFGDHO_LKCHBBJKBCK_OFFSET UNITYSDK_OFFSET(0x1860D6F0)
#define KFBAENHGMFB_COEBDEFGDHO__CTOR_OFFSET UNITYSDK_OFFSET(0x1860D6D0)

inline static constexpr unsigned int KFBAENHGMFB_COEBDEFGDHO_TypeDefinitionIndex = 78585;

class KFBAENHGMFB_COEBDEFGDHO : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10
	::System::Action* IOLCMHKHKGH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFBAENHGMFB_COEBDEFGDHO__CTOR_OFFSET))(this);
	}

	::System::Void LJHBIJFIHGI(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KFBAENHGMFB_COEBDEFGDHO_LJHBIJFIHGI_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void LKCHBBJKBCK(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KFBAENHGMFB_COEBDEFGDHO_LKCHBBJKBCK_OFFSET))(this, PIIPCLCCOIG);
	}
};
