#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UISUMMERTIDETREASURESELLINGPRODUCTROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x14E06370)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerTideTreasureSellingProductRowWidgetController_Data_TypeDefinitionIndex = 87454;

	class UISummerTideTreasureSellingProductRowWidgetController_Data : public ::System::Object
	{
	public:
		::System::Int32 Num; // 0x10
		::System::Int32 ItemConfigId; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURESELLINGPRODUCTROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
