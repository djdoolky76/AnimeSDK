#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GGIFOKDPDNG;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UISUMMERTIDETREASURESELLPREPAREROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1562FA80)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerTideTreasureSellPrepareRowWidgetController_Data_TypeDefinitionIndex = 55972;

	class UISummerTideTreasureSellPrepareRowWidgetController_Data : public ::System::Object
	{
	public:
		::System::Func_2<::System::Object*, ::System::Boolean>* IsSelect; // 0x10
		::GGIFOKDPDNG* Config; // 0x18
		::System::Action_1<::System::Object*>* OnClick; // 0x20
		::System::Func_2<::System::Object*, ::System::Boolean>* CanSelect; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURESELLPREPAREROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
