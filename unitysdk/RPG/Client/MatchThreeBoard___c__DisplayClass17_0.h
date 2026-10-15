#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MatchThreeBoard; }
namespace RPG::Client { class MatchThreeTimedEffect; }

#define RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS17_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD583E50)
#define RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS17_0__DOPLAYREFRESHEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0xD58D070)

namespace RPG::Client
{
	class MatchThreeBoard___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::RPG::Client::MatchThreeBoard* __4__this; // 0x10
		::RPG::Client::MatchThreeTimedEffect* effect; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS17_0_CTOR_OFFSET))(this);
		}

		::System::Void _DoPlayRefreshEffect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS17_0__DOPLAYREFRESHEFFECT_B__0_OFFSET))(this);
		}

	};
}
