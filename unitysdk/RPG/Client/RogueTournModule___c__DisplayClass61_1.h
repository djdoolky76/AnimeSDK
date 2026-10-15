#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS61_1_CTOR_OFFSET UNITYSDK_OFFSET(0xE0046D0)
#define RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS61_1__APPLYROGUETOURNBUILDREF_B__4_OFFSET UNITYSDK_OFFSET(0xE011C10)

namespace RPG::Client
{
	template <typename T>
	class RogueTournModule___c__DisplayClass61_1 : public ::System::Object
	{
	public:
		::System::UInt32 httpBlockID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS61_1_CTOR_OFFSET))(this);
		}

		::System::Void _ApplyRogueTournBuildRef_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS61_1__APPLYROGUETOURNBUILDREF_B__4_OFFSET))(this);
		}

	};
}
