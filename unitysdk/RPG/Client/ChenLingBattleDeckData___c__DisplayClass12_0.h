#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingCardType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::ChenLingBattle { class CardConfig; }
namespace System::Collections::Generic { class KeyValuePair; }

#define RPG_CLIENT_CHENLINGBATTLEDECKDATA___C__DISPLAYCLASS12_0_CTOR_OFFSET UNITYSDK_OFFSET(0xCA6D1F0)
#define RPG_CLIENT_CHENLINGBATTLEDECKDATA___C__DISPLAYCLASS12_0__GETCARDINDEXLISTBYTYPE_B__0_OFFSET UNITYSDK_OFFSET(0xCA6D6F0)

namespace RPG::Client
{
	class ChenLingBattleDeckData___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::ChenLingCardType type; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEDECKDATA___C__DISPLAYCLASS12_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetCardIndexListByType_b__0(::System::Collections::Generic::KeyValuePair* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEDECKDATA___C__DISPLAYCLASS12_0__GETCARDINDEXLISTBYTYPE_B__0_OFFSET))(this, a1);
		}

	};
}
