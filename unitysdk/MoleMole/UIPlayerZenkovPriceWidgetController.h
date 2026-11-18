#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class BAMFDIFCIJA;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIPLAYERZENKOVPRICEWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x17BBA800)
#define MOLEMOLE_UIPLAYERZENKOVPRICEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17BBA5A0)
#define MOLEMOLE_UIPLAYERZENKOVPRICEWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x17BBA640)
#define MOLEMOLE_UIPLAYERZENKOVPRICEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17BBA870)
#define MOLEMOLE_UIPLAYERZENKOVPRICEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17BBA8D0)
#define MOLEMOLE_UIPLAYERZENKOVPRICEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x17BBA970)

namespace MoleMole
{
	inline static constexpr unsigned int UIPlayerZenkovPriceWidgetController_TypeDefinitionIndex = 50190;

	class UIPlayerZenkovPriceWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERZENKOVPRICEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERZENKOVPRICEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERZENKOVPRICEWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERZENKOVPRICEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERZENKOVPRICEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::BAMFDIFCIJA* OGMPOGIHBIK()
		{
			return ((::BAMFDIFCIJA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERZENKOVPRICEWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
