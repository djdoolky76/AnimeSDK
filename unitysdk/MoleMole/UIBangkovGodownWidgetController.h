#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/INOEOEPKMJL.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class EHOFCIGBFBA;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIBANGKOVGODOWNWIDGETCONTROLLER_NOBMJLJPAAM_OFFSET UNITYSDK_OFFSET(0x18061960)
#define MOLEMOLE_UIBANGKOVGODOWNWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x180618F0)
#define MOLEMOLE_UIBANGKOVGODOWNWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18061070)
#define MOLEMOLE_UIBANGKOVGODOWNWIDGETCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x18061B70)
#define MOLEMOLE_UIBANGKOVGODOWNWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18061110)
#define MOLEMOLE_UIBANGKOVGODOWNWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x18061BE0)
#define MOLEMOLE_UIBANGKOVGODOWNWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18061CC0)
#define MOLEMOLE_UIBANGKOVGODOWNWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18061D20)
#define MOLEMOLE_UIBANGKOVGODOWNWIDGETCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x18061DC0)
#define MOLEMOLE_UIBANGKOVGODOWNWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18061E50)
#define MOLEMOLE_UIBANGKOVGODOWNWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x18061EF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovGodownWidgetController_TypeDefinitionIndex = 63178;

	class UIBangkovGodownWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::INOEOEPKMJL GCDCJNIPJKM; // 0x2C8
		::INOEOEPKMJL NAPCBAAEGHL; // 0x2D8
		::System::Boolean outsideControlGamepad; // 0x2E8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVGODOWNWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVGODOWNWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVGODOWNWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVGODOWNWIDGETCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVGODOWNWIDGETCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVGODOWNWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVGODOWNWIDGETCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVGODOWNWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVGODOWNWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::EHOFCIGBFBA* OGMPOGIHBIK()
		{
			return ((::EHOFCIGBFBA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVGODOWNWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}

		::System::Void NOBMJLJPAAM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVGODOWNWIDGETCONTROLLER_NOBMJLJPAAM_OFFSET))(this);
		}
	};
}
