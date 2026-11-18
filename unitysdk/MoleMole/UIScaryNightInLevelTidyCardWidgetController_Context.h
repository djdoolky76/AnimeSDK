#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIScaryNightInLevelBaseCardWidgetController_Context.h"

template <typename T> class JIOLFCAGOFH_1;

#define MOLEMOLE_UISCARYNIGHTINLEVELTIDYCARDWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18EEF450)

namespace MoleMole
{
	inline static constexpr unsigned int UIScaryNightInLevelTidyCardWidgetController_Context_TypeDefinitionIndex = 44083;

	class UIScaryNightInLevelTidyCardWidgetController_Context : public ::MoleMole::UIScaryNightInLevelBaseCardWidgetController_Context
	{
	public:
		::JIOLFCAGOFH_1<::System::Boolean>* IsSwapReady; // 0x38
		::JIOLFCAGOFH_1<::System::Int32>* SelectedIndex; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTINLEVELTIDYCARDWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
