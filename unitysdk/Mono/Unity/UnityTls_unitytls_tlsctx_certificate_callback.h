#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_CERTIFICATE_CALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1E0AEFE0)
#define MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_CERTIFICATE_CALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1E0AF0A0)
#define MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_CERTIFICATE_CALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E0AEAB0)
#define MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_CERTIFICATE_CALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0AEAA0)

namespace Mono::Unity
{
	inline static constexpr unsigned int UnityTls_unitytls_tlsctx_certificate_callback_TypeDefinitionIndex = 2543;

	class UnityTls_unitytls_tlsctx_certificate_callback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_CERTIFICATE_CALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::PVOID userData, ::PVOID ctx, ::PVOID cn, ::System::IntPtr cnLen, ::PVOID caList, ::System::IntPtr caListLen, ::PVOID chain, ::PVOID key, ::PVOID errorState)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::PVOID, ::PVOID, ::System::IntPtr, ::PVOID, ::System::IntPtr, ::PVOID, ::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_CERTIFICATE_CALLBACK_INVOKE_OFFSET))(this, userData, ctx, cn, cnLen, caList, caListLen, chain, key, errorState);
		}

		::System::IAsyncResult* BeginInvoke(::PVOID userData, ::PVOID ctx, ::PVOID cn, ::System::IntPtr cnLen, ::PVOID caList, ::System::IntPtr caListLen, ::PVOID chain, ::PVOID key, ::PVOID errorState, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::PVOID, ::PVOID, ::PVOID, ::System::IntPtr, ::PVOID, ::System::IntPtr, ::PVOID, ::PVOID, ::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_CERTIFICATE_CALLBACK_BEGININVOKE_OFFSET))(this, userData, ctx, cn, cnLen, caList, caListLen, chain, key, errorState, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_CERTIFICATE_CALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
