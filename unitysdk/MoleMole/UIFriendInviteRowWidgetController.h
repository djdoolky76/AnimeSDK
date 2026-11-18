#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class AJOGMNHNPPO;
class FBHPDPBIGPK;
class GNKKDGGFNBO;
namespace MoleMole { class UIControlReference; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_UIFRIENDINVITEROWWIDGETCONTROLLER_BBOMPEENOJB_OFFSET UNITYSDK_OFFSET(0x184C3FE0)
#define MOLEMOLE_UIFRIENDINVITEROWWIDGETCONTROLLER_IMDJIBJJLEM_OFFSET UNITYSDK_OFFSET(0x184C3CC0)
#define MOLEMOLE_UIFRIENDINVITEROWWIDGETCONTROLLER_KCMHKLOHGEI_OFFSET UNITYSDK_OFFSET(0x184C34B0)
#define MOLEMOLE_UIFRIENDINVITEROWWIDGETCONTROLLER_LEEIIKCDLJE_OFFSET UNITYSDK_OFFSET(0x184C3850)
#define MOLEMOLE_UIFRIENDINVITEROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x184C28C0)
#define MOLEMOLE_UIFRIENDINVITEROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x184C29D0)
#define MOLEMOLE_UIFRIENDINVITEROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x184C2950)
#define MOLEMOLE_UIFRIENDINVITEROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x184C2800)
#define MOLEMOLE_UIFRIENDINVITEROWWIDGETCONTROLLER_OPKPKCIPEGO_OFFSET UNITYSDK_OFFSET(0x184C3D60)
#define MOLEMOLE_UIFRIENDINVITEROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x184C3A60)
#define MOLEMOLE_UIFRIENDINVITEROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x184C3A70)
#define MOLEMOLE_UIFRIENDINVITEROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x184C3B00)
#define MOLEMOLE_UIFRIENDINVITEROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x184C3BA0)
#define MOLEMOLE_UIFRIENDINVITEROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x184C3C30)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendInviteRowWidgetController_TypeDefinitionIndex = 62809;

	class UIFriendInviteRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::AJOGMNHNPPO* _view; // 0x2F8
		::GNKKDGGFNBO* EJBHEDMDLKE; // 0x300
		::FBHPDPBIGPK* GDCLMGGIEGF; // 0x308
		::System::Boolean CMHBOEIKBLG; // 0x310
		::System::Boolean AOOBMBKAMII; // 0x311
		::System::Boolean KOMIOAOLOKJ; // 0x312
		::System::Byte _padding0[0x5];
		::UnityEngine::UI::Extension::UILocalizationText* APGMDFGJFAH; // 0x318

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDINVITEROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDINVITEROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDINVITEROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDINVITEROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDINVITEROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDINVITEROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDINVITEROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDINVITEROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDINVITEROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void IMDJIBJJLEM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDINVITEROWWIDGETCONTROLLER_IMDJIBJJLEM_OFFSET))(this);
		}

		::System::Void LEEIIKCDLJE(::System::Boolean JLHONNMFNHJ)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDINVITEROWWIDGETCONTROLLER_LEEIIKCDLJE_OFFSET))(this, JLHONNMFNHJ);
		}

		::System::Void OPKPKCIPEGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDINVITEROWWIDGETCONTROLLER_OPKPKCIPEGO_OFFSET))(this);
		}

		::System::Void KCMHKLOHGEI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDINVITEROWWIDGETCONTROLLER_KCMHKLOHGEI_OFFSET))(this);
		}

		::System::Void BBOMPEENOJB(::System::EventArgs* KOIBHLHLMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDINVITEROWWIDGETCONTROLLER_BBOMPEENOJB_OFFSET))(this, KOIBHLHLMFC);
		}
	};
}
