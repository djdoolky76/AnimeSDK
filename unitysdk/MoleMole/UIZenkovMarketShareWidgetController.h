#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class DHCIGGJKOFK;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIZENKOVMARKETSHAREWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x1057FE80)
#define MOLEMOLE_UIZENKOVMARKETSHAREWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1057FCD0)
#define MOLEMOLE_UIZENKOVMARKETSHAREWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x1057FEF0)
#define MOLEMOLE_UIZENKOVMARKETSHAREWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1057FD70)
#define MOLEMOLE_UIZENKOVMARKETSHAREWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1057FFB0)
#define MOLEMOLE_UIZENKOVMARKETSHAREWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x10580010)
#define MOLEMOLE_UIZENKOVMARKETSHAREWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x105800B0)
#define MOLEMOLE_UIZENKOVMARKETSHAREWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x10580140)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovMarketShareWidgetController_TypeDefinitionIndex = 67398;

	class UIZenkovMarketShareWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMARKETSHAREWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMARKETSHAREWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMARKETSHAREWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMARKETSHAREWIDGETCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMARKETSHAREWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMARKETSHAREWIDGETCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMARKETSHAREWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::DHCIGGJKOFK* OGMPOGIHBIK()
		{
			return ((::DHCIGGJKOFK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMARKETSHAREWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
