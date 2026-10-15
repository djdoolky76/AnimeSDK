#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_SERVERCODE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BFB1090)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ServerCode_TypeDefinitionIndex = 7569;

	class ServerCode : public ::System::Object
	{
	public:
		// static const ::System::Object LOGIN_ERROR_SYSTEM; // 0x0
		// static const ::System::Object LOGIN_INVALID_SIGN; // 0x0
		// static const ::System::Object LOGIN_INVALID_CHANNEL; // 0x0
		// static const ::System::Object LOGIN_CHANNEL_ERROR; // 0x0
		// static const ::System::Object LOGIN_FORBIDDEN; // 0x0
		// static const ::System::Object LOGIN_RISK_CHECK_FAIL; // 0x0
		// static const ::System::Object TOKEN_FORMAT_ERROR; // 0x0
		// static const ::System::Object LOGIN_PASSPORT_SOFT_BAN; // 0x0
		// static const ::System::Object TOKEN_MISMATCH; // 0x0
		// static const ::System::Object TOKEN_INVALID; // 0x0
		// static const ::System::Object MAIL_EXIST; // 0x0
		// static const ::System::Object MAIL_NOT_EXIST; // 0x0
		// static const ::System::Object PHONE_NOT_EXIST; // 0x0
		// static const ::System::Object PAY_FORBIDDEN; // 0x0
		// static const ::System::Object PAY_AGE_LIMIT; // 0x0
		// static const ::System::Object PAY_RISK; // 0x0
		// static const ::System::Object PAY_NOT_ELIGIBLE_PURCHASE; // 0x0
		// static const ::System::Object ACTION_TICKET_INVALID; // 0x0
		// static const ::System::Object PAY_ACCOUNT_ERROR; // 0x0
		// static const ::System::Object GOOGLE_PC_TOKEN_ERROR; // 0x0
		// static const ::System::Object PGOOGLE_PC_API_ERROR; // 0x0
		// static const ::System::Object CN_PAY_ORDER_OVERDUE; // 0x0
		// static const ::System::Object CN_PAY_ORDER_CLOSE; // 0x0
		// static const ::System::Object CN_PAY_ORDER_FINISH; // 0x0
		// static const ::System::Object LOGIN_AGE_GATE_NOT_ENABLE; // 0x0
		// static const ::System::Object LOGIN_AGE_GATE_REGISTER_RESTRICTED_CHALLENGE; // 0x0
		// static const ::System::Object RISK_EC_BEGIN; // 0x0
		// static const ::System::Object RISK_EC_BLOCKED; // 0x0
		// static const ::System::Object RISK_EC_BLOCKED_BY_GOOGLEPC; // 0x0
		// static const ::System::Object RISK_EC_END; // 0x0
		// static const ::System::Object ACCOUNT_PLAT_INVALID_PARAMS; // 0x0
		// static const ::System::Object ACCOUNT_PLAT_ACTION_TICKET_INVALID; // 0x0
		// static const ::System::Object ACCOUNT_PLAT_TOO_MANY_REQUESTS; // 0x0
		// static const ::System::Object ACCOUNT_PLAT_ACCOUNT_BANNED; // 0x0
		// static const ::System::Object ACCOUNT_PLAT_IN_GAME_CTRL; // 0x0
		// static const ::System::Object ACCOUNT_PLAT_CHANGE_PASSWORD_NEEDED; // 0x0
		// static const ::System::Object ACCOUNT_PLAT_IN_GAME_CTRL_WITHIN_MANDATORYPERIOD; // 0x0
		// static const ::System::Object ACCOUNT_PLAT_RISK_NEED_VERIFY; // 0x0
		// static const ::System::Object ACCOUNT_PLAT_CROSS_LOGIN_INVALID_VERIFY; // 0x0
		// static const ::System::Object ACCOUNT_PLAT_CROSS_LOGIN_INVALID_PARAM; // 0x0
		// static const ::System::Object ACCOUNT_PLAT_INNER_UNKNOWN_ERROR; // 0x0
		// static const ::System::Object AGE_GATE_COMB0_REGISTER_RESTRICTED_CHALLENGE; // 0x0
		// static const ::System::Object AGE_GATE_NOT_ENABLE; // 0x0
		// static const ::System::Object AGE_GATE_LOGIN_RESTRICTED_CHALLENGE; // 0x0
		// static const ::System::Object AGE_GATE_REGISTER_RESTRICTED_CHALLENGE; // 0x0
		// static const ::System::Object AGE_GATE_INTERNAL_ERROR; // 0x0
		// static const ::System::Object AGE_GATE_INVALID_PARAMS; // 0x0
		// static const ::System::Object AGE_GATE_INVALID_VERIFY; // 0x0
		// static const ::System::Object AGE_GATE_BIRTHDAY_ALREADY_SET; // 0x0
		// static const ::System::Object AGE_GATE_CHANGE_PARENT_EMAIL_NOT_ALLOWED; // 0x0
		// static const ::System::Object AGE_GATE_PARENT_EMAIL_RESEND_TOO_MANY; // 0x0
		// static const ::System::Object INVALID_AGE_GATE_EMAIL; // 0x0
		// static const ::System::Object AGE_GATE_INVALID_PAYLOAD; // 0x0
		// static const ::System::Object AGE_GATE_BR_CHALLENGE; // 0x0
		// static const ::System::Object AGE_GATE_TEEN_WITHOUT_VPC; // 0x0
		// static const ::System::Object AGE_GATE_NEED_PERMISSION; // 0x0
		// static const ::System::Object AGE_GATE_MINOR_WITHOUT_VPC; // 0x0
		// static const ::System::Object AGE_GATE_INVALID_GAME_TOKEN; // 0x0
		// static const ::System::Object UGC_TOKEN_INVALID; // 0x0
		// static const ::System::Object UGC_TOKEN_EXPIRED; // 0x0
		// static const ::System::Object ACTION_TICKET_EXPIRED; // 0x0
		// static const ::System::Object NEED_RISK_CHECK; // 0x0
		// static const ::System::Object ACCOUNT_PLAT_PROTECT_BAN; // 0x0
		// static const ::System::Object ACCOUNT_PLAT_NEW_USER_OS; // 0x0
		// static const ::System::Object ACCOUNT_BOUND_TO_OTHER_CX; // 0x0
		// static const ::System::Object CX_BOUND_TO_OTHER_ACCOUNT; // 0x0
		// static const ::System::Object CHANNEL_AUTH_TICKET_INVALID; // 0x0
		// static const ::System::Object AID_BOUND_TO_OTHER_STEAM_ACCOUNT; // 0x0
		// static const ::System::Object STEAM_ACCOUNT_BOUND_TO_OTHER_AID; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SERVERCODE_CTOR_OFFSET))(this);
		}

	};
}
