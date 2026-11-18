#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class ACFAJOAJEJN;
class BFHAALDDHFF;
class FGCOIBFFCHB;
class LBFGDFFAPEK;
class LHKMKCIPOLD;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIFriendChatCommonInfoUIWidgetController; }
namespace MoleMole { class UIFriendChatCommonTopUIWidgetController; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_UICHATSHAREINTERKNOTWIDGETCONTROLLER_BHCNMKAFFNI_OFFSET UNITYSDK_OFFSET(0x19199BF0)
#define MOLEMOLE_UICHATSHAREINTERKNOTWIDGETCONTROLLER_DNIDCLMMEKJ_OFFSET UNITYSDK_OFFSET(0x1919A600)
#define MOLEMOLE_UICHATSHAREINTERKNOTWIDGETCONTROLLER_DPGEJCNCILE_OFFSET UNITYSDK_OFFSET(0x1919A3E0)
#define MOLEMOLE_UICHATSHAREINTERKNOTWIDGETCONTROLLER_IOOLJOCBHAG_OFFSET UNITYSDK_OFFSET(0x1919AE50)
#define MOLEMOLE_UICHATSHAREINTERKNOTWIDGETCONTROLLER_JHODLGFHBLI_OFFSET UNITYSDK_OFFSET(0x1919A2C0)
#define MOLEMOLE_UICHATSHAREINTERKNOTWIDGETCONTROLLER_MCIOFINIAFG_OFFSET UNITYSDK_OFFSET(0x1919A740)
#define MOLEMOLE_UICHATSHAREINTERKNOTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x191999E0)
#define MOLEMOLE_UICHATSHAREINTERKNOTWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x19199AF0)
#define MOLEMOLE_UICHATSHAREINTERKNOTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19199A70)
#define MOLEMOLE_UICHATSHAREINTERKNOTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19199880)
#define MOLEMOLE_UICHATSHAREINTERKNOTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1919A060)
#define MOLEMOLE_UICHATSHAREINTERKNOTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1919A070)
#define MOLEMOLE_UICHATSHAREINTERKNOTWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1919A100)
#define MOLEMOLE_UICHATSHAREINTERKNOTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1919A1A0)
#define MOLEMOLE_UICHATSHAREINTERKNOTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1919A230)

namespace MoleMole
{
	inline static constexpr unsigned int UIChatShareInterknotWidgetController_TypeDefinitionIndex = 80337;

	class UIChatShareInterknotWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::ACFAJOAJEJN* _view; // 0x2F8
		::MoleMole::UIFriendChatCommonInfoUIWidgetController* DOCNEACJJFG; // 0x300
		::MoleMole::UIFriendChatCommonTopUIWidgetController* DGJLAOKFBCJ; // 0x308
		::BFHAALDDHFF* BEMLBCKEAHH; // 0x310
		::LHKMKCIPOLD* EFFAONJBCOG; // 0x318
		::System::Boolean KGBCEIHCEFL; // 0x320

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATSHAREINTERKNOTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATSHAREINTERKNOTWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATSHAREINTERKNOTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATSHAREINTERKNOTWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATSHAREINTERKNOTWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATSHAREINTERKNOTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATSHAREINTERKNOTWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATSHAREINTERKNOTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATSHAREINTERKNOTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void JHODLGFHBLI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATSHAREINTERKNOTWIDGETCONTROLLER_JHODLGFHBLI_OFFSET))(this);
		}

		::System::String* DPGEJCNCILE(::System::UInt32 AMCNCFDFMEM)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATSHAREINTERKNOTWIDGETCONTROLLER_DPGEJCNCILE_OFFSET))(this, AMCNCFDFMEM);
		}

		::System::Void DNIDCLMMEKJ(::System::EventArgs* KOIBHLHLMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATSHAREINTERKNOTWIDGETCONTROLLER_DNIDCLMMEKJ_OFFSET))(this, KOIBHLHLMFC);
		}

		::System::Void BHCNMKAFFNI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATSHAREINTERKNOTWIDGETCONTROLLER_BHCNMKAFFNI_OFFSET))(this);
		}

		::System::String* IOOLJOCBHAG()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATSHAREINTERKNOTWIDGETCONTROLLER_IOOLJOCBHAG_OFFSET))(this);
		}

		::System::Void MCIOFINIAFG(::FGCOIBFFCHB* CGJEBPGPIHO, ::FGCOIBFFCHB* OOGLHLBACBD, ::UnityEngine::UI::Extension::UILocalizationText* NKAOOIDMKMG, ::FGCOIBFFCHB* AIBFCDHCMLO, ::UnityEngine::GameObject* JKOOCEDNHDO, ::UnityEngine::UI::Extension::UILocalizationText* KCABHGJADAP, ::UnityEngine::UI::Extension::UILocalizationText* NMBMLCEHCIE, ::UnityEngine::UI::Extension::UILocalizationText* HIAIKHDFCLN, ::UnityEngine::UI::Extension::UILocalizationText* JJGKJINAHPO, ::LBFGDFFAPEK* LJDPJFEBGPK)
		{
			return ((::System::Void(*)(::PVOID, ::FGCOIBFFCHB*, ::FGCOIBFFCHB*, ::UnityEngine::UI::Extension::UILocalizationText*, ::FGCOIBFFCHB*, ::UnityEngine::GameObject*, ::UnityEngine::UI::Extension::UILocalizationText*, ::UnityEngine::UI::Extension::UILocalizationText*, ::UnityEngine::UI::Extension::UILocalizationText*, ::UnityEngine::UI::Extension::UILocalizationText*, ::LBFGDFFAPEK*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATSHAREINTERKNOTWIDGETCONTROLLER_MCIOFINIAFG_OFFSET))(this, CGJEBPGPIHO, OOGLHLBACBD, NKAOOIDMKMG, AIBFCDHCMLO, JKOOCEDNHDO, KCABHGJADAP, NMBMLCEHCIE, HIAIKHDFCLN, JJGKJINAHPO, LJDPJFEBGPK);
		}
	};
}
