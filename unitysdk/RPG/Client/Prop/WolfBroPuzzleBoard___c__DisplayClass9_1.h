#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameWorld; }
namespace System { class Object; }

#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD___C__DISPLAYCLASS9_1_CTOR_OFFSET UNITYSDK_OFFSET(0xDDD9AE0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD___C__DISPLAYCLASS9_1__PICKUPBULLET_B__0_OFFSET UNITYSDK_OFFSET(0xDDE1610)

namespace RPG::Client::Prop
{
	template <typename T>
	class WolfBroPuzzleBoard___c__DisplayClass9_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::RPG::GameCore::GameWorld* world; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD___C__DISPLAYCLASS9_1_CTOR_OFFSET))(this);
		}

		::System::Void _PickupBullet_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD___C__DISPLAYCLASS9_1__PICKUPBULLET_B__0_OFFSET))(this);
		}

	};
}
