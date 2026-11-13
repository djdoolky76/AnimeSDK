#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MessageBoxDialogContext_MessageBoxMode.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/Client/UIController.h"
#include "unitysdk/RPG/Client/UILayer.h"
class JGBABEICECH;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_MESSAGEBOXDIALOGCONTEXT_CTOR_OFFSET UNITYSDK_OFFSET(0x1E930A60)
#define RPG_CLIENT_MESSAGEBOXDIALOGCONTEXT_GET_VIEW_OFFSET UNITYSDK_OFFSET(0x1E9310C0)
#define RPG_CLIENT_MESSAGEBOXDIALOGCONTEXT_ONBTNCANCELCLICK_OFFSET UNITYSDK_OFFSET(0x1E931820)
#define RPG_CLIENT_MESSAGEBOXDIALOGCONTEXT_ONBTNOKCLICK_OFFSET UNITYSDK_OFFSET(0x1E9317B0)
#define RPG_CLIENT_MESSAGEBOXDIALOGCONTEXT_SETMESSAGEBOXMODE_OFFSET UNITYSDK_OFFSET(0x1E931930)
#define RPG_CLIENT_MESSAGEBOXDIALOGCONTEXT_SETUPBTNCLOSEENABLE_OFFSET UNITYSDK_OFFSET(0x1E931890)
#define RPG_CLIENT_MESSAGEBOXDIALOGCONTEXT__ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0x1E931130)
#define RPG_CLIENT_MESSAGEBOXDIALOGCONTEXT__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x1E930BA0)
#define RPG_CLIENT_MESSAGEBOXDIALOGCONTEXT__ONMESSAGEBOXCLOSE_OFFSET UNITYSDK_OFFSET(0x1E931980)
#define RPG_CLIENT_MESSAGEBOXDIALOGCONTEXT__SETMESSAGEBOXMODEIMPL_OFFSET UNITYSDK_OFFSET(0x1E931380)
#define RPG_CLIENT_MESSAGEBOXDIALOGCONTEXT__SETUPMODEBTN_OFFSET UNITYSDK_OFFSET(0x1E931630)
#define RPG_CLIENT_MESSAGEBOXDIALOGCONTEXT__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1E9311F0)
#define RPG_CLIENT_MESSAGEBOXDIALOGCONTEXT__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0x1E931670)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageBoxDialogContext_TypeDefinitionIndex = 74894;

	class MessageBoxDialogContext : public ::RPG::Client::UIController
	{
	public:
		::System::Action_1<::System::Boolean>* OkOrCancelDispatch; // 0x190
		::RPG::Client::TextID TextIDTitle; // 0x198
		::RPG::Client::TextID TextIDCancel; // 0x1A8
		::RPG::Client::TextID TextIDDesc; // 0x1B8
		::RPG::Client::MessageBoxDialogContext_MessageBoxMode _Mode; // 0x1C8
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID TextIDOK; // 0x1D0
		::System::Void _ctor(::RPG::Client::UILayer a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UILayer))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEBOXDIALOGCONTEXT_CTOR_OFFSET))(this, a1);
		}

		::System::Void _CustomBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEBOXDIALOGCONTEXT__CUSTOMBINDVIEW_OFFSET))(this);
		}

		::System::Void _AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEBOXDIALOGCONTEXT__ADDHANDLERS_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEBOXDIALOGCONTEXT__SETUPVIEW_OFFSET))(this);
		}

		::System::Void _SetupModeBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEBOXDIALOGCONTEXT__SETUPMODEBTN_OFFSET))(this);
		}

		::System::Void _UnBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEBOXDIALOGCONTEXT__UNBINDVIEW_OFFSET))(this);
		}

		::System::Void OnBtnOkClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEBOXDIALOGCONTEXT_ONBTNOKCLICK_OFFSET))(this);
		}

		::System::Void OnBtnCancelClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEBOXDIALOGCONTEXT_ONBTNCANCELCLICK_OFFSET))(this);
		}

		::System::Void SetupBtnCloseEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEBOXDIALOGCONTEXT_SETUPBTNCLOSEENABLE_OFFSET))(this, a1);
		}

		::System::Void _SetMessageBoxModeImpl(::RPG::Client::MessageBoxDialogContext_MessageBoxMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MessageBoxDialogContext_MessageBoxMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEBOXDIALOGCONTEXT__SETMESSAGEBOXMODEIMPL_OFFSET))(this, a1);
		}

		::System::Void SetMessageBoxMode(::RPG::Client::MessageBoxDialogContext_MessageBoxMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MessageBoxDialogContext_MessageBoxMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEBOXDIALOGCONTEXT_SETMESSAGEBOXMODE_OFFSET))(this, a1);
		}

		::System::Void _OnMessageBoxClose(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEBOXDIALOGCONTEXT__ONMESSAGEBOXCLOSE_OFFSET))(this, a1);
		}

		::JGBABEICECH* get_View()
		{
			return ((::JGBABEICECH*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEBOXDIALOGCONTEXT_GET_VIEW_OFFSET))(this);
		}

	};
}
