#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIHollowLayerResultPageV2PopWindowController.h"
#include "unitysdk/MoleMole/UIHollowResultInfoRowNewWidgetController_RowData.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace MoleMole { class UIControllerContextBase; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIMECHRESULTPAGECONTROLLER_CCHJGJKCFMD_OFFSET UNITYSDK_OFFSET(0x183F6550)
#define MOLEMOLE_UIMECHRESULTPAGECONTROLLER_GETMISSIONLIST_OFFSET UNITYSDK_OFFSET(0x183F60C0)
#define MOLEMOLE_UIMECHRESULTPAGECONTROLLER_GETOVERRIDEMISSIONLIST_OFFSET UNITYSDK_OFFSET(0x183F6130)
#define MOLEMOLE_UIMECHRESULTPAGECONTROLLER_NANDAFAOLKN_OFFSET UNITYSDK_OFFSET(0x183F6660)
#define MOLEMOLE_UIMECHRESULTPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x183F6020)
#define MOLEMOLE_UIMECHRESULTPAGECONTROLLER_REFRESHREWARDVIEW_OFFSET UNITYSDK_OFFSET(0x183F66F0)
#define MOLEMOLE_UIMECHRESULTPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x183F7330)
#define MOLEMOLE_UIMECHRESULTPAGECONTROLLER___BASE_GETMISSIONLIST_OFFSET UNITYSDK_OFFSET(0x183F7340)
#define MOLEMOLE_UIMECHRESULTPAGECONTROLLER___BASE_GETOVERRIDEMISSIONLIST_OFFSET UNITYSDK_OFFSET(0x183F7370)
#define MOLEMOLE_UIMECHRESULTPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x183F7400)
#define MOLEMOLE_UIMECHRESULTPAGECONTROLLER___BASE_REFRESHREWARDVIEW_OFFSET UNITYSDK_OFFSET(0x183F7410)

namespace MoleMole
{
	inline static constexpr unsigned int UIMechResultPageController_TypeDefinitionIndex = 86158;

	class UIMechResultPageController : public ::MoleMole::UIHollowLayerResultPageV2PopWindowController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHRESULTPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHRESULTPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::ValueTuple_2<::System::Collections::Generic::List_1<::System::Object*>*, ::System::Int32> GetMissionList()
		{
			return ((::System::ValueTuple_2<::System::Collections::Generic::List_1<::System::Object*>*, ::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHRESULTPAGECONTROLLER_GETMISSIONLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Object*>* GetOverrideMissionList()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHRESULTPAGECONTROLLER_GETOVERRIDEMISSIONLIST_OFFSET))(this);
		}

		::System::Void RefreshRewardView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHRESULTPAGECONTROLLER_REFRESHREWARDVIEW_OFFSET))(this);
		}

		::System::ValueTuple_2<::System::Collections::Generic::List_1<::System::Object*>*, ::System::Int32> __base_GetMissionList()
		{
			return ((::System::ValueTuple_2<::System::Collections::Generic::List_1<::System::Object*>*, ::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHRESULTPAGECONTROLLER___BASE_GETMISSIONLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Object*>* __base_GetOverrideMissionList()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHRESULTPAGECONTROLLER___BASE_GETOVERRIDEMISSIONLIST_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHRESULTPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_RefreshRewardView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHRESULTPAGECONTROLLER___BASE_REFRESHREWARDVIEW_OFFSET))(this);
		}

		static ::MoleMole::UIHollowResultInfoRowNewWidgetController_RowData NANDAFAOLKN()
		{
			return ((::MoleMole::UIHollowResultInfoRowNewWidgetController_RowData(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHRESULTPAGECONTROLLER_NANDAFAOLKN_OFFSET))();
		}

		static ::MoleMole::UIHollowResultInfoRowNewWidgetController_RowData CCHJGJKCFMD(::System::String* MCOHLHMKLIP, ::System::String* EGEGIMGMJHN)
		{
			return ((::MoleMole::UIHollowResultInfoRowNewWidgetController_RowData(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHRESULTPAGECONTROLLER_CCHJGJKCFMD_OFFSET))(MCOHLHMKLIP, EGEGIMGMJHN);
		}
	};
}
