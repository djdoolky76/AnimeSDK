#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class EKGAHGCJOAN;
class GCKHOGBDJHK;
class OLMIOCLOFDP;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIZenkovCollectProPointWidgetController_Context; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIZENKOVCOLLECTPROPOINTWIDGETCONTROLLER_ADD_ONCLICK_OFFSET UNITYSDK_OFFSET(0x18F68980)
#define MOLEMOLE_UIZENKOVCOLLECTPROPOINTWIDGETCONTROLLER_CLPOELHBPFH_OFFSET UNITYSDK_OFFSET(0x18F693E0)
#define MOLEMOLE_UIZENKOVCOLLECTPROPOINTWIDGETCONTROLLER_GET_BUTTONTRANSFORM_OFFSET UNITYSDK_OFFSET(0x18F68E40)
#define MOLEMOLE_UIZENKOVCOLLECTPROPOINTWIDGETCONTROLLER_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x18F68C50)
#define MOLEMOLE_UIZENKOVCOLLECTPROPOINTWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x18F68AB0)
#define MOLEMOLE_UIZENKOVCOLLECTPROPOINTWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18F68F60)
#define MOLEMOLE_UIZENKOVCOLLECTPROPOINTWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18F69000)
#define MOLEMOLE_UIZENKOVCOLLECTPROPOINTWIDGETCONTROLLER_REMOVE_ONCLICK_OFFSET UNITYSDK_OFFSET(0x18F68B20)
#define MOLEMOLE_UIZENKOVCOLLECTPROPOINTWIDGETCONTROLLER_UPDATEDATA_OFFSET UNITYSDK_OFFSET(0x18F690B0)
#define MOLEMOLE_UIZENKOVCOLLECTPROPOINTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18F69240)
#define MOLEMOLE_UIZENKOVCOLLECTPROPOINTWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18F692A0)
#define MOLEMOLE_UIZENKOVCOLLECTPROPOINTWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18F69340)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovCollectProPointWidgetController_TypeDefinitionIndex = 65410;

	class UIZenkovCollectProPointWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::MoleMole::UIZenkovCollectProPointWidgetController_Context* DAAAEJDBNFI; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTPROPOINTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void add_OnClick(::System::Action_1<::GCKHOGBDJHK*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::GCKHOGBDJHK*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTPROPOINTWIDGETCONTROLLER_ADD_ONCLICK_OFFSET))(this, value);
		}

		::System::Void remove_OnClick(::System::Action_1<::GCKHOGBDJHK*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::GCKHOGBDJHK*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTPROPOINTWIDGETCONTROLLER_REMOVE_ONCLICK_OFFSET))(this, value);
		}

		::System::Boolean IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTPROPOINTWIDGETCONTROLLER_ISUNLOCKED_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_ButtonTransform()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTPROPOINTWIDGETCONTROLLER_GET_BUTTONTRANSFORM_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTPROPOINTWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTPROPOINTWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void UpdateData(::MoleMole::UIZenkovCollectProPointWidgetController_Context* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIZenkovCollectProPointWidgetController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTPROPOINTWIDGETCONTROLLER_UPDATEDATA_OFFSET))(this, context);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTPROPOINTWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTPROPOINTWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::OLMIOCLOFDP* OGMPOGIHBIK()
		{
			return ((::OLMIOCLOFDP*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTPROPOINTWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}

		::EKGAHGCJOAN* CLPOELHBPFH()
		{
			return ((::EKGAHGCJOAN*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTPROPOINTWIDGETCONTROLLER_CLPOELHBPFH_OFFSET))(this);
		}
	};
}
