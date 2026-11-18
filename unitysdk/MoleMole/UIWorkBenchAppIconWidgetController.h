#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/UnityEngine/Color.h"

class AOCEAGKKMPJ;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_UIWORKBENCHAPPICONWIDGETCONTROLLER_HBCOBEDCILD_OFFSET UNITYSDK_OFFSET(0x170B9140)
#define MOLEMOLE_UIWORKBENCHAPPICONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x170B8870)
#define MOLEMOLE_UIWORKBENCHAPPICONWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x170B8B00)
#define MOLEMOLE_UIWORKBENCHAPPICONWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x170B8900)
#define MOLEMOLE_UIWORKBENCHAPPICONWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x170B85E0)
#define MOLEMOLE_UIWORKBENCHAPPICONWIDGETCONTROLLER_PLAYCLICKANIM_OFFSET UNITYSDK_OFFSET(0x170B91E0)
#define MOLEMOLE_UIWORKBENCHAPPICONWIDGETCONTROLLER_PLAYFADEOUTANIMWHENCLICKOTHERICON_OFFSET UNITYSDK_OFFSET(0x170B9260)
#define MOLEMOLE_UIWORKBENCHAPPICONWIDGETCONTROLLER_PLAYRESETANIM_OFFSET UNITYSDK_OFFSET(0x170B92E0)
#define MOLEMOLE_UIWORKBENCHAPPICONWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x170B9370)
#define MOLEMOLE_UIWORKBENCHAPPICONWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x170B9360)
#define MOLEMOLE_UIWORKBENCHAPPICONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x170B9380)
#define MOLEMOLE_UIWORKBENCHAPPICONWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x170B9410)
#define MOLEMOLE_UIWORKBENCHAPPICONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x170B94B0)
#define MOLEMOLE_UIWORKBENCHAPPICONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x170B9540)

namespace MoleMole
{
	inline static constexpr unsigned int UIWorkBenchAppIconWidgetController_TypeDefinitionIndex = 61545;

	class UIWorkBenchAppIconWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		static ::UnityEngine::Material** StaticGet_HLFGANGNOND()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(UIWorkBenchAppIconWidgetController_TypeDefinitionIndex)->GetStaticField(0x35860);
		}
		static ::UnityEngine::Material** StaticGet_CEBKLKBKINB()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(UIWorkBenchAppIconWidgetController_TypeDefinitionIndex)->GetStaticField(0x35868);
		}
		static ::System::Int32* StaticGet_BIAGEMIDGAL()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIWorkBenchAppIconWidgetController_TypeDefinitionIndex)->GetStaticField(0xB470);
		}
		::AOCEAGKKMPJ* _view; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHAPPICONWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHAPPICONWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHAPPICONWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHAPPICONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHAPPICONWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHAPPICONWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void PlayClickAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHAPPICONWIDGETCONTROLLER_PLAYCLICKANIM_OFFSET))(this);
		}

		::System::Void PlayFadeOutAnimWhenClickOtherIcon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHAPPICONWIDGETCONTROLLER_PLAYFADEOUTANIMWHENCLICKOTHERICON_OFFSET))(this);
		}

		::System::Void PlayResetAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHAPPICONWIDGETCONTROLLER_PLAYRESETANIM_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHAPPICONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHAPPICONWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHAPPICONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHAPPICONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::UnityEngine::Color HBCOBEDCILD(::System::String* HKAPJDGFHLO)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHAPPICONWIDGETCONTROLLER_HBCOBEDCILD_OFFSET))(this, HKAPJDGFHLO);
		}
	};
}
