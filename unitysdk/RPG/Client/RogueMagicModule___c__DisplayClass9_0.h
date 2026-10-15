#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class UIController; }
namespace RPG::Client::Promises { class Promise; }

#define RPG_CLIENT_ROGUEMAGICMODULE___C__DISPLAYCLASS9_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDF2B670)
#define RPG_CLIENT_ROGUEMAGICMODULE___C__DISPLAYCLASS9_0__SHOWENTRANCEPAGEWITHROGUESELECTMAINPAGEPROMISED_B__0_OFFSET UNITYSDK_OFFSET(0xDF2F300)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicModule___c__DisplayClass9_0_TypeDefinitionIndex = 67410;

	class RogueMagicModule___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* promise; // 0x10
		::System::UInt32 areaID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE___C__DISPLAYCLASS9_0_CTOR_OFFSET))(this);
		}

		::System::Void _ShowEntrancePageWithRogueSelectMainPagePromised_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE___C__DISPLAYCLASS9_0__SHOWENTRANCEPAGEWITHROGUESELECTMAINPAGEPROMISED_B__0_OFFSET))(this);
		}

	};
}
