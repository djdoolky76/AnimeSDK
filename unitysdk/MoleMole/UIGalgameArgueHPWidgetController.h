#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class BDIKEHFOFOO;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIGALGAMEARGUEHPWIDGETCONTROLLER_DGBDJBBPIBJ_OFFSET UNITYSDK_OFFSET(0x1B0011C0)
#define MOLEMOLE_UIGALGAMEARGUEHPWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x1B001150)
#define MOLEMOLE_UIGALGAMEARGUEHPWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1B000EE0)
#define MOLEMOLE_UIGALGAMEARGUEHPWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1B000F80)
#define MOLEMOLE_UIGALGAMEARGUEHPWIDGETCONTROLLER_SETHPAVAILABLE_OFFSET UNITYSDK_OFFSET(0x1B001320)
#define MOLEMOLE_UIGALGAMEARGUEHPWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0015F0)
#define MOLEMOLE_UIGALGAMEARGUEHPWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1B001650)
#define MOLEMOLE_UIGALGAMEARGUEHPWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1B0016F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgameArgueHPWidgetController_TypeDefinitionIndex = 38525;

	class UIGalgameArgueHPWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEARGUEHPWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEARGUEHPWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEARGUEHPWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void SetHPAvailable(::System::Boolean isAvailable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEARGUEHPWIDGETCONTROLLER_SETHPAVAILABLE_OFFSET))(this, isAvailable);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEARGUEHPWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEARGUEHPWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void DGBDJBBPIBJ(::System::Boolean BEEGEHNBFLA)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEARGUEHPWIDGETCONTROLLER_DGBDJBBPIBJ_OFFSET))(this, BEEGEHNBFLA);
		}

		::BDIKEHFOFOO* OGMPOGIHBIK()
		{
			return ((::BDIKEHFOFOO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEARGUEHPWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
