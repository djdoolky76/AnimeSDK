#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJGEHPBJKDM.h"
#include "unitysdk/System/Object.h"

class GGIFOKDPDNG;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UISUMMERTIDETREASURESELLINGLISTITEMROWWIDGETCONTROLLER_DATA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x188DC630)
#define MOLEMOLE_UISUMMERTIDETREASURESELLINGLISTITEMROWWIDGETCONTROLLER_DATA_EQUALS_OFFSET UNITYSDK_OFFSET(0x188DC4B0)
#define MOLEMOLE_UISUMMERTIDETREASURESELLINGLISTITEMROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x188DC720)
#define MOLEMOLE_UISUMMERTIDETREASURESELLINGLISTITEMROWWIDGETCONTROLLER_DATA___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x188DC730)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerTideTreasureSellingListItemRowWidgetController_Data_TypeDefinitionIndex = 38662;

	class UISummerTideTreasureSellingListItemRowWidgetController_Data : public ::System::Object
	{
	public:
		::FJGEHPBJKDM WorldHandle; // 0x10
		::GGIFOKDPDNG* Item; // 0x20
		::System::Func_2<::GGIFOKDPDNG*, ::System::Boolean>* IsSelect; // 0x28
		::System::Int32 PlaySequenceIndex; // 0x30
		::System::Single ShowNewAnimTime; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURESELLINGLISTITEMROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::MoleMole::UISummerTideTreasureSellingListItemRowWidgetController_Data* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UISummerTideTreasureSellingListItemRowWidgetController_Data*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURESELLINGLISTITEMROWWIDGETCONTROLLER_DATA_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURESELLINGLISTITEMROWWIDGETCONTROLLER_DATA_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURESELLINGLISTITEMROWWIDGETCONTROLLER_DATA___BASE_EQUALS_OFFSET))(this, P0);
		}
	};
}
