#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_tlsctx_callbacks.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_tlsctx_protocolrange.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_CREATE_CLIENT_T_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EA8FE70)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_CREATE_CLIENT_T_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EA8FF40)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_CREATE_CLIENT_T_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EA8F890)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_CREATE_CLIENT_T__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA8F880)

namespace Mono::Unity
{
	inline static constexpr unsigned int UnityTls_unitytls_interface_struct_unitytls_tlsctx_create_client_t_TypeDefinitionIndex = 2564;

	class UnityTls_unitytls_interface_struct_unitytls_tlsctx_create_client_t : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_CREATE_CLIENT_T__CTOR_OFFSET))(this, object, method);
		}

		::PVOID Invoke(::Mono::Unity::UnityTls_unitytls_tlsctx_protocolrange supportedProtocols, ::Mono::Unity::UnityTls_unitytls_tlsctx_callbacks callbacks, ::PVOID cn, ::System::IntPtr cnLen, ::PVOID errorState)
		{
			return ((::PVOID(*)(::PVOID, ::Mono::Unity::UnityTls_unitytls_tlsctx_protocolrange, ::Mono::Unity::UnityTls_unitytls_tlsctx_callbacks, ::PVOID, ::System::IntPtr, ::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_CREATE_CLIENT_T_INVOKE_OFFSET))(this, supportedProtocols, callbacks, cn, cnLen, errorState);
		}

		::System::IAsyncResult* BeginInvoke(::Mono::Unity::UnityTls_unitytls_tlsctx_protocolrange supportedProtocols, ::Mono::Unity::UnityTls_unitytls_tlsctx_callbacks callbacks, ::PVOID cn, ::System::IntPtr cnLen, ::PVOID errorState, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Mono::Unity::UnityTls_unitytls_tlsctx_protocolrange, ::Mono::Unity::UnityTls_unitytls_tlsctx_callbacks, ::PVOID, ::System::IntPtr, ::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_CREATE_CLIENT_T_BEGININVOKE_OFFSET))(this, supportedProtocols, callbacks, cn, cnLen, errorState, callback, object);
		}

		::PVOID EndInvoke(::System::IAsyncResult* result)
		{
			return ((::PVOID(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_CREATE_CLIENT_T_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
