#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JDOLCBBOINH.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/MoleMole/UIUrbanMapPageContext_SDefaultFocusInfo.h"

namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIUrbanMapPageContext; }
namespace MoleMole { class UIUrbanMapPointWidgetContext; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI::Extension { class UIImgEventTrigger_ScrollCallback; }

#define MOLEMOLE_UIURBANMAP3DMODELCONTEXT_GET_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x13BCC020)
#define MOLEMOLE_UIURBANMAP3DMODELCONTEXT_GET_ONDRAG_OFFSET UNITYSDK_OFFSET(0x13BCC040)
#define MOLEMOLE_UIURBANMAP3DMODELCONTEXT_GET_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x13BCC060)
#define MOLEMOLE_UIURBANMAP3DMODELCONTEXT_GET_ONSCROLL_OFFSET UNITYSDK_OFFSET(0x13BCC000)
#define MOLEMOLE_UIURBANMAP3DMODELCONTEXT_SET_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x13BCC030)
#define MOLEMOLE_UIURBANMAP3DMODELCONTEXT_SET_ONDRAG_OFFSET UNITYSDK_OFFSET(0x13BCC050)
#define MOLEMOLE_UIURBANMAP3DMODELCONTEXT_SET_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x13BCC070)
#define MOLEMOLE_UIURBANMAP3DMODELCONTEXT_SET_ONSCROLL_OFFSET UNITYSDK_OFFSET(0x13BCC010)
#define MOLEMOLE_UIURBANMAP3DMODELCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x13BCC080)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMap3DModelContext_TypeDefinitionIndex = 39459;

	class UIUrbanMap3DModelContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::UnityEngine::RectTransform* PanelRoot; // 0x28
		::UnityEngine::RectTransform* OutScreenRootBig; // 0x30
		::System::String* TeleportAudio; // 0x38
		::UnityEngine::UI::Extension::UIImgEventTrigger_ScrollCallback* _OnScroll_k__BackingField; // 0x40
		::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* _OnEndDrag_k__BackingField; // 0x48
		::MoleMole::UIUrbanMapPageContext_SDefaultFocusInfo DefaultFocusInfo; // 0x50
		::UnityEngine::RectTransform* OutScreenRoot; // 0x90
		::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* _OnBeginDrag_k__BackingField; // 0x98
		::UnityEngine::RectTransform* Icon2DRoot; // 0xA0
		::System::Action_1<::UnityEngine::RenderTexture*>* OnCreateRt; // 0xA8
		::MoleMole::UIBaseController* ParentUI; // 0xB0
		::System::Action* AfterReqGroupState; // 0xB8
		::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* _OnDrag_k__BackingField; // 0xC0
		::System::Func_2<::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapPointWidgetContext*>*, ::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapPointWidgetContext*>*>* OnFilter; // 0xC8
		::MoleMole::UIUrbanMapPageContext* ParentContext; // 0xD0
		::JDOLCBBOINH SectionOrFloor; // 0xD8
		::System::Int32 MapAreaId; // 0xE0
		::System::Boolean AsyncLoadMode; // 0xE4
		::System::Boolean AutoFocusTrackQuestAnim; // 0xE5

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAP3DMODELCONTEXT__CTOR_OFFSET))(this);
		}

		::UnityEngine::UI::Extension::UIImgEventTrigger_ScrollCallback* get_OnScroll()
		{
			return ((::UnityEngine::UI::Extension::UIImgEventTrigger_ScrollCallback*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAP3DMODELCONTEXT_GET_ONSCROLL_OFFSET))(this);
		}

		::System::Void set_OnScroll(::UnityEngine::UI::Extension::UIImgEventTrigger_ScrollCallback* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UIImgEventTrigger_ScrollCallback*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAP3DMODELCONTEXT_SET_ONSCROLL_OFFSET))(this, value);
		}

		::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* get_OnBeginDrag()
		{
			return ((::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAP3DMODELCONTEXT_GET_ONBEGINDRAG_OFFSET))(this);
		}

		::System::Void set_OnBeginDrag(::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAP3DMODELCONTEXT_SET_ONBEGINDRAG_OFFSET))(this, value);
		}

		::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* get_OnDrag()
		{
			return ((::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAP3DMODELCONTEXT_GET_ONDRAG_OFFSET))(this);
		}

		::System::Void set_OnDrag(::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAP3DMODELCONTEXT_SET_ONDRAG_OFFSET))(this, value);
		}

		::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* get_OnEndDrag()
		{
			return ((::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAP3DMODELCONTEXT_GET_ONENDDRAG_OFFSET))(this);
		}

		::System::Void set_OnEndDrag(::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAP3DMODELCONTEXT_SET_ONENDDRAG_OFFSET))(this, value);
		}
	};
}
