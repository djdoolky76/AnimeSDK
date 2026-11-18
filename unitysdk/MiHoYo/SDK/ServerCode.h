#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_SERVERCODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E069350)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ServerCode_TypeDefinitionIndex = 18825;

	class ServerCode : public ::System::Object
	{
	public:
		// static const ::System::Int32 LOGIN_ERROR_SYSTEM = -0x65; // 0x0
		// static const ::System::Int32 LOGIN_INVALID_SIGN = -0x67; // 0x0
		// static const ::System::Int32 LOGIN_INVALID_CHANNEL = -0x68; // 0x0
		// static const ::System::Int32 LOGIN_CHANNEL_ERROR = -0x6B; // 0x0
		// static const ::System::Int32 LOGIN_FORBIDDEN = -0x6C; // 0x0
		// static const ::System::Int32 LOGIN_RISK_CHECK_FAIL = -0x6E; // 0x0
		// static const ::System::Int32 TOKEN_FORMAT_ERROR = -0x6F; // 0x0
		// static const ::System::Int32 LOGIN_PASSPORT_SOFT_BAN = -0x71; // 0x0
		// static const ::System::Int32 TOKEN_MISMATCH = -0xD2; // 0x0
		// static const ::System::Int32 TOKEN_INVALID = -0x120; // 0x0
		// static const ::System::Int32 MAIL_EXIST = -0xCE; // 0x0
		// static const ::System::Int32 MAIL_NOT_EXIST = -0xD8; // 0x0
		// static const ::System::Int32 PHONE_NOT_EXIST = -0xD9; // 0x0
		// static const ::System::Int32 PAY_FORBIDDEN = 0x7A; // 0x0
		// static const ::System::Int32 PAY_AGE_LIMIT = 0x86; // 0x0
		// static const ::System::Int32 PAY_RISK = 0x87; // 0x0
		// static const ::System::Int32 PAY_NOT_ELIGIBLE_PURCHASE = 0x8D; // 0x0
		// static const ::System::Int32 ACTION_TICKET_INVALID = -0x114; // 0x0
		// static const ::System::Int32 PAY_ACCOUNT_ERROR = 0x73; // 0x0
		// static const ::System::Int32 GOOGLE_PC_TOKEN_ERROR = 0x8A; // 0x0
		// static const ::System::Int32 PGOOGLE_PC_API_ERROR = 0x8B; // 0x0
		// static const ::System::Int32 CN_PAY_ORDER_OVERDUE = 0xBBA; // 0x0
		// static const ::System::Int32 CN_PAY_ORDER_CLOSE = 0xBBB; // 0x0
		// static const ::System::Int32 CN_PAY_ORDER_FINISH = 0xBBC; // 0x0
		// static const ::System::Int32 LOGIN_AGE_GATE_NOT_ENABLE = -0x2BD; // 0x0
		// static const ::System::Int32 LOGIN_AGE_GATE_REGISTER_RESTRICTED_CHALLENGE = -0x2BF; // 0x0
		// static const ::System::Int32 RISK_EC_BEGIN = 0x12C; // 0x0
		// static const ::System::Int32 RISK_EC_BLOCKED = 0x12C; // 0x0
		// static const ::System::Int32 RISK_EC_BLOCKED_BY_GOOGLEPC = 0x12D; // 0x0
		// static const ::System::Int32 RISK_EC_END = 0x18F; // 0x0
		// static const ::System::Int32 ACCOUNT_PLAT_INVALID_PARAMS = -0xBB9; // 0x0
		// static const ::System::Int32 ACCOUNT_PLAT_ACTION_TICKET_INVALID = -0xBBB; // 0x0
		// static const ::System::Int32 ACCOUNT_PLAT_TOO_MANY_REQUESTS = -0xBBE; // 0x0
		// static const ::System::Int32 ACCOUNT_PLAT_ACCOUNT_BANNED = -0xC81; // 0x0
		// static const ::System::Int32 ACCOUNT_PLAT_IN_GAME_CTRL = -0xC93; // 0x0
		// static const ::System::Int32 ACCOUNT_PLAT_CHANGE_PASSWORD_NEEDED = -0xCB6; // 0x0
		// static const ::System::Int32 ACCOUNT_PLAT_IN_GAME_CTRL_WITHIN_MANDATORYPERIOD = -0xCB9; // 0x0
		// static const ::System::Int32 ACCOUNT_PLAT_RISK_NEED_VERIFY = -0xCA3; // 0x0
		// static const ::System::Int32 ACCOUNT_PLAT_CROSS_LOGIN_INVALID_VERIFY = -0x64; // 0x0
		// static const ::System::Int32 ACCOUNT_PLAT_CROSS_LOGIN_INVALID_PARAM = -0xBB9; // 0x0
		// static const ::System::Int32 ACCOUNT_PLAT_INNER_UNKNOWN_ERROR = -0x139D; // 0x0
		// static const ::System::Int32 AGE_GATE_COMB0_REGISTER_RESTRICTED_CHALLENGE = -0x2BF; // 0x0
		// static const ::System::Int32 AGE_GATE_NOT_ENABLE = -0x1073; // 0x0
		// static const ::System::Int32 AGE_GATE_LOGIN_RESTRICTED_CHALLENGE = -0x1074; // 0x0
		// static const ::System::Int32 AGE_GATE_REGISTER_RESTRICTED_CHALLENGE = -0x1075; // 0x0
		// static const ::System::Int32 AGE_GATE_INTERNAL_ERROR = 0x5DC; // 0x0
		// static const ::System::Int32 AGE_GATE_INVALID_PARAMS = -0xBB9; // 0x0
		// static const ::System::Int32 AGE_GATE_INVALID_VERIFY = -0x1068; // 0x0
		// static const ::System::Int32 AGE_GATE_BIRTHDAY_ALREADY_SET = -0x1069; // 0x0
		// static const ::System::Int32 AGE_GATE_CHANGE_PARENT_EMAIL_NOT_ALLOWED = -0x106A; // 0x0
		// static const ::System::Int32 AGE_GATE_PARENT_EMAIL_RESEND_TOO_MANY = -0x106B; // 0x0
		// static const ::System::Int32 INVALID_AGE_GATE_EMAIL = -0x106D; // 0x0
		// static const ::System::Int32 AGE_GATE_INVALID_PAYLOAD = -0x1071; // 0x0
		// static const ::System::Int32 AGE_GATE_BR_CHALLENGE = -0x1081; // 0x0
		// static const ::System::Int32 AGE_GATE_TEEN_WITHOUT_VPC = 0x94; // 0x0
		// static const ::System::Int32 AGE_GATE_NEED_PERMISSION = 0x95; // 0x0
		// static const ::System::Int32 AGE_GATE_MINOR_WITHOUT_VPC = 0x96; // 0x0
		// static const ::System::Int32 AGE_GATE_INVALID_GAME_TOKEN = 0x73; // 0x0
		// static const ::System::Int32 UGC_TOKEN_INVALID = -0xF43F1; // 0x0
		// static const ::System::Int32 UGC_TOKEN_EXPIRED = -0xF43F2; // 0x0
		// static const ::System::Int32 ACTION_TICKET_EXPIRED = -0xBBB; // 0x0
		// static const ::System::Int32 NEED_RISK_CHECK = -0xC1D; // 0x0
		// static const ::System::Int32 ACCOUNT_PLAT_PROTECT_BAN = -0xC21; // 0x0
		// static const ::System::Int32 ACCOUNT_PLAT_NEW_USER_OS = -0xC83; // 0x0
		// static const ::System::Int32 ACCOUNT_BOUND_TO_OTHER_CX = -0xCD0; // 0x0
		// static const ::System::Int32 CX_BOUND_TO_OTHER_ACCOUNT = -0xCD1; // 0x0
		// static const ::System::Int32 CHANNEL_AUTH_TICKET_INVALID = -0xCE6; // 0x0
		// static const ::System::Int32 AID_BOUND_TO_OTHER_STEAM_ACCOUNT = -0xCE9; // 0x0
		// static const ::System::Int32 STEAM_ACCOUNT_BOUND_TO_OTHER_AID = -0xCEA; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SERVERCODE__CTOR_OFFSET))(this);
		}
	};
}
