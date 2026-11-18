#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

namespace Mono::Security::Protocol::Tls { class Context; }
namespace System { class String; }

#define MONO_SECURITY_PROTOCOL_TLS_CLIENTSESSIONINFO_CHECKDISPOSED_OFFSET UNITYSDK_OFFSET(0x1FFCF090)
#define MONO_SECURITY_PROTOCOL_TLS_CLIENTSESSIONINFO_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1FFCEE20)
#define MONO_SECURITY_PROTOCOL_TLS_CLIENTSESSIONINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1FFCF2B0)
#define MONO_SECURITY_PROTOCOL_TLS_CLIENTSESSIONINFO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1FFCED70)
#define MONO_SECURITY_PROTOCOL_TLS_CLIENTSESSIONINFO_GETCONTEXT_OFFSET UNITYSDK_OFFSET(0x1FFCEEE0)
#define MONO_SECURITY_PROTOCOL_TLS_CLIENTSESSIONINFO_GET_HOSTNAME_OFFSET UNITYSDK_OFFSET(0x1FFCEE70)
#define MONO_SECURITY_PROTOCOL_TLS_CLIENTSESSIONINFO_GET_ID_OFFSET UNITYSDK_OFFSET(0x1FFCEE80)
#define MONO_SECURITY_PROTOCOL_TLS_CLIENTSESSIONINFO_GET_VALID_OFFSET UNITYSDK_OFFSET(0x1FFCEE90)
#define MONO_SECURITY_PROTOCOL_TLS_CLIENTSESSIONINFO_KEEPALIVE_OFFSET UNITYSDK_OFFSET(0x1FFCEC70)
#define MONO_SECURITY_PROTOCOL_TLS_CLIENTSESSIONINFO_SETCONTEXT_OFFSET UNITYSDK_OFFSET(0x1FFCF100)
#define MONO_SECURITY_PROTOCOL_TLS_CLIENTSESSIONINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FFCEB30)
#define MONO_SECURITY_PROTOCOL_TLS_CLIENTSESSIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1FFCEC60)

namespace Mono::Security::Protocol::Tls
{
	inline static constexpr unsigned int ClientSessionInfo_TypeDefinitionIndex = 2351;

	class ClientSessionInfo : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_ValidityInterval()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ClientSessionInfo_TypeDefinitionIndex)->GetStaticField(0xF60);
		}
		// static const ::System::Int32 DefaultValidityInterval = 0xB4; // 0x0
		::System::String* host; // 0x10
		::Il2CppArray<::System::Byte>* masterSecret; // 0x18
		::Il2CppArray<::System::Byte>* sid; // 0x20
		::System::Boolean disposed; // 0x28
		::System::Byte _padding0[0x7];
		::System::DateTime validuntil; // 0x30

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CLIENTSESSIONINFO__CCTOR_OFFSET))();
		}

		::System::Void _ctor(::System::String* hostname, ::Il2CppArray<::System::Byte>* id)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CLIENTSESSIONINFO__CTOR_OFFSET))(this, hostname, id);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CLIENTSESSIONINFO_FINALIZE_OFFSET))(this);
		}

		::System::String* get_HostName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CLIENTSESSIONINFO_GET_HOSTNAME_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_Id()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CLIENTSESSIONINFO_GET_ID_OFFSET))(this);
		}

		::System::Boolean get_Valid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CLIENTSESSIONINFO_GET_VALID_OFFSET))(this);
		}

		::System::Void GetContext(::Mono::Security::Protocol::Tls::Context* context)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Tls::Context*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CLIENTSESSIONINFO_GETCONTEXT_OFFSET))(this, context);
		}

		::System::Void SetContext(::Mono::Security::Protocol::Tls::Context* context)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Tls::Context*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CLIENTSESSIONINFO_SETCONTEXT_OFFSET))(this, context);
		}

		::System::Void KeepAlive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CLIENTSESSIONINFO_KEEPALIVE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CLIENTSESSIONINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CLIENTSESSIONINFO_DISPOSE_1_OFFSET))(this, disposing);
		}

		::System::Void CheckDisposed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CLIENTSESSIONINFO_CHECKDISPOSED_OFFSET))(this);
		}
	};
}
