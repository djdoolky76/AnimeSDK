#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/MoleMole/UIPinballOptionsDialogPopWindowController_OptionsDialogMode.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIPINBALLOPTIONSDIALOGPOPWINDOWCONTROLLER_CONTEXT_GETINITIALSELECTINDEX_OFFSET UNITYSDK_OFFSET(0x1676C5B0)
#define MOLEMOLE_UIPINBALLOPTIONSDIALOGPOPWINDOWCONTROLLER_CONTEXT_GET_CANREFRESH_OFFSET UNITYSDK_OFFSET(0x1676BB10)
#define MOLEMOLE_UIPINBALLOPTIONSDIALOGPOPWINDOWCONTROLLER_CONTEXT_GET_ISAPPLIEDBUFFLISTMODE_OFFSET UNITYSDK_OFFSET(0x1676BAE0)
#define MOLEMOLE_UIPINBALLOPTIONSDIALOGPOPWINDOWCONTROLLER_CONTEXT_GET_SHOWCONFIRMBUTTON_OFFSET UNITYSDK_OFFSET(0x1676BAF0)
#define MOLEMOLE_UIPINBALLOPTIONSDIALOGPOPWINDOWCONTROLLER_CONTEXT_GET_SHOWTIPSROOT_OFFSET UNITYSDK_OFFSET(0x1676BB00)
#define MOLEMOLE_UIPINBALLOPTIONSDIALOGPOPWINDOWCONTROLLER_CONTEXT_REFRESHAPPLIEDBUFFOPTIONS_OFFSET UNITYSDK_OFFSET(0x1676C320)
#define MOLEMOLE_UIPINBALLOPTIONSDIALOGPOPWINDOWCONTROLLER_CONTEXT_REFRESHOPTIONSBYTRIGGERCLEARCOUNT_OFFSET UNITYSDK_OFFSET(0x1676BD80)
#define MOLEMOLE_UIPINBALLOPTIONSDIALOGPOPWINDOWCONTROLLER_CONTEXT_TRYCREATEAPPLIEDBUFFLIST_OFFSET UNITYSDK_OFFSET(0x1676C1B0)
#define MOLEMOLE_UIPINBALLOPTIONSDIALOGPOPWINDOWCONTROLLER_CONTEXT_TRYCREATEBYTRIGGERCLEARCOUNT_OFFSET UNITYSDK_OFFSET(0x1676BB70)
#define MOLEMOLE_UIPINBALLOPTIONSDIALOGPOPWINDOWCONTROLLER_CONTEXT_TRYREFRESHSELECTABLEOPTIONS_OFFSET UNITYSDK_OFFSET(0x1676C660)
#define MOLEMOLE_UIPINBALLOPTIONSDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1676BCE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIPinballOptionsDialogPopWindowController_Context_TypeDefinitionIndex = 47936;

	class UIPinballOptionsDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* Options; // 0x28
		::System::Int32 TriggerClearCount; // 0x30
		::System::Boolean _hasRefreshed; // 0x34
		::System::Byte _padding0[0x3];
		::MoleMole::UIPinballOptionsDialogPopWindowController_OptionsDialogMode Mode; // 0x38
		::System::Int32 InitialBallId; // 0x3C
		::System::Int32 TotalAppliedCount; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLOPTIONSDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsAppliedBuffListMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLOPTIONSDIALOGPOPWINDOWCONTROLLER_CONTEXT_GET_ISAPPLIEDBUFFLISTMODE_OFFSET))(this);
		}

		::System::Boolean get_ShowConfirmButton()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLOPTIONSDIALOGPOPWINDOWCONTROLLER_CONTEXT_GET_SHOWCONFIRMBUTTON_OFFSET))(this);
		}

		::System::Boolean get_ShowTipsRoot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLOPTIONSDIALOGPOPWINDOWCONTROLLER_CONTEXT_GET_SHOWTIPSROOT_OFFSET))(this);
		}

		::System::Boolean get_CanRefresh()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLOPTIONSDIALOGPOPWINDOWCONTROLLER_CONTEXT_GET_CANREFRESH_OFFSET))(this);
		}

		static ::System::Boolean TryCreateByTriggerClearCount(::System::Int32 triggerClearCount, ::MoleMole::UIPinballOptionsDialogPopWindowController_Context*& context)
		{
			return ((::System::Boolean(*)(::System::Int32, ::MoleMole::UIPinballOptionsDialogPopWindowController_Context*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLOPTIONSDIALOGPOPWINDOWCONTROLLER_CONTEXT_TRYCREATEBYTRIGGERCLEARCOUNT_OFFSET))(triggerClearCount, context);
		}

		static ::System::Boolean TryCreateAppliedBuffList(::System::Int32 initialBallId, ::MoleMole::UIPinballOptionsDialogPopWindowController_Context*& context)
		{
			return ((::System::Boolean(*)(::System::Int32, ::MoleMole::UIPinballOptionsDialogPopWindowController_Context*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLOPTIONSDIALOGPOPWINDOWCONTROLLER_CONTEXT_TRYCREATEAPPLIEDBUFFLIST_OFFSET))(initialBallId, context);
		}

		::System::Int32 GetInitialSelectIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLOPTIONSDIALOGPOPWINDOWCONTROLLER_CONTEXT_GETINITIALSELECTINDEX_OFFSET))(this);
		}

		::System::Void RefreshOptionsByTriggerClearCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLOPTIONSDIALOGPOPWINDOWCONTROLLER_CONTEXT_REFRESHOPTIONSBYTRIGGERCLEARCOUNT_OFFSET))(this);
		}

		::System::Boolean TryRefreshSelectableOptions()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLOPTIONSDIALOGPOPWINDOWCONTROLLER_CONTEXT_TRYREFRESHSELECTABLEOPTIONS_OFFSET))(this);
		}

		::System::Void RefreshAppliedBuffOptions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLOPTIONSDIALOGPOPWINDOWCONTROLLER_CONTEXT_REFRESHAPPLIEDBUFFOPTIONS_OFFSET))(this);
		}
	};
}
