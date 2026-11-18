#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AIELNEHIPKH;
class GLEINMCDBFC;
class ILHILFJNIFH;
class LGINJIKKBJA;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define MOLEMOLE_UIPHOTOWALLITEMWIDGETCONTROLLER_CLEARPRESSED_OFFSET UNITYSDK_OFFSET(0x16767F70)
#define MOLEMOLE_UIPHOTOWALLITEMWIDGETCONTROLLER_GETBUTTON_OFFSET UNITYSDK_OFFSET(0x16767F10)
#define MOLEMOLE_UIPHOTOWALLITEMWIDGETCONTROLLER_JCDMDBBALNL_OFFSET UNITYSDK_OFFSET(0x167685F0)
#define MOLEMOLE_UIPHOTOWALLITEMWIDGETCONTROLLER_JOMGJPEFNGP_OFFSET UNITYSDK_OFFSET(0x16768380)
#define MOLEMOLE_UIPHOTOWALLITEMWIDGETCONTROLLER_LDLPPCFDCNJ_OFFSET UNITYSDK_OFFSET(0x16768670)
#define MOLEMOLE_UIPHOTOWALLITEMWIDGETCONTROLLER_LKILNAIKBPK_OFFSET UNITYSDK_OFFSET(0x167686C0)
#define MOLEMOLE_UIPHOTOWALLITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16766E50)
#define MOLEMOLE_UIPHOTOWALLITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x16767170)
#define MOLEMOLE_UIPHOTOWALLITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16766EE0)
#define MOLEMOLE_UIPHOTOWALLITEMWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16766B80)
#define MOLEMOLE_UIPHOTOWALLITEMWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16766DE0)
#define MOLEMOLE_UIPHOTOWALLITEMWIDGETCONTROLLER_PROCESSUIAVATAR_OFFSET UNITYSDK_OFFSET(0x16767E50)
#define MOLEMOLE_UIPHOTOWALLITEMWIDGETCONTROLLER_SETONDRAGFUNC_OFFSET UNITYSDK_OFFSET(0x16767EA0)
#define MOLEMOLE_UIPHOTOWALLITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16768090)
#define MOLEMOLE_UIPHOTOWALLITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x167680A0)
#define MOLEMOLE_UIPHOTOWALLITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x16768130)
#define MOLEMOLE_UIPHOTOWALLITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x167681D0)
#define MOLEMOLE_UIPHOTOWALLITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16768260)
#define MOLEMOLE_UIPHOTOWALLITEMWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x167682F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIPhotoWallItemWidgetController_TypeDefinitionIndex = 91840;

	class UIPhotoWallItemWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::ILHILFJNIFH* _view; // 0x2F8
		::System::Action_2<::System::Int32, ::UnityEngine::Vector3>* PAMBFFMEHAG; // 0x300
		::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* HEBMMGECNMA; // 0x308
		::System::Action* EAHGEJBGIKB; // 0x310
		::UnityEngine::Vector2 GAKAACPOMEO; // 0x318
		::System::Boolean MIENEHBEAPF; // 0x320
		::System::Byte _padding0[0x7];
		::GLEINMCDBFC* DGKDJINBGHJ; // 0x328
		::AIELNEHIPKH* DAAAEJDBNFI; // 0x330

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLITEMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLITEMWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLITEMWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void ProcessUIAvatar(::System::Int32 avatarConfig, ::System::Int32 showTypeIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLITEMWIDGETCONTROLLER_PROCESSUIAVATAR_OFFSET))(this, avatarConfig, showTypeIndex);
		}

		::System::Void SetOnDragFunc(::System::Action_2<::System::Int32, ::UnityEngine::Vector3>* action, ::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* onDragInScroll, ::System::Action* onEndDrag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int32, ::UnityEngine::Vector3>*, ::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLITEMWIDGETCONTROLLER_SETONDRAGFUNC_OFFSET))(this, action, onDragInScroll, onEndDrag);
		}

		::LGINJIKKBJA* GetButton()
		{
			return ((::LGINJIKKBJA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLITEMWIDGETCONTROLLER_GETBUTTON_OFFSET))(this);
		}

		::System::Void ClearPressed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLITEMWIDGETCONTROLLER_CLEARPRESSED_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLITEMWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void JOMGJPEFNGP(::UnityEngine::EventSystems::PointerEventData* NLKGNMKCCBK)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLITEMWIDGETCONTROLLER_JOMGJPEFNGP_OFFSET))(this, NLKGNMKCCBK);
		}

		::System::Void JCDMDBBALNL(::UnityEngine::EventSystems::PointerEventData* NLKGNMKCCBK)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLITEMWIDGETCONTROLLER_JCDMDBBALNL_OFFSET))(this, NLKGNMKCCBK);
		}

		::System::Void LDLPPCFDCNJ(::UnityEngine::EventSystems::PointerEventData* NLKGNMKCCBK)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLITEMWIDGETCONTROLLER_LDLPPCFDCNJ_OFFSET))(this, NLKGNMKCCBK);
		}

		::System::Void LKILNAIKBPK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLITEMWIDGETCONTROLLER_LKILNAIKBPK_OFFSET))(this);
		}
	};
}
