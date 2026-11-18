#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class JIKIFJDBOED;
namespace MoleMole { class UIControlReference; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_UIGENERALHEADINFOWIDGETCONTROLLER_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x19C2AA10)
#define MOLEMOLE_UIGENERALHEADINFOWIDGETCONTROLLER_KKMCFMEIGHB_OFFSET UNITYSDK_OFFSET(0x19C2A780)
#define MOLEMOLE_UIGENERALHEADINFOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19C2A570)
#define MOLEMOLE_UIGENERALHEADINFOWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19C2A600)
#define MOLEMOLE_UIGENERALHEADINFOWIDGETCONTROLLER_SETDATA_OFFSET UNITYSDK_OFFSET(0x19C2A680)
#define MOLEMOLE_UIGENERALHEADINFOWIDGETCONTROLLER_SETOVERRIDENAME_OFFSET UNITYSDK_OFFSET(0x19C2AB90)
#define MOLEMOLE_UIGENERALHEADINFOWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x19C2ABF0)
#define MOLEMOLE_UIGENERALHEADINFOWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19C2ABE0)
#define MOLEMOLE_UIGENERALHEADINFOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19C2ACF0)
#define MOLEMOLE_UIGENERALHEADINFOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19C2AD80)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralHeadInfoWidgetController_TypeDefinitionIndex = 84735;

	class UIGeneralHeadInfoWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		static ::Il2CppArray<::Foundation::AssetPath>** StaticGet_EXPRESSION_ICON_PATH()
		{
			return (::Il2CppArray<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralHeadInfoWidgetController_TypeDefinitionIndex)->GetStaticField(0x4F9C0);
		}
		::JIKIFJDBOED* _view; // 0x2F8
		::UnityEngine::UI::Extension::UILocalizationText* JMMIHIGAIDL; // 0x300

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALHEADINFOWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALHEADINFOWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALHEADINFOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALHEADINFOWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALHEADINFOWIDGETCONTROLLER_SETDATA_OFFSET))(this);
		}

		::System::Void SetOverrideName(::UnityEngine::UI::Extension::UILocalizationText* name)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALHEADINFOWIDGETCONTROLLER_SETOVERRIDENAME_OFFSET))(this, name);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALHEADINFOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALHEADINFOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean KKMCFMEIGHB(::System::Int32 IFGMFALNKOH, ::System::Int16 JKBLDFBGBPK)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int16))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALHEADINFOWIDGETCONTROLLER_KKMCFMEIGHB_OFFSET))(this, IFGMFALNKOH, JKBLDFBGBPK);
		}

		::UnityEngine::UI::Extension::UILocalizationText* DECMGICKDLH()
		{
			return ((::UnityEngine::UI::Extension::UILocalizationText*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALHEADINFOWIDGETCONTROLLER_DECMGICKDLH_OFFSET))(this);
		}
	};
}
