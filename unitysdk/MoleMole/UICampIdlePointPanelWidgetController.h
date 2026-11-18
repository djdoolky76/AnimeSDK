#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JNHGEEOLJKL.h"
#include "unitysdk/MIKOMFIBMBN.h"
#include "unitysdk/MoleMole/UICampIdlePointPanelWidgetController_InViewState.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/MonoUITableScrollV2_ScrollParams_SelectAlignType.h"
#include "unitysdk/UnityEngine/Vector2.h"

class EJHDAGNMLDJ;
class GCIMMDDIFBJ;
class LGINJIKKBJA;
class MonoScrollBarEx;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class UICampIdleNodeWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_BINDSCROLLBAR_OFFSET UNITYSDK_OFFSET(0x1966C240)
#define MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_GETNODEPREFABBYID_OFFSET UNITYSDK_OFFSET(0x1966CD00)
#define MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_GETVIEWSTATEOF_OFFSET UNITYSDK_OFFSET(0x1966C190)
#define MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_GET_CONTENTBTN_OFFSET UNITYSDK_OFFSET(0x1966C170)
#define MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_GET_DIALOGSPACEANIMATION_OFFSET UNITYSDK_OFFSET(0x1966C110)
#define MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_GET_DIALOGSPACE_OFFSET UNITYSDK_OFFSET(0x1966C130)
#define MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_GET_POINTPANEL_OFFSET UNITYSDK_OFFSET(0x1966C150)
#define MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_INITNODES_OFFSET UNITYSDK_OFFSET(0x1966C300)
#define MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1966D6A0)
#define MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1966D730)
#define MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1966C0B0)
#define MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1966D630)
#define MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_SCROLLTOID_OFFSET UNITYSDK_OFFSET(0x1966CF50)
#define MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_SETPLAYTYPE_OFFSET UNITYSDK_OFFSET(0x1966C2B0)
#define MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_TRYAVOIDOCCULUSION_OFFSET UNITYSDK_OFFSET(0x1966D2B0)
#define MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1966D7B0)
#define MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1966D810)
#define MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1966D8A0)
#define MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1966D930)
#define MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1966D9C0)

namespace MoleMole
{
	inline static constexpr unsigned int UICampIdlePointPanelWidgetController_TypeDefinitionIndex = 53051;

	class UICampIdlePointPanelWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::EJHDAGNMLDJ* _view; // 0x2C8
		::JNHGEEOLJKL COCCILOLPDN; // 0x2D0
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UICampIdleNodeWidgetController*>* m_ctrlDict; // 0x2D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::GCIMMDDIFBJ* get_DialogSpaceAnimation()
		{
			return ((::GCIMMDDIFBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_GET_DIALOGSPACEANIMATION_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_DialogSpace()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_GET_DIALOGSPACE_OFFSET))(this);
		}

		::MoleMole::MonoGamepadCustomList* get_PointPanel()
		{
			return ((::MoleMole::MonoGamepadCustomList*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_GET_POINTPANEL_OFFSET))(this);
		}

		::LGINJIKKBJA* get_ContentBtn()
		{
			return ((::LGINJIKKBJA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_GET_CONTENTBTN_OFFSET))(this);
		}

		::MoleMole::UICampIdlePointPanelWidgetController_InViewState GetViewStateOf(::UnityEngine::RectTransform* rectTransform)
		{
			return ((::MoleMole::UICampIdlePointPanelWidgetController_InViewState(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_GETVIEWSTATEOF_OFFSET))(this, rectTransform);
		}

		::System::Void BindScrollBar(::MonoScrollBarEx* bar)
		{
			return ((::System::Void(*)(::PVOID, ::MonoScrollBarEx*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_BINDSCROLLBAR_OFFSET))(this, bar);
		}

		::System::Void SetPlayType(::JNHGEEOLJKL playType)
		{
			return ((::System::Void(*)(::PVOID, ::JNHGEEOLJKL))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_SETPLAYTYPE_OFFSET))(this, playType);
		}

		::System::Void InitNodes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_INITNODES_OFFSET))(this);
		}

		::MIKOMFIBMBN GetNodePrefabByID(::System::Int32 id)
		{
			return ((::MIKOMFIBMBN(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_GETNODEPREFABBYID_OFFSET))(this, id);
		}

		::System::Void ScrollToID(::System::Int32 nodeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_SCROLLTOID_OFFSET))(this, nodeID);
		}

		::System::Void TryAvoidOcculusion(::System::Int32 nodeID, ::MonoUITableScrollV2_ScrollParams_SelectAlignType alignType, ::UnityEngine::Vector2 range)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MonoUITableScrollV2_ScrollParams_SelectAlignType, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_TRYAVOIDOCCULUSION_OFFSET))(this, nodeID, alignType, range);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
