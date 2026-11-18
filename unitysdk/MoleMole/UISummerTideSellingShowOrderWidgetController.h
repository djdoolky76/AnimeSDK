#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class CFFJJHDKOPK;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UISUMMERTIDESELLINGSHOWORDERWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x1718B460)
#define MOLEMOLE_UISUMMERTIDESELLINGSHOWORDERWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1718B200)
#define MOLEMOLE_UISUMMERTIDESELLINGSHOWORDERWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1718B2A0)
#define MOLEMOLE_UISUMMERTIDESELLINGSHOWORDERWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1718B4D0)
#define MOLEMOLE_UISUMMERTIDESELLINGSHOWORDERWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1718B530)
#define MOLEMOLE_UISUMMERTIDESELLINGSHOWORDERWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1718B5D0)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerTideSellingShowOrderWidgetController_TypeDefinitionIndex = 68264;

	class UISummerTideSellingShowOrderWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDESELLINGSHOWORDERWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDESELLINGSHOWORDERWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDESELLINGSHOWORDERWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDESELLINGSHOWORDERWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDESELLINGSHOWORDERWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::CFFJJHDKOPK* OGMPOGIHBIK()
		{
			return ((::CFFJJHDKOPK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDESELLINGSHOWORDERWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
