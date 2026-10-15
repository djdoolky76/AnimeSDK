#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class LuaUIController; }
namespace System { class Action; }

#define RPG_CLIENT_MUSEUMUTILS___C__DISPLAYCLASS5_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD9077B0)
#define RPG_CLIENT_MUSEUMUTILS___C__DISPLAYCLASS5_0__SHOWMUSEUMMARKETPAGE_B__0_OFFSET UNITYSDK_OFFSET(0xD907880)
#define RPG_CLIENT_MUSEUMUTILS___C__DISPLAYCLASS5_0__SHOWMUSEUMMARKETPAGE_B__1_OFFSET UNITYSDK_OFFSET(0xD907A00)

namespace RPG::Client
{
	class MuseumUtils___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::System::Action* __9__1; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMUTILS___C__DISPLAYCLASS5_0_CTOR_OFFSET))(this);
		}

		::System::Void _ShowMuseumMarketPage_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMUTILS___C__DISPLAYCLASS5_0__SHOWMUSEUMMARKETPAGE_B__0_OFFSET))(this);
		}

		::System::Void _ShowMuseumMarketPage_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMUTILS___C__DISPLAYCLASS5_0__SHOWMUSEUMMARKETPAGE_B__1_OFFSET))(this);
		}

	};
}
