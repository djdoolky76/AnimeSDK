#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS119_1_CTOR_OFFSET UNITYSDK_OFFSET(0xDD38AB0)
#define RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS119_1__GOTOTOGUIDEROGUETOURNENTRANCE_B__1_OFFSET UNITYSDK_OFFSET(0xDD38AC0)

namespace RPG::Client
{
	inline static constexpr unsigned int HandbookModule___c__DisplayClass119_1_TypeDefinitionIndex = 67558;

	template <typename T>
	class HandbookModule___c__DisplayClass119_1 : public ::System::Object
	{
	public:
		::System::Boolean isAutoShow; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS119_1_CTOR_OFFSET))(this);
		}

		::System::Void _GotoToGuideRogueTournEntrance_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS119_1__GOTOTOGUIDEROGUETOURNENTRANCE_B__1_OFFSET))(this);
		}

	};
}
