#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UISUMMERTIDETREASURERESULTDIALOGPOPWINDOWCONTROLLER_REWARDSOURCESORTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1135F110)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerTideTreasureResultDialogPopWindowController_RewardSourceSortInfo_TypeDefinitionIndex = 39646;

	class UISummerTideTreasureResultDialogPopWindowController_RewardSourceSortInfo : public ::System::Object
	{
	public:
		::System::UInt32 DropItemId; // 0x10
		::System::Int32 DropItemStar; // 0x14
		::System::Int32 LeftIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURERESULTDIALOGPOPWINDOWCONTROLLER_REWARDSOURCESORTINFO__CTOR_OFFSET))(this);
		}
	};
}
