#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class JHKMHIGAGLI;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIMAINCITYCAMERASLOWPLAYBTNWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x1795F500)
#define MOLEMOLE_UIMAINCITYCAMERASLOWPLAYBTNWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1795F2A0)
#define MOLEMOLE_UIMAINCITYCAMERASLOWPLAYBTNWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1795F340)
#define MOLEMOLE_UIMAINCITYCAMERASLOWPLAYBTNWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1795F570)
#define MOLEMOLE_UIMAINCITYCAMERASLOWPLAYBTNWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1795F5D0)
#define MOLEMOLE_UIMAINCITYCAMERASLOWPLAYBTNWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1795F670)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityCameraSlowPlayBtnWidgetController_TypeDefinitionIndex = 62349;

	class UIMainCityCameraSlowPlayBtnWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERASLOWPLAYBTNWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERASLOWPLAYBTNWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERASLOWPLAYBTNWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERASLOWPLAYBTNWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERASLOWPLAYBTNWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::JHKMHIGAGLI* OGMPOGIHBIK()
		{
			return ((::JHKMHIGAGLI*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERASLOWPLAYBTNWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
