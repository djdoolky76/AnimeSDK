#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NBCAOOBFHEA.h"
#include "unitysdk/System/Object.h"
class DPLLFKALLIN;
namespace RPG::Client::Prop { class InsertionPuzzleBoard; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD___C__DISPLAYCLASS13_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDCFEFC0)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD___C__DISPLAYCLASS13_0__PLAYERROTATEAROUNDCENTER_B__1_OFFSET UNITYSDK_OFFSET(0xDD03060)

namespace RPG::Client::Prop
{
	class InsertionPuzzleBoard___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::NBCAOOBFHEA>* blockCoords; // 0x10
		::DPLLFKALLIN* __9__1; // 0x18
		::RPG::Client::Prop::InsertionPuzzleBoard* __4__this; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD___C__DISPLAYCLASS13_0_CTOR_OFFSET))(this);
		}

		::System::Void _PlayerRotateAroundCenter_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD___C__DISPLAYCLASS13_0__PLAYERROTATEAROUNDCENTER_B__1_OFFSET))(this);
		}

	};
}
