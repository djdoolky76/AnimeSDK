#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/UnityEngine/Color.h"

class FIJNAPHBFLJ;
class LGINJIKKBJA;
class LNLBJLKIGGD;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIGENERALBTN03WIDGETCONTROLLER_BINDVIEWCALLBACK_OFFSET UNITYSDK_OFFSET(0x184A0C30)
#define MOLEMOLE_UIGENERALBTN03WIDGETCONTROLLER_GETCONTROLBTN_OFFSET UNITYSDK_OFFSET(0x184CA160)
#define MOLEMOLE_UIGENERALBTN03WIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x184C9C50)
#define MOLEMOLE_UIGENERALBTN03WIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x184C9CE0)
#define MOLEMOLE_UIGENERALBTN03WIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x184C9E30)
#define MOLEMOLE_UIGENERALBTN03WIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x184C9B80)
#define MOLEMOLE_UIGENERALBTN03WIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x184C9BE0)
#define MOLEMOLE_UIGENERALBTN03WIDGETCONTROLLER_SETICONCOLOR_OFFSET UNITYSDK_OFFSET(0x184C9FC0)
#define MOLEMOLE_UIGENERALBTN03WIDGETCONTROLLER_SETICONIMAGE_OFFSET UNITYSDK_OFFSET(0x184C9F40)
#define MOLEMOLE_UIGENERALBTN03WIDGETCONTROLLER_SETINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x184C9ED0)
#define MOLEMOLE_UIGENERALBTN03WIDGETCONTROLLER_UNBINDVIEWCALLBACK_OFFSET UNITYSDK_OFFSET(0x184CA090)
#define MOLEMOLE_UIGENERALBTN03WIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x184CA1C0)
#define MOLEMOLE_UIGENERALBTN03WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x184CA1D0)
#define MOLEMOLE_UIGENERALBTN03WIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x184CA260)
#define MOLEMOLE_UIGENERALBTN03WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x184CA300)
#define MOLEMOLE_UIGENERALBTN03WIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x184CA390)
#define MOLEMOLE_UIGENERALBTN03WIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x184CA420)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralBtn03WidgetController_TypeDefinitionIndex = 83281;

	class UIGeneralBtn03WidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::LNLBJLKIGGD* _view; // 0x2F8
		::FIJNAPHBFLJ* btnData; // 0x300

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBTN03WIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBTN03WIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBTN03WIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBTN03WIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBTN03WIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBTN03WIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetInteractable(::System::Boolean v)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBTN03WIDGETCONTROLLER_SETINTERACTABLE_OFFSET))(this, v);
		}

		::System::Void SetIconImage(::System::String* iconPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBTN03WIDGETCONTROLLER_SETICONIMAGE_OFFSET))(this, iconPath);
		}

		::System::Void SetIconColor(::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBTN03WIDGETCONTROLLER_SETICONCOLOR_OFFSET))(this, color);
		}

		::System::Void BindViewCallback(::UnityEngine::Events::UnityAction* callback)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBTN03WIDGETCONTROLLER_BINDVIEWCALLBACK_OFFSET))(this, callback);
		}

		::System::Void UnBindViewCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBTN03WIDGETCONTROLLER_UNBINDVIEWCALLBACK_OFFSET))(this);
		}

		::LGINJIKKBJA* GetControlBtn()
		{
			return ((::LGINJIKKBJA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBTN03WIDGETCONTROLLER_GETCONTROLBTN_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBTN03WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBTN03WIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBTN03WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBTN03WIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBTN03WIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
