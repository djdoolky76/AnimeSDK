#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBKDBJPNCGI;
namespace RPG::Client::DiceCombat { class DiceCombatShopPageParam; }
namespace RPG::Client::Promises { class IPromise; }

#define LBKDBJPNCGI___C__DISPLAYCLASS27_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB5FCC30)
#define LBKDBJPNCGI___C__DISPLAYCLASS27_0__HANDLESHOWSHOPPAGE_B__0_OFFSET UNITYSDK_OFFSET(0xB600480)

inline static constexpr unsigned int LBKDBJPNCGI___c__DisplayClass27_0_TypeDefinitionIndex = 76111;

	class LBKDBJPNCGI___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::RPG::Client::DiceCombat::DiceCombatShopPageParam* param; // 0x10
		::LBKDBJPNCGI* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBKDBJPNCGI___C__DISPLAYCLASS27_0_CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _HandleShowShopPage_b__0()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBKDBJPNCGI___C__DISPLAYCLASS27_0__HANDLESHOWSHOPPAGE_B__0_OFFSET))(this);
		}

	};
