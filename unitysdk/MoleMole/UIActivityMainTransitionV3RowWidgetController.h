#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class DNGJCCFHMPE;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralButtonController; }
namespace System { class String; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIACTIVITYMAINTRANSITIONV3ROWWIDGETCONTROLLER_BINDINFOBTNCLICKACTION_OFFSET UNITYSDK_OFFSET(0x1A3166A0)
#define MOLEMOLE_UIACTIVITYMAINTRANSITIONV3ROWWIDGETCONTROLLER_GETGENERALBTN_OFFSET UNITYSDK_OFFSET(0x1A3168F0)
#define MOLEMOLE_UIACTIVITYMAINTRANSITIONV3ROWWIDGETCONTROLLER_GETVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1A316600)
#define MOLEMOLE_UIACTIVITYMAINTRANSITIONV3ROWWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x1A316590)
#define MOLEMOLE_UIACTIVITYMAINTRANSITIONV3ROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1A316330)
#define MOLEMOLE_UIACTIVITYMAINTRANSITIONV3ROWWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1A3163D0)
#define MOLEMOLE_UIACTIVITYMAINTRANSITIONV3ROWWIDGETCONTROLLER_SETIMAGE_OFFSET UNITYSDK_OFFSET(0x1A316E90)
#define MOLEMOLE_UIACTIVITYMAINTRANSITIONV3ROWWIDGETCONTROLLER_SETINFOTEXTKEY_OFFSET UNITYSDK_OFFSET(0x1A316AC0)
#define MOLEMOLE_UIACTIVITYMAINTRANSITIONV3ROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A317080)
#define MOLEMOLE_UIACTIVITYMAINTRANSITIONV3ROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1A3170E0)
#define MOLEMOLE_UIACTIVITYMAINTRANSITIONV3ROWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1A317180)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityMainTransitionV3RowWidgetController_TypeDefinitionIndex = 87889;

	class UIActivityMainTransitionV3RowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYMAINTRANSITIONV3ROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYMAINTRANSITIONV3ROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYMAINTRANSITIONV3ROWWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::DNGJCCFHMPE* GetViewModel()
		{
			return ((::DNGJCCFHMPE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYMAINTRANSITIONV3ROWWIDGETCONTROLLER_GETVIEWMODEL_OFFSET))(this);
		}

		::System::Void BindInfoBtnClickAction(::UnityEngine::Events::UnityAction* clieckAction)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYMAINTRANSITIONV3ROWWIDGETCONTROLLER_BINDINFOBTNCLICKACTION_OFFSET))(this, clieckAction);
		}

		::MoleMole::UIGeneralButtonController* GetGeneralBtn()
		{
			return ((::MoleMole::UIGeneralButtonController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYMAINTRANSITIONV3ROWWIDGETCONTROLLER_GETGENERALBTN_OFFSET))(this);
		}

		::System::Void SetInfoTextKey(::System::String* titleKey, ::System::String* accessKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYMAINTRANSITIONV3ROWWIDGETCONTROLLER_SETINFOTEXTKEY_OFFSET))(this, titleKey, accessKey);
		}

		::System::Void SetImage(::System::String* iamgePath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYMAINTRANSITIONV3ROWWIDGETCONTROLLER_SETIMAGE_OFFSET))(this, iamgePath);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYMAINTRANSITIONV3ROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYMAINTRANSITIONV3ROWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::DNGJCCFHMPE* OGMPOGIHBIK()
		{
			return ((::DNGJCCFHMPE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYMAINTRANSITIONV3ROWWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
