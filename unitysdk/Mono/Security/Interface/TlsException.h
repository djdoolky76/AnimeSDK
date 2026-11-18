#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Interface/AlertDescription.h"
#include "unitysdk/Mono/Security/Interface/AlertLevel.h"
#include "unitysdk/System/Exception.h"

namespace Mono::Security::Interface { class Alert; }
namespace System { class Object; }
namespace System { class String; }

#define MONO_SECURITY_INTERFACE_TLSEXCEPTION_GET_ALERT_OFFSET UNITYSDK_OFFSET(0x1F8A8E80)
#define MONO_SECURITY_INTERFACE_TLSEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F8A8FB0)
#define MONO_SECURITY_INTERFACE_TLSEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1F8A9040)
#define MONO_SECURITY_INTERFACE_TLSEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1F8A9090)
#define MONO_SECURITY_INTERFACE_TLSEXCEPTION__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1F8A9110)
#define MONO_SECURITY_INTERFACE_TLSEXCEPTION__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1F8A9230)
#define MONO_SECURITY_INTERFACE_TLSEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1F8A8E90)

namespace Mono::Security::Interface
{
	inline static constexpr unsigned int TlsException_TypeDefinitionIndex = 2443;

	class TlsException : public ::System::Exception
	{
	public:
		::Mono::Security::Interface::Alert* alert; // 0x88

		::System::Void _ctor(::Mono::Security::Interface::Alert* alert)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Interface::Alert*))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_TLSEXCEPTION__CTOR_OFFSET))(this, alert);
		}

		::System::Void _ctor_1(::Mono::Security::Interface::Alert* alert, ::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Interface::Alert*, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_TLSEXCEPTION__CTOR_1_OFFSET))(this, alert, message);
		}

		::System::Void _ctor_2(::Mono::Security::Interface::AlertLevel level, ::Mono::Security::Interface::AlertDescription description)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Interface::AlertLevel, ::Mono::Security::Interface::AlertDescription))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_TLSEXCEPTION__CTOR_2_OFFSET))(this, level, description);
		}

		::System::Void _ctor_3(::Mono::Security::Interface::AlertDescription description)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Interface::AlertDescription))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_TLSEXCEPTION__CTOR_3_OFFSET))(this, description);
		}

		::System::Void _ctor_4(::Mono::Security::Interface::AlertDescription description, ::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Interface::AlertDescription, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_TLSEXCEPTION__CTOR_4_OFFSET))(this, description, message);
		}

		::System::Void _ctor_5(::Mono::Security::Interface::AlertDescription description, ::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Interface::AlertDescription, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_TLSEXCEPTION__CTOR_5_OFFSET))(this, description, format, args);
		}

		::Mono::Security::Interface::Alert* get_Alert()
		{
			return ((::Mono::Security::Interface::Alert*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_TLSEXCEPTION_GET_ALERT_OFFSET))(this);
		}
	};
}
