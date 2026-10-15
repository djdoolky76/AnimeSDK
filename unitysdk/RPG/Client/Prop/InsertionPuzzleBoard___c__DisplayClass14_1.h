#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Prop { class InsertionPuzzleItem; }
namespace System { class Object; }

#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD___C__DISPLAYCLASS14_1_CTOR_OFFSET UNITYSDK_OFFSET(0xDCFFCB0)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD___C__DISPLAYCLASS14_1__TRANSFERCURRENTINSERTIONITEM_B__0_OFFSET UNITYSDK_OFFSET(0xDD033C0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int InsertionPuzzleBoard___c__DisplayClass14_1_TypeDefinitionIndex = 78628;

	template <typename T>
	class InsertionPuzzleBoard___c__DisplayClass14_1 : public ::System::Object
	{
	public:
		::RPG::Client::Prop::InsertionPuzzleItem* targetTransfer; // 0x10
		::System::Object* CS___8__locals1; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD___C__DISPLAYCLASS14_1_CTOR_OFFSET))(this);
		}

		::System::Void _TransferCurrentInsertionItem_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD___C__DISPLAYCLASS14_1__TRANSFERCURRENTINSERTIONITEM_B__0_OFFSET))(this);
		}

	};
}
