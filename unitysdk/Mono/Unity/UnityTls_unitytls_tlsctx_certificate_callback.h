#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_CERTIFICATE_CALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EFD0BE0)
#define MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_CERTIFICATE_CALLBACK_CTOR_OFFSET UNITYSDK_OFFSET(0x1EFD0B10)
#define MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_CERTIFICATE_CALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EFD0CA0)
#define MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_CERTIFICATE_CALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EFD0B90)

namespace Mono::Unity
{
	inline static constexpr unsigned int UnityTls_unitytls_tlsctx_certificate_callback_TypeDefinitionIndex = 2367;

	class UnityTls_unitytls_tlsctx_certificate_callback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_CERTIFICATE_CALLBACK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::PVOID a1, ::PVOID a2, ::PVOID a3, ::System::IntPtr a4, ::PVOID a5, ::System::IntPtr a6, ::PVOID a7, ::PVOID a8, ::PVOID a9)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::PVOID, ::PVOID, ::System::IntPtr, ::PVOID, ::System::IntPtr, ::PVOID, ::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_CERTIFICATE_CALLBACK_INVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::IAsyncResult* BeginInvoke(::PVOID a1, ::PVOID a2, ::PVOID a3, ::System::IntPtr a4, ::PVOID a5, ::System::IntPtr a6, ::PVOID a7, ::PVOID a8, ::PVOID a9, ::System::AsyncCallback* a10, ::System::Object* a11)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::PVOID, ::PVOID, ::PVOID, ::System::IntPtr, ::PVOID, ::System::IntPtr, ::PVOID, ::PVOID, ::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_CERTIFICATE_CALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_CERTIFICATE_CALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}

	};
}
