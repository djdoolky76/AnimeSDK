#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIHollowLayerResultPageV2PopWindowController.h"
#include "unitysdk/MoleMole/UIHollowResultInfoRowNewWidgetController_RowData.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIHollowHollowLayerResultDialogContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UISCARYNIGHTRESULTPOPWINDOWCONTROLLER_CCHJGJKCFMD_OFFSET UNITYSDK_OFFSET(0x1825BE80)
#define MOLEMOLE_UISCARYNIGHTRESULTPOPWINDOWCONTROLLER_GETMISSIONLIST_OFFSET UNITYSDK_OFFSET(0x1825BF40)
#define MOLEMOLE_UISCARYNIGHTRESULTPOPWINDOWCONTROLLER_GETOVERRIDEMISSIONLIST_OFFSET UNITYSDK_OFFSET(0x1825B550)
#define MOLEMOLE_UISCARYNIGHTRESULTPOPWINDOWCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x1825C220)
#define MOLEMOLE_UISCARYNIGHTRESULTPOPWINDOWCONTROLLER_NANDAFAOLKN_OFFSET UNITYSDK_OFFSET(0x1825BDF0)
#define MOLEMOLE_UISCARYNIGHTRESULTPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1825B370)
#define MOLEMOLE_UISCARYNIGHTRESULTPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1825C780)
#define MOLEMOLE_UISCARYNIGHTRESULTPOPWINDOWCONTROLLER___BASE_GETMISSIONLIST_OFFSET UNITYSDK_OFFSET(0x1825C790)
#define MOLEMOLE_UISCARYNIGHTRESULTPOPWINDOWCONTROLLER___BASE_GETOVERRIDEMISSIONLIST_OFFSET UNITYSDK_OFFSET(0x1825C7C0)
#define MOLEMOLE_UISCARYNIGHTRESULTPOPWINDOWCONTROLLER___BASE_INITVIEW_OFFSET UNITYSDK_OFFSET(0x1825C850)
#define MOLEMOLE_UISCARYNIGHTRESULTPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1825C860)

namespace MoleMole
{
	inline static constexpr unsigned int UIScaryNightResultPopWindowController_TypeDefinitionIndex = 48406;

	class UIScaryNightResultPopWindowController : public ::MoleMole::UIHollowLayerResultPageV2PopWindowController
	{
	public:
		::MoleMole::UIHollowHollowLayerResultDialogContext* AAOCANGHBDG; // 0x3A0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTRESULTPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTRESULTPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Collections::Generic::List_1<::System::Object*>* GetOverrideMissionList()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTRESULTPOPWINDOWCONTROLLER_GETOVERRIDEMISSIONLIST_OFFSET))(this);
		}

		::System::ValueTuple_2<::System::Collections::Generic::List_1<::System::Object*>*, ::System::Int32> GetMissionList()
		{
			return ((::System::ValueTuple_2<::System::Collections::Generic::List_1<::System::Object*>*, ::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTRESULTPOPWINDOWCONTROLLER_GETMISSIONLIST_OFFSET))(this);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTRESULTPOPWINDOWCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::ValueTuple_2<::System::Collections::Generic::List_1<::System::Object*>*, ::System::Int32> __base_GetMissionList()
		{
			return ((::System::ValueTuple_2<::System::Collections::Generic::List_1<::System::Object*>*, ::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTRESULTPOPWINDOWCONTROLLER___BASE_GETMISSIONLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Object*>* __base_GetOverrideMissionList()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTRESULTPOPWINDOWCONTROLLER___BASE_GETOVERRIDEMISSIONLIST_OFFSET))(this);
		}

		::System::Void __base_InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTRESULTPOPWINDOWCONTROLLER___BASE_INITVIEW_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTRESULTPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		static ::MoleMole::UIHollowResultInfoRowNewWidgetController_RowData NANDAFAOLKN()
		{
			return ((::MoleMole::UIHollowResultInfoRowNewWidgetController_RowData(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTRESULTPOPWINDOWCONTROLLER_NANDAFAOLKN_OFFSET))();
		}

		static ::MoleMole::UIHollowResultInfoRowNewWidgetController_RowData CCHJGJKCFMD(::System::String* FCMCJAPEJNL, ::System::String* EGEGIMGMJHN)
		{
			return ((::MoleMole::UIHollowResultInfoRowNewWidgetController_RowData(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTRESULTPOPWINDOWCONTROLLER_CCHJGJKCFMD_OFFSET))(FCMCJAPEJNL, EGEGIMGMJHN);
		}
	};
}
