#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LHKMKCIPOLD;
namespace MoleMole { class UIReportChatPopWindowController; }
namespace MoleMole { class UIReportDialogPopWindowController; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16780960)
#define MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS21_0__ONCLICKSELECTCHATHISTORY_B__0_OFFSET UNITYSDK_OFFSET(0x16780970)
#define MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS21_0__ONCLICKSELECTCHATHISTORY_B__1_OFFSET UNITYSDK_OFFSET(0x16780C20)
#define MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS21_0__ONCLICKSELECTCHATHISTORY_B__2_OFFSET UNITYSDK_OFFSET(0x16780C90)
#define MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS21_0__ONCLICKSELECTCHATHISTORY_B__3_OFFSET UNITYSDK_OFFSET(0x16780BB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIReportDialogPopWindowController___c__DisplayClass21_0_TypeDefinitionIndex = 43335;

	class UIReportDialogPopWindowController___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::MoleMole::UIReportDialogPopWindowController* __4__this; // 0x10
		::MoleMole::UIReportChatPopWindowController* reportChatController; // 0x18
		::System::Action_1<::System::Int32>* __9__3; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickSelectChatHistory_b__0(::System::Collections::Generic::List_1<::LHKMKCIPOLD*>* msgList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::LHKMKCIPOLD*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS21_0__ONCLICKSELECTCHATHISTORY_B__0_OFFSET))(this, msgList);
		}

		::System::Void _OnClickSelectChatHistory_b__3(::System::Int32 selectedNum)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS21_0__ONCLICKSELECTCHATHISTORY_B__3_OFFSET))(this, selectedNum);
		}

		::System::Void _OnClickSelectChatHistory_b__1(::System::Int32 selectedNum)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS21_0__ONCLICKSELECTCHATHISTORY_B__1_OFFSET))(this, selectedNum);
		}

		::System::Void _OnClickSelectChatHistory_b__2(::System::Int32 selectedNum)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS21_0__ONCLICKSELECTCHATHISTORY_B__2_OFFSET))(this, selectedNum);
		}
	};
}
