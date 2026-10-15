#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ROGUETOURNUTILS___C__DISPLAYCLASS54_1_CTOR_OFFSET UNITYSDK_OFFSET(0xE05B130)
#define RPG_CLIENT_ROGUETOURNUTILS___C__DISPLAYCLASS54_1__TRANSFEROPENMODESELECTPAGE_B__1_OFFSET UNITYSDK_OFFSET(0xE05B140)

namespace RPG::Client
{
	template <typename T>
	class RogueTournUtils___c__DisplayClass54_1 : public ::System::Object
	{
	public:
		::System::Boolean isAutoShow; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS___C__DISPLAYCLASS54_1_CTOR_OFFSET))(this);
		}

		::System::Void _TransferOpenModeSelectPage_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS___C__DISPLAYCLASS54_1__TRANSFEROPENMODESELECTPAGE_B__1_OFFSET))(this);
		}

	};
}
