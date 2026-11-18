#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/BFOPAEHFPMM.h"

class AEEEIEEIEDG;
class JFMJAABMIEI;
class LAIJAAGMILC;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIItemIconBtnSmallWidgetController; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER_ANCOBKNDOFI_OFFSET UNITYSDK_OFFSET(0x19919420)
#define MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER_BCIOLJEBCFH_OFFSET UNITYSDK_OFFSET(0x19919E80)
#define MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x199177B0)
#define MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER_JFFJLHAJKCO_OFFSET UNITYSDK_OFFSET(0x199193D0)
#define MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER_MKFNCCJGIME_OFFSET UNITYSDK_OFFSET(0x19919E30)
#define MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER_OLJBHCBCFFD_OFFSET UNITYSDK_OFFSET(0x19917BF0)
#define MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19918F00)
#define MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19918F90)
#define MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x199177C0)
#define MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x199179B0)
#define MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER_PDKCHDBODJB_OFFSET UNITYSDK_OFFSET(0x199181D0)
#define MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER_PFEKBNAJMHE_OFFSET UNITYSDK_OFFSET(0x19919C40)
#define MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER_PMMONKIBHKK_OFFSET UNITYSDK_OFFSET(0x19919320)
#define MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x19919190)
#define MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19919180)
#define MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x199191E0)
#define MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19919270)
#define MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19919280)
#define MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19919290)

namespace MoleMole
{
	inline static constexpr unsigned int UIArcadeAchievementPopWindowController_TypeDefinitionIndex = 81026;

	class UIArcadeAchievementPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		static ::System::String** StaticGet_PBLELFOIPBD()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIArcadeAchievementPopWindowController_TypeDefinitionIndex)->GetStaticField(0x4D900);
		}
		static ::System::String** StaticGet_EGFDKMKMMLM()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIArcadeAchievementPopWindowController_TypeDefinitionIndex)->GetStaticField(0x4D908);
		}
		::JFMJAABMIEI* _view; // 0x320
		::System::Int32 NLEAIICAEAP; // 0x328
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::LAIJAAGMILC*>* HCMFLMMGKBP; // 0x330
		::System::Int32 FMOEHDCBNNG; // 0x338
		::System::Byte _padding1[0x4];
		::AEEEIEEIEDG* IGFGIPHIEPJ; // 0x340
		::System::Collections::Generic::List_1<::System::Int32>* HAEDJPCFFIN; // 0x348
		::MoleMole::UIItemIconBtnSmallWidgetController* DBOHGBLELGM; // 0x350
		::System::Int32 EJICBFEEIED; // 0x358

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER__CCTOR_OFFSET))();
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::MoleMole::ScrollViewItemWidgetController* PMMONKIBHKK(::System::Func_1<::MoleMole::UIControlReference*>* MNDIBLLFAJI)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER_PMMONKIBHKK_OFFSET))(this, MNDIBLLFAJI);
		}

		::System::Void JFFJLHAJKCO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER_JFFJLHAJKCO_OFFSET))(this);
		}

		::System::Void PDKCHDBODJB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER_PDKCHDBODJB_OFFSET))(this);
		}

		::System::Void ANCOBKNDOFI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER_ANCOBKNDOFI_OFFSET))(this);
		}

		::System::Void PFEKBNAJMHE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER_PFEKBNAJMHE_OFFSET))(this);
		}

		::System::Void MKFNCCJGIME(::System::EventArgs* KOIBHLHLMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER_MKFNCCJGIME_OFFSET))(this, KOIBHLHLMFC);
		}

		::Il2CppArray<::BFOPAEHFPMM>* OLJBHCBCFFD()
		{
			return ((::Il2CppArray<::BFOPAEHFPMM>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER_OLJBHCBCFFD_OFFSET))(this);
		}

		::System::Void BCIOLJEBCFH(::System::Int32 EOGLMAEPALE)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER_BCIOLJEBCFH_OFFSET))(this, EOGLMAEPALE);
		}
	};
}
