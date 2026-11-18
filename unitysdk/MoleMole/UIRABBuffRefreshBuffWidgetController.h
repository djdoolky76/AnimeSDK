#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class EMAOJBKLFLL;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIRABBUFFREFRESHBUFFWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x16778440)
#define MOLEMOLE_UIRABBUFFREFRESHBUFFWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x167781E0)
#define MOLEMOLE_UIRABBUFFREFRESHBUFFWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16778280)
#define MOLEMOLE_UIRABBUFFREFRESHBUFFWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x167784B0)
#define MOLEMOLE_UIRABBUFFREFRESHBUFFWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x16778510)
#define MOLEMOLE_UIRABBUFFREFRESHBUFFWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x167785B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABBuffRefreshBuffWidgetController_TypeDefinitionIndex = 92590;

	class UIRABBuffRefreshBuffWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBUFFREFRESHBUFFWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBUFFREFRESHBUFFWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBUFFREFRESHBUFFWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBUFFREFRESHBUFFWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBUFFREFRESHBUFFWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::EMAOJBKLFLL* OGMPOGIHBIK()
		{
			return ((::EMAOJBKLFLL*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBUFFREFRESHBUFFWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
