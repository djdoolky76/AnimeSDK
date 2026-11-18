#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Interface/MonoSslPolicyErrors.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define MONO_SECURITY_INTERFACE_VALIDATIONRESULT_GET_ERRORCODE_OFFSET UNITYSDK_OFFSET(0x1F7FD340)
#define MONO_SECURITY_INTERFACE_VALIDATIONRESULT_GET_POLICYERRORS_OFFSET UNITYSDK_OFFSET(0x1F7FD350)
#define MONO_SECURITY_INTERFACE_VALIDATIONRESULT_GET_TRUSTED_OFFSET UNITYSDK_OFFSET(0x1F7FD320)
#define MONO_SECURITY_INTERFACE_VALIDATIONRESULT_GET_USERDENIED_OFFSET UNITYSDK_OFFSET(0x1F7FD330)
#define MONO_SECURITY_INTERFACE_VALIDATIONRESULT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F7FD310)
#define MONO_SECURITY_INTERFACE_VALIDATIONRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7FD2F0)

namespace Mono::Security::Interface
{
	inline static constexpr unsigned int ValidationResult_TypeDefinitionIndex = 2426;

	class ValidationResult : public ::System::Object
	{
	public:
		::System::Nullable_1<::Mono::Security::Interface::MonoSslPolicyErrors> policy_errors; // 0x10
		::System::Int32 error_code; // 0x18
		::System::Boolean trusted; // 0x1C
		::System::Boolean user_denied; // 0x1D

		::System::Void _ctor(::System::Boolean trusted, ::System::Boolean user_denied, ::System::Int32 error_code, ::System::Nullable_1<::Mono::Security::Interface::MonoSslPolicyErrors> policy_errors)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Nullable_1<::Mono::Security::Interface::MonoSslPolicyErrors>))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_VALIDATIONRESULT__CTOR_OFFSET))(this, trusted, user_denied, error_code, policy_errors);
		}

		::System::Void _ctor_1(::System::Boolean trusted, ::System::Boolean user_denied, ::System::Int32 error_code)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_VALIDATIONRESULT__CTOR_1_OFFSET))(this, trusted, user_denied, error_code);
		}

		::System::Boolean get_Trusted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_VALIDATIONRESULT_GET_TRUSTED_OFFSET))(this);
		}

		::System::Boolean get_UserDenied()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_VALIDATIONRESULT_GET_USERDENIED_OFFSET))(this);
		}

		::System::Int32 get_ErrorCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_VALIDATIONRESULT_GET_ERRORCODE_OFFSET))(this);
		}

		::System::Nullable_1<::Mono::Security::Interface::MonoSslPolicyErrors> get_PolicyErrors()
		{
			return ((::System::Nullable_1<::Mono::Security::Interface::MonoSslPolicyErrors>(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_VALIDATIONRESULT_GET_POLICYERRORS_OFFSET))(this);
		}
	};
}
