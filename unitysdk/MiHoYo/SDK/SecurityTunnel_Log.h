#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/SecurityTunnel_ErrorCode.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class SecurityTunnel_OnLogErrorAction; }
namespace MiHoYo::SDK { class SecurityTunnel_OnLogErrorWithCodeAction; }
namespace MiHoYo::SDK { class SecurityTunnel_OnLogMessageAction; }
namespace MiHoYo::SDK { class SecurityTunnel_OnLogVerboseAction; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_SECURITYTUNNEL_LOG_ADD_ONLOGERRORWITHCODE_OFFSET UNITYSDK_OFFSET(0x1DD27350)
#define MIHOYO_SDK_SECURITYTUNNEL_LOG_ADD_ONLOGERROR_OFFSET UNITYSDK_OFFSET(0x1DD271F0)
#define MIHOYO_SDK_SECURITYTUNNEL_LOG_ADD_ONLOGMESSAGE_OFFSET UNITYSDK_OFFSET(0x1DD27090)
#define MIHOYO_SDK_SECURITYTUNNEL_LOG_ADD_ONLOGVERBOSE_OFFSET UNITYSDK_OFFSET(0x1DD26F30)
#define MIHOYO_SDK_SECURITYTUNNEL_LOG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD275B0)
#define MIHOYO_SDK_SECURITYTUNNEL_LOG_ERROR_1_OFFSET UNITYSDK_OFFSET(0x1DD274E0)
#define MIHOYO_SDK_SECURITYTUNNEL_LOG_ERROR_OFFSET UNITYSDK_OFFSET(0x1DD167D0)
#define MIHOYO_SDK_SECURITYTUNNEL_LOG_MESSAGE_OFFSET UNITYSDK_OFFSET(0x1DD15C20)
#define MIHOYO_SDK_SECURITYTUNNEL_LOG_REMOVE_ONLOGERRORWITHCODE_OFFSET UNITYSDK_OFFSET(0x1DD27400)
#define MIHOYO_SDK_SECURITYTUNNEL_LOG_REMOVE_ONLOGERROR_OFFSET UNITYSDK_OFFSET(0x1DD272A0)
#define MIHOYO_SDK_SECURITYTUNNEL_LOG_REMOVE_ONLOGMESSAGE_OFFSET UNITYSDK_OFFSET(0x1DD27140)
#define MIHOYO_SDK_SECURITYTUNNEL_LOG_REMOVE_ONLOGVERBOSE_OFFSET UNITYSDK_OFFSET(0x1DD26FE0)
#define MIHOYO_SDK_SECURITYTUNNEL_LOG_VERBOSE_OFFSET UNITYSDK_OFFSET(0x1DD18610)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SecurityTunnel_Log_TypeDefinitionIndex = 47434;

	class SecurityTunnel_Log : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::SecurityTunnel_OnLogMessageAction** StaticGet_OnLogMessage()
		{
			return (::MiHoYo::SDK::SecurityTunnel_OnLogMessageAction**)UnitySDK::FromName("MiHoYo.SDK", "Log")->GetStaticField(0x2AC30);
		}

		static ::MiHoYo::SDK::SecurityTunnel_OnLogVerboseAction** StaticGet_OnLogVerbose()
		{
			return (::MiHoYo::SDK::SecurityTunnel_OnLogVerboseAction**)UnitySDK::FromName("MiHoYo.SDK", "Log")->GetStaticField(0x2AC38);
		}

		static ::MiHoYo::SDK::SecurityTunnel_OnLogErrorWithCodeAction** StaticGet_OnLogErrorWithCode()
		{
			return (::MiHoYo::SDK::SecurityTunnel_OnLogErrorWithCodeAction**)UnitySDK::FromName("MiHoYo.SDK", "Log")->GetStaticField(0x2AC40);
		}

		static ::MiHoYo::SDK::SecurityTunnel_OnLogErrorAction** StaticGet_OnLogError()
		{
			return (::MiHoYo::SDK::SecurityTunnel_OnLogErrorAction**)UnitySDK::FromName("MiHoYo.SDK", "Log")->GetStaticField(0x2AC48);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_LOG_CTOR_OFFSET))(this);
		}

		static ::System::Void add_OnLogVerbose(::MiHoYo::SDK::SecurityTunnel_OnLogVerboseAction* a1)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::SecurityTunnel_OnLogVerboseAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_LOG_ADD_ONLOGVERBOSE_OFFSET))(a1);
		}

		static ::System::Void remove_OnLogVerbose(::MiHoYo::SDK::SecurityTunnel_OnLogVerboseAction* a1)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::SecurityTunnel_OnLogVerboseAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_LOG_REMOVE_ONLOGVERBOSE_OFFSET))(a1);
		}

		static ::System::Void add_OnLogMessage(::MiHoYo::SDK::SecurityTunnel_OnLogMessageAction* a1)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::SecurityTunnel_OnLogMessageAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_LOG_ADD_ONLOGMESSAGE_OFFSET))(a1);
		}

		static ::System::Void remove_OnLogMessage(::MiHoYo::SDK::SecurityTunnel_OnLogMessageAction* a1)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::SecurityTunnel_OnLogMessageAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_LOG_REMOVE_ONLOGMESSAGE_OFFSET))(a1);
		}

		static ::System::Void add_OnLogError(::MiHoYo::SDK::SecurityTunnel_OnLogErrorAction* a1)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::SecurityTunnel_OnLogErrorAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_LOG_ADD_ONLOGERROR_OFFSET))(a1);
		}

		static ::System::Void remove_OnLogError(::MiHoYo::SDK::SecurityTunnel_OnLogErrorAction* a1)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::SecurityTunnel_OnLogErrorAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_LOG_REMOVE_ONLOGERROR_OFFSET))(a1);
		}

		static ::System::Void add_OnLogErrorWithCode(::MiHoYo::SDK::SecurityTunnel_OnLogErrorWithCodeAction* a1)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::SecurityTunnel_OnLogErrorWithCodeAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_LOG_ADD_ONLOGERRORWITHCODE_OFFSET))(a1);
		}

		static ::System::Void remove_OnLogErrorWithCode(::MiHoYo::SDK::SecurityTunnel_OnLogErrorWithCodeAction* a1)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::SecurityTunnel_OnLogErrorWithCodeAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_LOG_REMOVE_ONLOGERRORWITHCODE_OFFSET))(a1);
		}

		static ::System::Void Verbose(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_LOG_VERBOSE_OFFSET))(a1, a2);
		}

		static ::System::Void Message(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_LOG_MESSAGE_OFFSET))(a1, a2);
		}

		static ::System::Void Error(::MiHoYo::SDK::SecurityTunnel_ErrorCode a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::SecurityTunnel_ErrorCode, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_LOG_ERROR_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Error_1(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_LOG_ERROR_1_OFFSET))(a1, a2);
		}

	};
}
