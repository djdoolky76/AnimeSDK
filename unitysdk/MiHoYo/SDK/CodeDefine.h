#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_CODEDEFINE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BC47320)

namespace MiHoYo::SDK
{
	class CodeDefine : public ::System::Object
	{
	public:
		// static const ::System::Object SUCCESS; // 0x0
		// static const ::System::Object FAIL; // 0x0
		// static const ::System::Object CANCEL; // 0x0
		// static const ::System::Object NO_SUCH_METHOD; // 0x0
		// static const ::System::Object NOT_SUPPORTED_REGION; // 0x0
		// static const ::System::Object LOGIN_BASE; // 0x0
		// static const ::System::Object LOGIN_FAILED; // 0x0
		// static const ::System::Object LOGIN_CANCEL; // 0x0
		// static const ::System::Object LOGIN_ERROR; // 0x0
		// static const ::System::Object LOGIN_NEW_DEVICE; // 0x0
		// static const ::System::Object LOGOUT_FAILED; // 0x0
		// static const ::System::Object LOGOUT_CANCEL; // 0x0
		// static const ::System::Object LOGOUT_ERROR; // 0x0
		// static const ::System::Object PAY_FAILED; // 0x0
		// static const ::System::Object PAY_CANCEL; // 0x0
		// static const ::System::Object PAY_ERROR; // 0x0
		// static const ::System::Object PAY_LAUNCH; // 0x0
		// static const ::System::Object PAY_UNKONWEN; // 0x0
		// static const ::System::Object EXIT_FAILED; // 0x0
		// static const ::System::Object EXIT_NO_DIALOG; // 0x0
		// static const ::System::Object EXIT_CANCEL; // 0x0
		// static const ::System::Object EXIT_ERROR; // 0x0
		// static const ::System::Object INIT_FAILED; // 0x0
		// static const ::System::Object INIT_ERROR; // 0x0
		// static const ::System::Object LOGIN_FORBIDDEN; // 0x0
		// static const ::System::Object NEED_REALNAME; // 0x0
		// static const ::System::Object NEED_GUARDIAN; // 0x0
		// static const ::System::Object HOYOPASS_TOKEN_INVALID; // 0x0
		// static const ::System::Object EOS_DLL_ERROR; // 0x0
		// static const ::System::Object EOS_TOKEN_ERROR; // 0x0
		// static const ::System::Object GOOGLE_PC_TOKEN_ERROR; // 0x0
		// static const ::System::Object GOOGLE_PC_SDK_INIT_FAILED; // 0x0
		// static const ::System::Object STEAM_PC_SDK_INIT_FAILED; // 0x0
		// static const ::System::Object XBOX_PC_SDK_INIT_FAILED; // 0x0
		// static const ::System::Object EPIC_PC_SDK_INIT_FAILED; // 0x0
		// static const ::System::Object WEBVIEW_ASYNC_INIT_FAIL; // 0x0
		// static const ::System::Object WEBVIEW_ASYNC_INIT_FALLBACK; // 0x0
		// static const ::System::Object BILIBILI_REJECT_PROTOCOL_ERROR; // 0x0
		// static const ::System::Object UGC_AGREEMENT_TOKEN_INVALID; // 0x0
		// static const ::System::Object UGC_AGREEMENT_REJECT; // 0x0
		// static const ::System::Object UGC_AGREEMENT_AGREE; // 0x0
		// static const ::System::Object UGC_AGREEMENT_NO_SHOW; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CODEDEFINE_CTOR_OFFSET))(this);
		}

	};
}
