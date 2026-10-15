#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NLHACPDMPIC;
namespace RPG::Client::DiceCombat { class DiceCombatShopPageParam; }
namespace RPG::Client::Promises { class IPromise; }

#define NLHACPDMPIC___C__DISPLAYCLASS21_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBC62540)
#define NLHACPDMPIC___C__DISPLAYCLASS21_0__HANDLESHOWSHOPPAGE_B__0_OFFSET UNITYSDK_OFFSET(0xBC64BA0)

inline static constexpr unsigned int NLHACPDMPIC___c__DisplayClass21_0_TypeDefinitionIndex = 76186;

	class NLHACPDMPIC___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::NLHACPDMPIC* __4__this; // 0x10
		::RPG::Client::DiceCombat::DiceCombatShopPageParam* param; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLHACPDMPIC___C__DISPLAYCLASS21_0_CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _HandleShowShopPage_b__0()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLHACPDMPIC___C__DISPLAYCLASS21_0__HANDLESHOWSHOPPAGE_B__0_OFFSET))(this);
		}

	};
