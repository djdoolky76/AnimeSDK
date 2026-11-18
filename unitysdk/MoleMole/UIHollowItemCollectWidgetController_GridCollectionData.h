#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_GRIDCOLLECTIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18CD0330)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowItemCollectWidgetController_GridCollectionData_TypeDefinitionIndex = 67244;

	class UIHollowItemCollectWidgetController_GridCollectionData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* ItemCollectInputDic; // 0x10
		::MoleMole::HollowChessboard::HollowCell Index; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_GRIDCOLLECTIONDATA__CTOR_OFFSET))(this);
		}
	};
}
