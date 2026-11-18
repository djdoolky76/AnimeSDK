#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class LHODANGMMIE;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIGENERALROLESKINPACKNAMEPLATEWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x19C2E860)
#define MOLEMOLE_UIGENERALROLESKINPACKNAMEPLATEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x19C2E600)
#define MOLEMOLE_UIGENERALROLESKINPACKNAMEPLATEWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x19C2E6A0)
#define MOLEMOLE_UIGENERALROLESKINPACKNAMEPLATEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19C2E8D0)
#define MOLEMOLE_UIGENERALROLESKINPACKNAMEPLATEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x19C2E930)
#define MOLEMOLE_UIGENERALROLESKINPACKNAMEPLATEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x19C2E9D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralRoleSkinPackNameplateWidgetController_TypeDefinitionIndex = 87773;

	class UIGeneralRoleSkinPackNameplateWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALROLESKINPACKNAMEPLATEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALROLESKINPACKNAMEPLATEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALROLESKINPACKNAMEPLATEWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALROLESKINPACKNAMEPLATEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALROLESKINPACKNAMEPLATEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::LHODANGMMIE* OGMPOGIHBIK()
		{
			return ((::LHODANGMMIE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALROLESKINPACKNAMEPLATEWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
