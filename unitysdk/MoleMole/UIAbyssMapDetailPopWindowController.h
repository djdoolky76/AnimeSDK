#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MIKOMFIBMBN.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class IBCCMKIBDHF;
class MonoUITableScrollV2;
class NHOCAKLMPCH;
class OFAAELIAIJK;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Object; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIABYSSMAPDETAILPOPWINDOWCONTROLLER_BEABJLNNLGE_OFFSET UNITYSDK_OFFSET(0x19B820F0)
#define MOLEMOLE_UIABYSSMAPDETAILPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x19B81BE0)
#define MOLEMOLE_UIABYSSMAPDETAILPOPWINDOWCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x19B81F60)
#define MOLEMOLE_UIABYSSMAPDETAILPOPWINDOWCONTROLLER_JFFJLHAJKCO_OFFSET UNITYSDK_OFFSET(0x19B825F0)
#define MOLEMOLE_UIABYSSMAPDETAILPOPWINDOWCONTROLLER_JPGEIFEEPHA_OFFSET UNITYSDK_OFFSET(0x19B82640)
#define MOLEMOLE_UIABYSSMAPDETAILPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19B81E60)
#define MOLEMOLE_UIABYSSMAPDETAILPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19B81EF0)
#define MOLEMOLE_UIABYSSMAPDETAILPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19B81BF0)
#define MOLEMOLE_UIABYSSMAPDETAILPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19B81DF0)
#define MOLEMOLE_UIABYSSMAPDETAILPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19B824A0)
#define MOLEMOLE_UIABYSSMAPDETAILPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19B824B0)
#define MOLEMOLE_UIABYSSMAPDETAILPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19B82540)
#define MOLEMOLE_UIABYSSMAPDETAILPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19B82550)
#define MOLEMOLE_UIABYSSMAPDETAILPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19B82560)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssMapDetailPopWindowController_TypeDefinitionIndex = 64340;

	class UIAbyssMapDetailPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::IBCCMKIBDHF* _view; // 0x320
		::MonoUITableScrollV2* NFEHHKEOOLK; // 0x328
		::System::Collections::Generic::List_1<::OFAAELIAIJK*>* EFFAONJBCOG; // 0x330
		::NHOCAKLMPCH* EJNBNFKKADJ; // 0x338

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSMAPDETAILPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSMAPDETAILPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSMAPDETAILPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSMAPDETAILPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSMAPDETAILPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSMAPDETAILPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitView(::System::Collections::Generic::IReadOnlyList_1<::System::Object*>* iconTips)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSMAPDETAILPOPWINDOWCONTROLLER_INITVIEW_OFFSET))(this, iconTips);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSMAPDETAILPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSMAPDETAILPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSMAPDETAILPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSMAPDETAILPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void JFFJLHAJKCO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSMAPDETAILPOPWINDOWCONTROLLER_JFFJLHAJKCO_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::OFAAELIAIJK*>* BEABJLNNLGE(::System::Collections::Generic::IReadOnlyList_1<::System::Object*>* MMCGKLDJIIA)
		{
			return ((::System::Collections::Generic::List_1<::OFAAELIAIJK*>*(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSMAPDETAILPOPWINDOWCONTROLLER_BEABJLNNLGE_OFFSET))(this, MMCGKLDJIIA);
		}

		::MoleMole::ScrollViewItemWidgetController* JPGEIFEEPHA(::MIKOMFIBMBN JOLDOMEIKEF, ::System::Func_1<::MoleMole::UIControlReference*>* MNDIBLLFAJI)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::MIKOMFIBMBN, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSMAPDETAILPOPWINDOWCONTROLLER_JPGEIFEEPHA_OFFSET))(this, JOLDOMEIKEF, MNDIBLLFAJI);
		}
	};
}
