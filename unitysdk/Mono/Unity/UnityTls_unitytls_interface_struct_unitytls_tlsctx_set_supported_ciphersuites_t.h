#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_SET_SUPPORTED_CIPHERSUITES_T_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1DEEEA70)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_SET_SUPPORTED_CIPHERSUITES_T_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1DEEEAF0)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_SET_SUPPORTED_CIPHERSUITES_T_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DEEE6E0)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_SET_SUPPORTED_CIPHERSUITES_T__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEEE6D0)

namespace Mono::Unity
{
	inline static constexpr unsigned int UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_supported_ciphersuites_t_TypeDefinitionIndex = 2569;

	class UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_supported_ciphersuites_t : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_SET_SUPPORTED_CIPHERSUITES_T__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::PVOID ctx, ::PVOID supportedCiphersuites, ::System::IntPtr supportedCiphersuitesLen, ::PVOID errorState)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::PVOID, ::System::IntPtr, ::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_SET_SUPPORTED_CIPHERSUITES_T_INVOKE_OFFSET))(this, ctx, supportedCiphersuites, supportedCiphersuitesLen, errorState);
		}

		::System::IAsyncResult* BeginInvoke(::PVOID ctx, ::PVOID supportedCiphersuites, ::System::IntPtr supportedCiphersuitesLen, ::PVOID errorState, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::PVOID, ::PVOID, ::System::IntPtr, ::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_SET_SUPPORTED_CIPHERSUITES_T_BEGININVOKE_OFFSET))(this, ctx, supportedCiphersuites, supportedCiphersuitesLen, errorState, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_SET_SUPPORTED_CIPHERSUITES_T_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
