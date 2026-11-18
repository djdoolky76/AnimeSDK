#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class ADAJKAICKFC;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIFILTERBAGWIDGETCONTROLLER_GET_ITEMINFOROOT_OFFSET UNITYSDK_OFFSET(0x1985E2D0)
#define MOLEMOLE_UIFILTERBAGWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x1985E530)
#define MOLEMOLE_UIFILTERBAGWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1985E5A0)
#define MOLEMOLE_UIFILTERBAGWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1985E640)
#define MOLEMOLE_UIFILTERBAGWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1985E800)
#define MOLEMOLE_UIFILTERBAGWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1985E860)
#define MOLEMOLE_UIFILTERBAGWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1985E900)

namespace MoleMole
{
	inline static constexpr unsigned int UIFilterBagWidgetController_TypeDefinitionIndex = 47206;

	class UIFilterBagWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFILTERBAGWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_ItemInfoRoot()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFILTERBAGWIDGETCONTROLLER_GET_ITEMINFOROOT_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFILTERBAGWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFILTERBAGWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFILTERBAGWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFILTERBAGWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::ADAJKAICKFC* OGMPOGIHBIK()
		{
			return ((::ADAJKAICKFC*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFILTERBAGWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
