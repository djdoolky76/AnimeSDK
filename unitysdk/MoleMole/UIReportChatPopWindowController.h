#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIReportChatPopWindowController_Mode.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class NBFLNAMGHLA;
class NBIMPLJCAFH;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define MOLEMOLE_UIREPORTCHATPOPWINDOWCONTROLLER_FJGDKDGFBBB_OFFSET UNITYSDK_OFFSET(0x17BD1080)
#define MOLEMOLE_UIREPORTCHATPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x17BD0000)
#define MOLEMOLE_UIREPORTCHATPOPWINDOWCONTROLLER_INITWITHDATA_OFFSET UNITYSDK_OFFSET(0x17BD0430)
#define MOLEMOLE_UIREPORTCHATPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17BD02F0)
#define MOLEMOLE_UIREPORTCHATPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17BD0380)
#define MOLEMOLE_UIREPORTCHATPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17BD0010)
#define MOLEMOLE_UIREPORTCHATPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17BD0060)
#define MOLEMOLE_UIREPORTCHATPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17BD0F30)
#define MOLEMOLE_UIREPORTCHATPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17BD0F40)
#define MOLEMOLE_UIREPORTCHATPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17BD0FD0)
#define MOLEMOLE_UIREPORTCHATPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17BD0FE0)
#define MOLEMOLE_UIREPORTCHATPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17BD0FF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIReportChatPopWindowController_TypeDefinitionIndex = 43814;

	class UIReportChatPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::NBFLNAMGHLA* _view; // 0x320
		::System::Int32 KIDEAFMDDOB; // 0x328
		::System::Int32 EBGDBAHKAHP; // 0x32C
		::System::Action_1<::System::Int32>* CJOJHAOMCJN; // 0x330

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTCHATPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTCHATPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTCHATPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTCHATPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTCHATPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTCHATPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitWithData(::MoleMole::UIReportChatPopWindowController_Mode mode, ::System::Collections::Generic::IReadOnlyList_1<::NBIMPLJCAFH*>* reportMsgDataList, ::System::Int32 maxSelectCount, ::System::Action_1<::System::Int32>* closeCallback)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIReportChatPopWindowController_Mode, ::System::Collections::Generic::IReadOnlyList_1<::NBIMPLJCAFH*>*, ::System::Int32, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTCHATPOPWINDOWCONTROLLER_INITWITHDATA_OFFSET))(this, mode, reportMsgDataList, maxSelectCount, closeCallback);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTCHATPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTCHATPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTCHATPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTCHATPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Boolean FJGDKDGFBBB(::System::Boolean DPMPODNKMEP)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTCHATPOPWINDOWCONTROLLER_FJGDKDGFBBB_OFFSET))(this, DPMPODNKMEP);
		}
	};
}
