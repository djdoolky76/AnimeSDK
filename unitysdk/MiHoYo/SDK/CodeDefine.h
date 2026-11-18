#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_CODEDEFINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8DF960)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int CodeDefine_TypeDefinitionIndex = 18823;

	class CodeDefine : public ::System::Object
	{
	public:
		// static const ::System::Int32 SUCCESS = 0x0; // 0x0
		// static const ::System::Int32 FAIL = -0x1; // 0x0
		// static const ::System::Int32 CANCEL = -0x2; // 0x0
		// static const ::System::Int32 NO_SUCH_METHOD = -0xA; // 0x0
		// static const ::System::Int32 NOT_SUPPORTED_REGION = -0x14; // 0x0
		// static const ::System::Int32 LOGIN_BASE = -0x64; // 0x0
		// static const ::System::Int32 LOGIN_FAILED = -0x65; // 0x0
		// static const ::System::Int32 LOGIN_CANCEL = -0x66; // 0x0
		// static const ::System::Int32 LOGIN_ERROR = -0x67; // 0x0
		// static const ::System::Int32 LOGIN_NEW_DEVICE = -0xCA7; // 0x0
		// static const ::System::Int32 LOGOUT_FAILED = -0x68; // 0x0
		// static const ::System::Int32 LOGOUT_CANCEL = -0x69; // 0x0
		// static const ::System::Int32 LOGOUT_ERROR = -0x6A; // 0x0
		// static const ::System::Int32 PAY_FAILED = -0x6B; // 0x0
		// static const ::System::Int32 PAY_CANCEL = -0x6C; // 0x0
		// static const ::System::Int32 PAY_ERROR = -0x6D; // 0x0
		// static const ::System::Int32 PAY_LAUNCH = -0x78; // 0x0
		// static const ::System::Int32 PAY_UNKONWEN = -0x74; // 0x0
		// static const ::System::Int32 EXIT_FAILED = -0x6E; // 0x0
		// static const ::System::Int32 EXIT_NO_DIALOG = -0x6F; // 0x0
		// static const ::System::Int32 EXIT_CANCEL = -0x70; // 0x0
		// static const ::System::Int32 EXIT_ERROR = -0x71; // 0x0
		// static const ::System::Int32 INIT_FAILED = -0x72; // 0x0
		// static const ::System::Int32 INIT_ERROR = -0x73; // 0x0
		// static const ::System::Int32 LOGIN_FORBIDDEN = -0x75; // 0x0
		// static const ::System::Int32 NEED_REALNAME = -0x76; // 0x0
		// static const ::System::Int32 NEED_GUARDIAN = -0x77; // 0x0
		// static const ::System::Int32 HOYOPASS_TOKEN_INVALID = -0x64; // 0x0
		// static const ::System::Int32 EOS_DLL_ERROR = -0x3E9; // 0x0
		// static const ::System::Int32 EOS_TOKEN_ERROR = -0x3EA; // 0x0
		// static const ::System::Int32 GOOGLE_PC_TOKEN_ERROR = -0x3EB; // 0x0
		// static const ::System::Int32 GOOGLE_PC_SDK_INIT_FAILED = -0x3EC; // 0x0
		// static const ::System::Int32 STEAM_PC_SDK_INIT_FAILED = -0x3ED; // 0x0
		// static const ::System::Int32 XBOX_PC_SDK_INIT_FAILED = -0x3EE; // 0x0
		// static const ::System::Int32 EPIC_PC_SDK_INIT_FAILED = -0x3EF; // 0x0
		// static const ::System::Int32 WEBVIEW_ASYNC_INIT_FAIL = -0x7D1; // 0x0
		// static const ::System::Int32 WEBVIEW_ASYNC_INIT_FALLBACK = -0x7D2; // 0x0
		// static const ::System::Int32 BILIBILI_REJECT_PROTOCOL_ERROR = -0x36B1; // 0x0
		// static const ::System::Int32 UGC_AGREEMENT_TOKEN_INVALID = -0x2; // 0x0
		// static const ::System::Int32 UGC_AGREEMENT_REJECT = -0x1; // 0x0
		// static const ::System::Int32 UGC_AGREEMENT_AGREE = 0x0; // 0x0
		// static const ::System::Int32 UGC_AGREEMENT_NO_SHOW = 0x1; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CODEDEFINE__CTOR_OFFSET))(this);
		}
	};
}
