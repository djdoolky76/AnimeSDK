#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }

#define JBBKJFCDLEJ___C__DISPLAYCLASS50_0_CTOR_OFFSET UNITYSDK_OFFSET(0x16566140)
#define JBBKJFCDLEJ___C__DISPLAYCLASS50_0__ONNORMALEVENTDONE_B__0_OFFSET UNITYSDK_OFFSET(0x165666F0)

	class JBBKJFCDLEJ___c__DisplayClass50_0 : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::ElfRestaurantGameEntity* customerEntity; // 0x10
		::System::Int32 bonusPrice; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBBKJFCDLEJ___C__DISPLAYCLASS50_0_CTOR_OFFSET))(this);
		}

		::System::Void _OnNormalEventDone_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBBKJFCDLEJ___C__DISPLAYCLASS50_0__ONNORMALEVENTDONE_B__0_OFFSET))(this);
		}

	};
