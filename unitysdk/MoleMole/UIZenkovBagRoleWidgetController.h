#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class FBAEDILKHEM;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIZenkovItemIconBtnWidgetController; }

#define MOLEMOLE_UIZENKOVBAGROLEWIDGETCONTROLLER_CLEARROLE_OFFSET UNITYSDK_OFFSET(0x12FA3320)
#define MOLEMOLE_UIZENKOVBAGROLEWIDGETCONTROLLER_GETWEAPONITEMICONCONTROLLER_OFFSET UNITYSDK_OFFSET(0x12FA3610)
#define MOLEMOLE_UIZENKOVBAGROLEWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x12FA3200)
#define MOLEMOLE_UIZENKOVBAGROLEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x12FA2D10)
#define MOLEMOLE_UIZENKOVBAGROLEWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x12FA2DB0)
#define MOLEMOLE_UIZENKOVBAGROLEWIDGETCONTROLLER_SETROLE_OFFSET UNITYSDK_OFFSET(0x12FA3270)
#define MOLEMOLE_UIZENKOVBAGROLEWIDGETCONTROLLER_SETWEAPONMASKSTATE_OFFSET UNITYSDK_OFFSET(0x12FA3490)
#define MOLEMOLE_UIZENKOVBAGROLEWIDGETCONTROLLER_SETWEAPONRECOMMENDHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0x12FA33C0)
#define MOLEMOLE_UIZENKOVBAGROLEWIDGETCONTROLLER_SETWEAPONSELECTED_OFFSET UNITYSDK_OFFSET(0x12FA3560)
#define MOLEMOLE_UIZENKOVBAGROLEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x12FA36D0)
#define MOLEMOLE_UIZENKOVBAGROLEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x12FA3730)
#define MOLEMOLE_UIZENKOVBAGROLEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x12FA37D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovBagRoleWidgetController_TypeDefinitionIndex = 85004;

	class UIZenkovBagRoleWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBAGROLEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBAGROLEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBAGROLEWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void SetRole(::System::Int32 avatarId, ::System::Boolean isUp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBAGROLEWIDGETCONTROLLER_SETROLE_OFFSET))(this, avatarId, isUp);
		}

		::System::Void ClearRole()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBAGROLEWIDGETCONTROLLER_CLEARROLE_OFFSET))(this);
		}

		::System::Void SetWeaponRecommendHighlight(::System::Boolean show)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBAGROLEWIDGETCONTROLLER_SETWEAPONRECOMMENDHIGHLIGHT_OFFSET))(this, show);
		}

		::System::Void SetWeaponMaskState(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBAGROLEWIDGETCONTROLLER_SETWEAPONMASKSTATE_OFFSET))(this, active);
		}

		::System::Void SetWeaponSelected(::System::Boolean selected)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBAGROLEWIDGETCONTROLLER_SETWEAPONSELECTED_OFFSET))(this, selected);
		}

		::MoleMole::UIZenkovItemIconBtnWidgetController* GetWeaponItemIconController()
		{
			return ((::MoleMole::UIZenkovItemIconBtnWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBAGROLEWIDGETCONTROLLER_GETWEAPONITEMICONCONTROLLER_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBAGROLEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBAGROLEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::FBAEDILKHEM* OGMPOGIHBIK()
		{
			return ((::FBAEDILKHEM*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBAGROLEWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
