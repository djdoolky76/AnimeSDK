#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/UnityEngine/Vector2.h"

class BKGGCONALFK;
class UIWidgetGroup;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIActivityCompRewardBtnGroupWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIRopeCraftsmanQuestPageController_ItemData; }
namespace MoleMole { class UIRopeCraftsmanQuestPageController_PanelData; }

#define MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER_BPIIFJKNDFC_OFFSET UNITYSDK_OFFSET(0x155F50F0)
#define MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x155F2BF0)
#define MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER_INITANDNPCREDSIGN_OFFSET UNITYSDK_OFFSET(0x155F4AA0)
#define MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER_ISCANSHOWENDDESC_OFFSET UNITYSDK_OFFSET(0x155F40A0)
#define MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER_NONMBNODFIG_OFFSET UNITYSDK_OFFSET(0x155F4210)
#define MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER_ONCLICKTASK_OFFSET UNITYSDK_OFFSET(0x155F38B0)
#define MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x155F2C00)
#define MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET UNITYSDK_OFFSET(0x155F3790)
#define MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER_ONINFOBTN_OFFSET UNITYSDK_OFFSET(0x155F4280)
#define MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x155F31A0)
#define MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x155F3570)
#define MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x155F3520)
#define MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x155F2EF0)
#define MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER_OPENPANEL_OFFSET UNITYSDK_OFFSET(0x155F4350)
#define MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER_PECHCHHKBLH_OFFSET UNITYSDK_OFFSET(0x155F35E0)
#define MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER_PEOEBOPNBKI_OFFSET UNITYSDK_OFFSET(0x155F52D0)
#define MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER_REFRESHPANEL_OFFSET UNITYSDK_OFFSET(0x155F2FE0)
#define MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x155F4DF0)
#define MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x155F4E00)
#define MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER___BASE_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET UNITYSDK_OFFSET(0x155F4E90)
#define MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x155F4F80)
#define MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x155F5040)
#define MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x155F5050)
#define MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x155F5060)

namespace MoleMole
{
	inline static constexpr unsigned int UIRopeCraftsmanQuestPageController_TypeDefinitionIndex = 67365;

	class UIRopeCraftsmanQuestPageController : public ::MoleMole::UIWindowController
	{
	public:
		::BKGGCONALFK* _view; // 0x320
		::MoleMole::UIRopeCraftsmanQuestPageController_PanelData* PFKGPHEFMFE; // 0x328
		::UIWidgetGroup* GDEJLELEPLO; // 0x330
		::MoleMole::UIRopeCraftsmanQuestPageController_ItemData* KODNHNEFKMB; // 0x338
		::MoleMole::UIActivityCompRewardBtnGroupWidgetController* LOCACFELIAB; // 0x340

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshPanel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER_REFRESHPANEL_OFFSET))(this);
		}

		::System::Int32 OnGamepadModuleTryOverrideNextSelectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 curIndex, ::System::Int32 nextIndex, ::MoleMole::InputActionEvent actionEvent, ::UnityEngine::Vector2 moveDir)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::System::Int32, ::MoleMole::InputActionEvent, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET))(this, gamepadModule, curIndex, nextIndex, actionEvent, moveDir);
		}

		::System::Void OnClickTask(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER_ONCLICKTASK_OFFSET))(this, index);
		}

		static ::System::Boolean IsCanShowEndDesc(::System::UInt32 id)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER_ISCANSHOWENDDESC_OFFSET))(id);
		}

		::System::Void OnInfoBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER_ONINFOBTN_OFFSET))(this);
		}

		static ::System::Void OpenPanel()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER_OPENPANEL_OFFSET))();
		}

		static ::System::Void InitAndNpcRedSign()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER_INITANDNPCREDSIGN_OFFSET))();
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Int32 __base_OnGamepadModuleTryOverrideNextSelectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::System::Int32 P2, ::MoleMole::InputActionEvent P3, ::UnityEngine::Vector2 P4)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::System::Int32, ::MoleMole::InputActionEvent, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER___BASE_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void NONMBNODFIG(::System::Boolean AHEAEIMIJJK)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER_NONMBNODFIG_OFFSET))(this, AHEAEIMIJJK);
		}

		::System::Void PECHCHHKBLH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER_PECHCHHKBLH_OFFSET))(this);
		}

		::System::Void BPIIFJKNDFC(::System::Boolean IFHLDCDEMHH)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER_BPIIFJKNDFC_OFFSET))(this, IFHLDCDEMHH);
		}

		::System::Void PEOEBOPNBKI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER_PEOEBOPNBKI_OFFSET))(this);
		}
	};
}
