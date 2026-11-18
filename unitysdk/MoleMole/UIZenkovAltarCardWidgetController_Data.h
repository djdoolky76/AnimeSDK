#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class JFOGKNLPCKH;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIZENKOVALTARCARDWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x16719B10)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovAltarCardWidgetController_Data_TypeDefinitionIndex = 49939;

	class UIZenkovAltarCardWidgetController_Data : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* RewardList; // 0x10
		::JFOGKNLPCKH* Config; // 0x18
		::System::Boolean ShowLowerReward; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVALTARCARDWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
