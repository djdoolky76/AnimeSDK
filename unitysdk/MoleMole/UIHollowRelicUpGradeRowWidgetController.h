#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIHollowCardUpGradeRowWidgetController.h"

class MOIDKAJLABL;
namespace MoleMole { class UIHollowRelicOptionItemWidgetController; }

#define MOLEMOLE_UIHOLLOWRELICUPGRADEROWWIDGETCONTROLLER_CREATEITEMWIDGET_OFFSET UNITYSDK_OFFSET(0x18CD6010)
#define MOLEMOLE_UIHOLLOWRELICUPGRADEROWWIDGETCONTROLLER_REFRESHITEMVIEW_OFFSET UNITYSDK_OFFSET(0x18CD6130)
#define MOLEMOLE_UIHOLLOWRELICUPGRADEROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18CD61E0)
#define MOLEMOLE_UIHOLLOWRELICUPGRADEROWWIDGETCONTROLLER___BASE_CREATEITEMWIDGET_OFFSET UNITYSDK_OFFSET(0x18CD61F0)
#define MOLEMOLE_UIHOLLOWRELICUPGRADEROWWIDGETCONTROLLER___BASE_REFRESHITEMVIEW_OFFSET UNITYSDK_OFFSET(0x18CD6200)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowRelicUpGradeRowWidgetController_TypeDefinitionIndex = 58291;

	class UIHollowRelicUpGradeRowWidgetController : public ::MoleMole::UIHollowCardUpGradeRowWidgetController
	{
	public:
		::MoleMole::UIHollowRelicOptionItemWidgetController* FMHHHFEIHNB; // 0x308

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRELICUPGRADEROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void CreateItemWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRELICUPGRADEROWWIDGETCONTROLLER_CREATEITEMWIDGET_OFFSET))(this);
		}

		::System::Void RefreshItemView(::MOIDKAJLABL* info)
		{
			return ((::System::Void(*)(::PVOID, ::MOIDKAJLABL*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRELICUPGRADEROWWIDGETCONTROLLER_REFRESHITEMVIEW_OFFSET))(this, info);
		}

		::System::Void __base_CreateItemWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRELICUPGRADEROWWIDGETCONTROLLER___BASE_CREATEITEMWIDGET_OFFSET))(this);
		}

		::System::Void __base_RefreshItemView(::MOIDKAJLABL* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MOIDKAJLABL*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRELICUPGRADEROWWIDGETCONTROLLER___BASE_REFRESHITEMVIEW_OFFSET))(this, P0);
		}
	};
}
