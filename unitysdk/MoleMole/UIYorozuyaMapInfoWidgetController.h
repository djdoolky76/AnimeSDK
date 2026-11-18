#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class NIFDJDIADMD;
class NKIOGCOBJLL;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }

#define MOLEMOLE_UIYOROZUYAMAPINFOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x12C08240)
#define MOLEMOLE_UIYOROZUYAMAPINFOWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x12C087F0)
#define MOLEMOLE_UIYOROZUYAMAPINFOWIDGETCONTROLLER_ONSELECT_OFFSET UNITYSDK_OFFSET(0x12C085B0)
#define MOLEMOLE_UIYOROZUYAMAPINFOWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x12C08770)
#define MOLEMOLE_UIYOROZUYAMAPINFOWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x12C080E0)
#define MOLEMOLE_UIYOROZUYAMAPINFOWIDGETCONTROLLER_PLAYFADEANI_OFFSET UNITYSDK_OFFSET(0x12C083C0)
#define MOLEMOLE_UIYOROZUYAMAPINFOWIDGETCONTROLLER_REFLESHVIEW_OFFSET UNITYSDK_OFFSET(0x12C082D0)
#define MOLEMOLE_UIYOROZUYAMAPINFOWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x12C088B0)
#define MOLEMOLE_UIYOROZUYAMAPINFOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x12C088C0)
#define MOLEMOLE_UIYOROZUYAMAPINFOWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x12C08950)
#define MOLEMOLE_UIYOROZUYAMAPINFOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x12C089F0)
#define MOLEMOLE_UIYOROZUYAMAPINFOWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x12C08A80)

namespace MoleMole
{
	inline static constexpr unsigned int UIYorozuyaMapInfoWidgetController_TypeDefinitionIndex = 66272;

	class UIYorozuyaMapInfoWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::NIFDJDIADMD* _view; // 0x2F8
		::NKIOGCOBJLL* CAAPNAPPFJK; // 0x300

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAMAPINFOWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAMAPINFOWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAMAPINFOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void RefleshView(::NKIOGCOBJLL* sceneCfg)
		{
			return ((::System::Void(*)(::PVOID, ::NKIOGCOBJLL*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAMAPINFOWIDGETCONTROLLER_REFLESHVIEW_OFFSET))(this, sceneCfg);
		}

		::System::Single PlayFadeAni(::System::Boolean isIn)
		{
			return ((::System::Single(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAMAPINFOWIDGETCONTROLLER_PLAYFADEANI_OFFSET))(this, isIn);
		}

		::System::Void OnSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAMAPINFOWIDGETCONTROLLER_ONSELECT_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAMAPINFOWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAMAPINFOWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAMAPINFOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAMAPINFOWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAMAPINFOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAMAPINFOWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
