#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_x509list_ref.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_SERVER_REQUIRE_CLIENT_AUTHENTICATION_T_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1DF1A140)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_SERVER_REQUIRE_CLIENT_AUTHENTICATION_T_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1DF1A1D0)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_SERVER_REQUIRE_CLIENT_AUTHENTICATION_T_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DF19DF0)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_SERVER_REQUIRE_CLIENT_AUTHENTICATION_T__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF19DE0)

namespace Mono::Unity
{
	inline static constexpr unsigned int UnityTls_unitytls_interface_struct_unitytls_tlsctx_server_require_client_authentication_t_TypeDefinitionIndex = 2565;

	class UnityTls_unitytls_interface_struct_unitytls_tlsctx_server_require_client_authentication_t : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_SERVER_REQUIRE_CLIENT_AUTHENTICATION_T__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::PVOID ctx, ::Mono::Unity::UnityTls_unitytls_x509list_ref clientAuthCAList, ::PVOID errorState)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::Mono::Unity::UnityTls_unitytls_x509list_ref, ::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_SERVER_REQUIRE_CLIENT_AUTHENTICATION_T_INVOKE_OFFSET))(this, ctx, clientAuthCAList, errorState);
		}

		::System::IAsyncResult* BeginInvoke(::PVOID ctx, ::Mono::Unity::UnityTls_unitytls_x509list_ref clientAuthCAList, ::PVOID errorState, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::PVOID, ::Mono::Unity::UnityTls_unitytls_x509list_ref, ::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_SERVER_REQUIRE_CLIENT_AUTHENTICATION_T_BEGININVOKE_OFFSET))(this, ctx, clientAuthCAList, errorState, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_SERVER_REQUIRE_CLIENT_AUTHENTICATION_T_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
