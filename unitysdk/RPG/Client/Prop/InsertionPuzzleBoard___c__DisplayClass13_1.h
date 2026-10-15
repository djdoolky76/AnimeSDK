#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Prop { class InsertionPuzzleItem; }
namespace System { class Object; }

#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD___C__DISPLAYCLASS13_1_CTOR_OFFSET UNITYSDK_OFFSET(0xDCFEFD0)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD___C__DISPLAYCLASS13_1__PLAYERROTATEAROUNDCENTER_B__0_OFFSET UNITYSDK_OFFSET(0xDD03120)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int InsertionPuzzleBoard___c__DisplayClass13_1_TypeDefinitionIndex = 78626;

	template <typename T>
	class InsertionPuzzleBoard___c__DisplayClass13_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::RPG::Client::Prop::InsertionPuzzleItem* item; // 0x18
		::System::Boolean bIsEncounterObstacle; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD___C__DISPLAYCLASS13_1_CTOR_OFFSET))(this);
		}

		::System::Void _PlayerRotateAroundCenter_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD___C__DISPLAYCLASS13_1__PLAYERROTATEAROUNDCENTER_B__0_OFFSET))(this);
		}

	};
}
