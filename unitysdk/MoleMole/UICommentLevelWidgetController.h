#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class DIHLNIPOIFP;
class FGGHBKMIEIL;
namespace MoleMole { class UICommentMainPageController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UICOMMENTLEVELWIDGETCONTROLLER_GBENALCJBFF_OFFSET UNITYSDK_OFFSET(0x16EB9340)
#define MOLEMOLE_UICOMMENTLEVELWIDGETCONTROLLER_LHEBADJNJOK_OFFSET UNITYSDK_OFFSET(0x16EB9480)
#define MOLEMOLE_UICOMMENTLEVELWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16EB8EE0)
#define MOLEMOLE_UICOMMENTLEVELWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16EB8B90)
#define MOLEMOLE_UICOMMENTLEVELWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16EB8F70)
#define MOLEMOLE_UICOMMENTLEVELWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16EB8970)
#define MOLEMOLE_UICOMMENTLEVELWIDGETCONTROLLER_SETPARENTPAGE_OFFSET UNITYSDK_OFFSET(0x16EB8FF0)
#define MOLEMOLE_UICOMMENTLEVELWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16EB9040)
#define MOLEMOLE_UICOMMENTLEVELWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16EB90F0)
#define MOLEMOLE_UICOMMENTLEVELWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16EB9180)
#define MOLEMOLE_UICOMMENTLEVELWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16EB9220)
#define MOLEMOLE_UICOMMENTLEVELWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16EB92B0)

namespace MoleMole
{
	inline static constexpr unsigned int UICommentLevelWidgetController_TypeDefinitionIndex = 43949;

	class UICommentLevelWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::FGGHBKMIEIL* _view; // 0x2C8
		::MoleMole::UICommentMainPageController* KGAHIGELGJF; // 0x2D0
		::DIHLNIPOIFP* OPOLMJLMHCD; // 0x2D8
		::System::Collections::Generic::List_1<::System::Int32>* NDBPAMBOHIN; // 0x2E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTLEVELWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTLEVELWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTLEVELWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTLEVELWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTLEVELWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetParentPage(::MoleMole::UICommentMainPageController* pageController)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UICommentMainPageController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTLEVELWIDGETCONTROLLER_SETPARENTPAGE_OFFSET))(this, pageController);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTLEVELWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTLEVELWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTLEVELWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTLEVELWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void GBENALCJBFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTLEVELWIDGETCONTROLLER_GBENALCJBFF_OFFSET))(this);
		}

		::System::Void LHEBADJNJOK(::System::Int32 ABHBKFJKINO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTLEVELWIDGETCONTROLLER_LHEBADJNJOK_OFFSET))(this, ABHBKFJKINO);
		}
	};
}
