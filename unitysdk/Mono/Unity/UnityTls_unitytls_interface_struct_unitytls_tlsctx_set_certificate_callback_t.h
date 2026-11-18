#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Mono::Unity { class UnityTls_unitytls_tlsctx_certificate_callback; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_SET_CERTIFICATE_CALLBACK_T_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EC471E0)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_SET_CERTIFICATE_CALLBACK_T_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EC47230)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_SET_CERTIFICATE_CALLBACK_T_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EC46E50)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_SET_CERTIFICATE_CALLBACK_T__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC46E40)

namespace Mono::Unity
{
	inline static constexpr unsigned int UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_certificate_callback_t_TypeDefinitionIndex = 2566;

	class UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_certificate_callback_t : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_SET_CERTIFICATE_CALLBACK_T__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::PVOID ctx, ::Mono::Unity::UnityTls_unitytls_tlsctx_certificate_callback* cb, ::PVOID userData, ::PVOID errorState)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::Mono::Unity::UnityTls_unitytls_tlsctx_certificate_callback*, ::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_SET_CERTIFICATE_CALLBACK_T_INVOKE_OFFSET))(this, ctx, cb, userData, errorState);
		}

		::System::IAsyncResult* BeginInvoke(::PVOID ctx, ::Mono::Unity::UnityTls_unitytls_tlsctx_certificate_callback* cb, ::PVOID userData, ::PVOID errorState, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::PVOID, ::Mono::Unity::UnityTls_unitytls_tlsctx_certificate_callback*, ::PVOID, ::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_SET_CERTIFICATE_CALLBACK_T_BEGININVOKE_OFFSET))(this, ctx, cb, userData, errorState, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_SET_CERTIFICATE_CALLBACK_T_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
