#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DPLLFKALLIN;
namespace RPG::Client::Prop { class InsertionPuzzleBoard; }
namespace RPG::Client::Prop { class InsertionPuzzleItem; }

#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD___C__DISPLAYCLASS14_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1A52B570)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD___C__DISPLAYCLASS14_0__TRANSFERCURRENTINSERTIONITEM_B__1_OFFSET UNITYSDK_OFFSET(0x1A52E740)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int InsertionPuzzleBoard___c__DisplayClass14_0_TypeDefinitionIndex = 81361;

	class InsertionPuzzleBoard___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::RPG::Client::Prop::InsertionPuzzleBoard* __4__this; // 0x10
		::RPG::Client::Prop::InsertionPuzzleItem* item; // 0x18
		::DPLLFKALLIN* __9__1; // 0x20
		::DPLLFKALLIN* OnTransferDone; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD___C__DISPLAYCLASS14_0_CTOR_OFFSET))(this);
		}

		::System::Void _TransferCurrentInsertionItem_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD___C__DISPLAYCLASS14_0__TRANSFERCURRENTINSERTIONITEM_B__1_OFFSET))(this);
		}

	};
}
