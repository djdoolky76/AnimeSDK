#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class NPPBOHAHOGI;
namespace MoleMole { class UIControlReference; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIINTERKNOTENTRUSTTIPSWIDGETCONTROLLER_ISON_OFFSET UNITYSDK_OFFSET(0x175F5A40)
#define MOLEMOLE_UIINTERKNOTENTRUSTTIPSWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x175F5B60)
#define MOLEMOLE_UIINTERKNOTENTRUSTTIPSWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x175F5930)
#define MOLEMOLE_UIINTERKNOTENTRUSTTIPSWIDGETCONTROLLER_SETCALLBACK_OFFSET UNITYSDK_OFFSET(0x175F59F0)
#define MOLEMOLE_UIINTERKNOTENTRUSTTIPSWIDGETCONTROLLER_SETISON_OFFSET UNITYSDK_OFFSET(0x175F5BD0)
#define MOLEMOLE_UIINTERKNOTENTRUSTTIPSWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x175F5C80)
#define MOLEMOLE_UIINTERKNOTENTRUSTTIPSWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x175F5CE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotEntrustTipsWidgetController_TypeDefinitionIndex = 75109;

	class UIInterKnotEntrustTipsWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Action_1<::System::Boolean>* callback; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTENTRUSTTIPSWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTENTRUSTTIPSWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void SetCallback(::System::Action_1<::System::Boolean>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTENTRUSTTIPSWIDGETCONTROLLER_SETCALLBACK_OFFSET))(this, callback);
		}

		::System::Boolean IsOn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTENTRUSTTIPSWIDGETCONTROLLER_ISON_OFFSET))(this);
		}

		::System::Void SetIsOn(::System::Boolean isOn, ::System::Boolean triggerCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTENTRUSTTIPSWIDGETCONTROLLER_SETISON_OFFSET))(this, isOn, triggerCallback);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTENTRUSTTIPSWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::NPPBOHAHOGI* OGMPOGIHBIK()
		{
			return ((::NPPBOHAHOGI*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTENTRUSTTIPSWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
