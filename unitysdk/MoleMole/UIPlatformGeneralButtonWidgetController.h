#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class GFEIAJOEPHH;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralButtonController; }

#define MOLEMOLE_UIPLATFORMGENERALBUTTONWIDGETCONTROLLER_GET_GENERALBUTTONCONTROLLER_OFFSET UNITYSDK_OFFSET(0x15C49DB0)
#define MOLEMOLE_UIPLATFORMGENERALBUTTONWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x15C49E20)
#define MOLEMOLE_UIPLATFORMGENERALBUTTONWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15C49E90)
#define MOLEMOLE_UIPLATFORMGENERALBUTTONWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15C49F30)
#define MOLEMOLE_UIPLATFORMGENERALBUTTONWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15C4A160)
#define MOLEMOLE_UIPLATFORMGENERALBUTTONWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15C4A1C0)
#define MOLEMOLE_UIPLATFORMGENERALBUTTONWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15C4A260)

namespace MoleMole
{
	inline static constexpr unsigned int UIPlatformGeneralButtonWidgetController_TypeDefinitionIndex = 39826;

	class UIPlatformGeneralButtonWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLATFORMGENERALBUTTONWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::MoleMole::UIGeneralButtonController* get_GeneralButtonController()
		{
			return ((::MoleMole::UIGeneralButtonController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLATFORMGENERALBUTTONWIDGETCONTROLLER_GET_GENERALBUTTONCONTROLLER_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLATFORMGENERALBUTTONWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLATFORMGENERALBUTTONWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLATFORMGENERALBUTTONWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLATFORMGENERALBUTTONWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::GFEIAJOEPHH* OGMPOGIHBIK()
		{
			return ((::GFEIAJOEPHH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLATFORMGENERALBUTTONWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
