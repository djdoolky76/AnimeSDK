#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NLHACPDMPIC;
namespace RPG::Client::DiceCombat { class DiceCombatChangeDicePageParam; }
namespace RPG::Client::Promises { class IPromise; }

#define NLHACPDMPIC___C__DISPLAYCLASS27_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBC69490)
#define NLHACPDMPIC___C__DISPLAYCLASS27_0__HANDLESHOWCHANGEDICEPAGE_B__0_OFFSET UNITYSDK_OFFSET(0xBC6B700)

	class NLHACPDMPIC___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::RPG::Client::DiceCombat::DiceCombatChangeDicePageParam* param; // 0x10
		::NLHACPDMPIC* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLHACPDMPIC___C__DISPLAYCLASS27_0_CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _HandleShowChangeDicePage_b__0()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLHACPDMPIC___C__DISPLAYCLASS27_0__HANDLESHOWCHANGEDICEPAGE_B__0_OFFSET))(this);
		}

	};
