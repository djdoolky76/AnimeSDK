#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MAAEMAHHFLI;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIZENKOVRANDOMEVENTINFOTABBTNWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x12C0E080)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovRandomEventInfoTabBtnWidgetController_Data_TypeDefinitionIndex = 51396;

	class UIZenkovRandomEventInfoTabBtnWidgetController_Data : public ::System::Object
	{
	public:
		::System::Action_1<::System::Int32>* AfterSelectEventAction; // 0x10
		::MAAEMAHHFLI* EventInfo; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRANDOMEVENTINFOTABBTNWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
