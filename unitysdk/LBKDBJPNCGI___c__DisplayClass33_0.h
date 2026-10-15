#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBKDBJPNCGI;
namespace RPG::Client::DiceCombat { class DiceCombatChangeDicePageParam; }
namespace RPG::Client::Promises { class IPromise; }

#define LBKDBJPNCGI___C__DISPLAYCLASS33_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB6033A0)
#define LBKDBJPNCGI___C__DISPLAYCLASS33_0__HANDLESHOWCHANGEDICEPAGE_B__0_OFFSET UNITYSDK_OFFSET(0xB6067E0)

inline static constexpr unsigned int LBKDBJPNCGI___c__DisplayClass33_0_TypeDefinitionIndex = 76113;

	class LBKDBJPNCGI___c__DisplayClass33_0 : public ::System::Object
	{
	public:
		::LBKDBJPNCGI* __4__this; // 0x10
		::RPG::Client::DiceCombat::DiceCombatChangeDicePageParam* param; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBKDBJPNCGI___C__DISPLAYCLASS33_0_CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _HandleShowChangeDicePage_b__0()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBKDBJPNCGI___C__DISPLAYCLASS33_0__HANDLESHOWCHANGEDICEPAGE_B__0_OFFSET))(this);
		}

	};
