#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_UIGALGAMEARGUEHPPANELWIDGETCONTROLLER_ARGUENAMEPANELPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1783DEE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgameArgueHPPanelWidgetController_ArgueNamePanelParam_TypeDefinitionIndex = 81007;

	class UIGalgameArgueHPPanelWidgetController_ArgueNamePanelParam : public ::System::Object
	{
	public:
		::System::String* displayName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEARGUEHPPANELWIDGETCONTROLLER_ARGUENAMEPANELPARAM__CTOR_OFFSET))(this);
		}
	};
}
