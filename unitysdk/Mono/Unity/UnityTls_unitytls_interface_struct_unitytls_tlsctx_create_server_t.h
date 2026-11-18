#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_tlsctx_callbacks.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_tlsctx_protocolrange.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_CREATE_SERVER_T_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D91FF60)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_CREATE_SERVER_T_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D920040)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_CREATE_SERVER_T_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D91F980)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_CREATE_SERVER_T__CTOR_OFFSET UNITYSDK_OFFSET(0x1D91F970)

namespace Mono::Unity
{
	inline static constexpr unsigned int UnityTls_unitytls_interface_struct_unitytls_tlsctx_create_server_t_TypeDefinitionIndex = 2563;

	class UnityTls_unitytls_interface_struct_unitytls_tlsctx_create_server_t : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_CREATE_SERVER_T__CTOR_OFFSET))(this, object, method);
		}

		::PVOID Invoke(::Mono::Unity::UnityTls_unitytls_tlsctx_protocolrange supportedProtocols, ::Mono::Unity::UnityTls_unitytls_tlsctx_callbacks callbacks, ::System::UInt64 certChain, ::System::UInt64 leafCertificateKey, ::PVOID errorState)
		{
			return ((::PVOID(*)(::PVOID, ::Mono::Unity::UnityTls_unitytls_tlsctx_protocolrange, ::Mono::Unity::UnityTls_unitytls_tlsctx_callbacks, ::System::UInt64, ::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_CREATE_SERVER_T_INVOKE_OFFSET))(this, supportedProtocols, callbacks, certChain, leafCertificateKey, errorState);
		}

		::System::IAsyncResult* BeginInvoke(::Mono::Unity::UnityTls_unitytls_tlsctx_protocolrange supportedProtocols, ::Mono::Unity::UnityTls_unitytls_tlsctx_callbacks callbacks, ::System::UInt64 certChain, ::System::UInt64 leafCertificateKey, ::PVOID errorState, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Mono::Unity::UnityTls_unitytls_tlsctx_protocolrange, ::Mono::Unity::UnityTls_unitytls_tlsctx_callbacks, ::System::UInt64, ::System::UInt64, ::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_CREATE_SERVER_T_BEGININVOKE_OFFSET))(this, supportedProtocols, callbacks, certChain, leafCertificateKey, errorState, callback, object);
		}

		::PVOID EndInvoke(::System::IAsyncResult* result)
		{
			return ((::PVOID(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_CREATE_SERVER_T_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
