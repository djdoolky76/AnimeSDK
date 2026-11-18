#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/NAPScrollView/DataStruct/MoveContext.h"
#include "unitysdk/UnityEngine/Color.h"

class LHNEMDONPBN;
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIWorkBenchMainPageTransitionDialogPopWindowController; }
namespace MoleMole { class UIWorkbenchMainPageBigBtnWidgetController; }
namespace MoleMole { class UIWorkbenchMainPageSmallBtnWidgetController_Context; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER_CANOPENAPP_OFFSET UNITYSDK_OFFSET(0x164E5BF0)
#define MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER_EBDPBNHMKDK_OFFSET UNITYSDK_OFFSET(0x164E4F60)
#define MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER_EDDKAIKDEJD_OFFSET UNITYSDK_OFFSET(0x164E7780)
#define MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER_GETAPPBGCOLOR_OFFSET UNITYSDK_OFFSET(0x164E5AD0)
#define MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x164E4900)
#define MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER_JDGGDKDCGNB_OFFSET UNITYSDK_OFFSET(0x164E50D0)
#define MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER_JECBICJELML_OFFSET UNITYSDK_OFFSET(0x164E76C0)
#define MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER_KHEMECJOPJJ_OFFSET UNITYSDK_OFFSET(0x164E6CB0)
#define MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER_LHLLFJDCOOF_OFFSET UNITYSDK_OFFSET(0x164E4B60)
#define MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER_LHLLLKDOBCD_OFFSET UNITYSDK_OFFSET(0x164E69E0)
#define MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER_LMEAOBELFGP_OFFSET UNITYSDK_OFFSET(0x164E4A40)
#define MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER_MHOAJDJMHNB_1_OFFSET UNITYSDK_OFFSET(0x164E70B0)
#define MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER_MHOAJDJMHNB_OFFSET UNITYSDK_OFFSET(0x164E6F20)
#define MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x164E4910)
#define MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER_ONPOSTPAGESHOWED_OFFSET UNITYSDK_OFFSET(0x164E59D0)
#define MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x164E5950)
#define MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x164E5800)
#define MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x164E49A0)
#define MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x164E5790)
#define MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER_PJGAMONMMNI_OFFSET UNITYSDK_OFFSET(0x164E4C80)
#define MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER_TRYOPENAPP_OFFSET UNITYSDK_OFFSET(0x164E6170)
#define MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x164E6870)
#define MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x164E67D0)
#define MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x164E6880)
#define MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER___BASE_ONPOSTPAGESHOWED_OFFSET UNITYSDK_OFFSET(0x164E6910)
#define MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x164E6920)
#define MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x164E6930)
#define MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x164E6940)
#define MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x164E6950)

namespace MoleMole
{
	inline static constexpr unsigned int UIWorkBenchMainPageController_TypeDefinitionIndex = 85390;

	class UIWorkBenchMainPageController : public ::MoleMole::UIWindowController
	{
	public:
		static ::System::Int32* StaticGet_PFCDKPNCAMH()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIWorkBenchMainPageController_TypeDefinitionIndex)->GetStaticField(0x12AB0);
		}
		// static const ::System::Int32 TRUST_DEGREE_ID = 0x1; // 0x0
		// static const ::System::Int32 INFORMATION_ID = 0x2; // 0x0
		// static const ::System::Int32 ACTIVE_PROPS_ID = 0x3; // 0x0
		// static const ::System::Int32 INTER_KNOT_NOTE_ID = 0x4; // 0x0
		// static const ::System::Int32 MONSTER_CARD_ID = 0x5; // 0x0
		::LHNEMDONPBN* _view; // 0x320
		::MoleMole::UIWorkbenchMainPageSmallBtnWidgetController_Context* APAHLFJIMFN; // 0x328
		::System::Collections::Generic::List_1<::System::Object*>* CECDAEOLJFB; // 0x330
		::MoleMole::UIWorkBenchMainPageTransitionDialogPopWindowController* HLLOBKIEDNL; // 0x338
		::System::Int32 BDOANMFALBF; // 0x340
		::System::Byte _padding0[0x4];
		::MoleMole::UIWorkbenchMainPageBigBtnWidgetController* FLNEBMLKHOI; // 0x348

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER__CCTOR_OFFSET))();
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnPostPageShowed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER_ONPOSTPAGESHOWED_OFFSET))(this);
		}

		::UnityEngine::Color GetAppBgColor(::System::String* colorName)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER_GETAPPBGCOLOR_OFFSET))(this, colorName);
		}

		static ::System::Boolean CanOpenApp(::System::Int32 appID, ::System::Boolean showTips)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER_CANOPENAPP_OFFSET))(appID, showTips);
		}

		static ::System::Void TryOpenApp(::System::Int32 appID, ::MoleMole::UIControllerContextBase* context)
		{
			return ((::System::Void(*)(::System::Int32, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER_TRYOPENAPP_OFFSET))(appID, context);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnPostPageShowed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER___BASE_ONPOSTPAGESHOWED_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void PJGAMONMMNI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER_PJGAMONMMNI_OFFSET))(this);
		}

		::System::Void LHLLLKDOBCD(::NAPScrollView::DataStruct::MoveContext AAOCANGHBDG, ::System::Single PFBGAKLFGPI)
		{
			return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::MoveContext, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER_LHLLLKDOBCD_OFFSET))(this, AAOCANGHBDG, PFBGAKLFGPI);
		}

		::System::Void LHLLFJDCOOF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER_LHLLFJDCOOF_OFFSET))(this);
		}

		::System::Void KHEMECJOPJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER_KHEMECJOPJJ_OFFSET))(this);
		}

		::System::Void MHOAJDJMHNB(::System::Int32 ABHBKFJKINO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER_MHOAJDJMHNB_OFFSET))(this, ABHBKFJKINO);
		}

		::System::Void MHOAJDJMHNB_1(::MoleMole::UIWorkbenchMainPageSmallBtnWidgetController_Context* AAOCANGHBDG, ::MoleMole::UIBaseController* IOECLFPLKGE)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIWorkbenchMainPageSmallBtnWidgetController_Context*, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER_MHOAJDJMHNB_1_OFFSET))(this, AAOCANGHBDG, IOECLFPLKGE);
		}

		::System::Void JECBICJELML()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER_JECBICJELML_OFFSET))(this);
		}

		::System::Void JDGGDKDCGNB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER_JDGGDKDCGNB_OFFSET))(this);
		}

		::System::Void EDDKAIKDEJD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER_EDDKAIKDEJD_OFFSET))(this);
		}

		::System::Void LMEAOBELFGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER_LMEAOBELFGP_OFFSET))(this);
		}

		::System::Void EBDPBNHMKDK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER_EBDPBNHMKDK_OFFSET))(this);
		}
	};
}
