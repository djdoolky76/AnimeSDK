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

#define MOLEMOLE_UIMUSICBATTLERESULTPOPWINDOWCONTROLLER_CCHJGJKCFMD_OFFSET UNITYSDK_OFFSET(0x174360E0)
#define MOLEMOLE_UIMUSICBATTLERESULTPOPWINDOWCONTROLLER_GETMISSIONLIST_OFFSET UNITYSDK_OFFSET(0x174361A0)
#define MOLEMOLE_UIMUSICBATTLERESULTPOPWINDOWCONTROLLER_GETOVERRIDEMISSIONLIST_OFFSET UNITYSDK_OFFSET(0x174359B0)
#define MOLEMOLE_UIMUSICBATTLERESULTPOPWINDOWCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x17436480)
#define MOLEMOLE_UIMUSICBATTLERESULTPOPWINDOWCONTROLLER_NANDAFAOLKN_OFFSET UNITYSDK_OFFSET(0x17436050)
#define MOLEMOLE_UIMUSICBATTLERESULTPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x174357D0)
#define MOLEMOLE_UIMUSICBATTLERESULTPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x174369E0)
#define MOLEMOLE_UIMUSICBATTLERESULTPOPWINDOWCONTROLLER___BASE_GETMISSIONLIST_OFFSET UNITYSDK_OFFSET(0x174369F0)
#define MOLEMOLE_UIMUSICBATTLERESULTPOPWINDOWCONTROLLER___BASE_GETOVERRIDEMISSIONLIST_OFFSET UNITYSDK_OFFSET(0x17436A20)
#define MOLEMOLE_UIMUSICBATTLERESULTPOPWINDOWCONTROLLER___BASE_INITVIEW_OFFSET UNITYSDK_OFFSET(0x17436AB0)
#define MOLEMOLE_UIMUSICBATTLERESULTPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17436AC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMusicBattleResultPopWindowController_TypeDefinitionIndex = 75390;

	class UIMusicBattleResultPopWindowController : public ::MoleMole::UIHollowLayerResultPageV2PopWindowController
	{
	public:
		::MoleMole::UIHollowHollowLayerResultDialogContext* AAOCANGHBDG; // 0x3A0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLERESULTPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLERESULTPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Collections::Generic::List_1<::System::Object*>* GetOverrideMissionList()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLERESULTPOPWINDOWCONTROLLER_GETOVERRIDEMISSIONLIST_OFFSET))(this);
		}

		::System::ValueTuple_2<::System::Collections::Generic::List_1<::System::Object*>*, ::System::Int32> GetMissionList()
		{
			return ((::System::ValueTuple_2<::System::Collections::Generic::List_1<::System::Object*>*, ::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLERESULTPOPWINDOWCONTROLLER_GETMISSIONLIST_OFFSET))(this);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLERESULTPOPWINDOWCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::ValueTuple_2<::System::Collections::Generic::List_1<::System::Object*>*, ::System::Int32> __base_GetMissionList()
		{
			return ((::System::ValueTuple_2<::System::Collections::Generic::List_1<::System::Object*>*, ::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLERESULTPOPWINDOWCONTROLLER___BASE_GETMISSIONLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Object*>* __base_GetOverrideMissionList()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLERESULTPOPWINDOWCONTROLLER___BASE_GETOVERRIDEMISSIONLIST_OFFSET))(this);
		}

		::System::Void __base_InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLERESULTPOPWINDOWCONTROLLER___BASE_INITVIEW_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLERESULTPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		static ::MoleMole::UIHollowResultInfoRowNewWidgetController_RowData CCHJGJKCFMD(::System::String* FCMCJAPEJNL, ::System::String* EGEGIMGMJHN)
		{
			return ((::MoleMole::UIHollowResultInfoRowNewWidgetController_RowData(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLERESULTPOPWINDOWCONTROLLER_CCHJGJKCFMD_OFFSET))(FCMCJAPEJNL, EGEGIMGMJHN);
		}

		static ::MoleMole::UIHollowResultInfoRowNewWidgetController_RowData NANDAFAOLKN()
		{
			return ((::MoleMole::UIHollowResultInfoRowNewWidgetController_RowData(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLERESULTPOPWINDOWCONTROLLER_NANDAFAOLKN_OFFSET))();
		}
	};
}
