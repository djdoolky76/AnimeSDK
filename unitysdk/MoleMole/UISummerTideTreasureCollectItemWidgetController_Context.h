#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UISUMMERTIDETREASURECOLLECTITEMWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1135F0B0)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerTideTreasureCollectItemWidgetController_Context_TypeDefinitionIndex = 90937;

	class UISummerTideTreasureCollectItemWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::System::Int32>* OnItemClicked; // 0x28
		::System::Boolean IsCollected; // 0x30
		::System::Byte _padding0[0x3];
		::System::Int32 CollectionID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURECOLLECTITEMWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
