#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::ActivityHipplen { class ActivityHipplenGameInstance; }

#define RPG_CLIENT_ACTIVITYHIPPLENUTILS___C__DISPLAYCLASS30_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1D121CC0)
#define RPG_CLIENT_ACTIVITYHIPPLENUTILS___C__DISPLAYCLASS30_0__SMOOTHEXITGAME_B__0_OFFSET UNITYSDK_OFFSET(0x1D122170)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityHipplenUtils___c__DisplayClass30_0_TypeDefinitionIndex = 62913;

	class ActivityHipplenUtils___c__DisplayClass30_0 : public ::System::Object
	{
	public:
		::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance* game; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENUTILS___C__DISPLAYCLASS30_0_CTOR_OFFSET))(this);
		}

		::System::Void _SmoothExitGame_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENUTILS___C__DISPLAYCLASS30_0__SMOOTHEXITGAME_B__0_OFFSET))(this);
		}

	};
}
