#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_x509verify_result.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_x509_ref.h"
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MONO_UNITY_UNITYTLS_UNITYTLS_X509VERIFY_CALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EFD12B0)
#define MONO_UNITY_UNITYTLS_UNITYTLS_X509VERIFY_CALLBACK_CTOR_OFFSET UNITYSDK_OFFSET(0x1EFD1200)
#define MONO_UNITY_UNITYTLS_UNITYTLS_X509VERIFY_CALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EFD1360)
#define MONO_UNITY_UNITYTLS_UNITYTLS_X509VERIFY_CALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EFD1280)

namespace Mono::Unity
{
	class UnityTls_unitytls_x509verify_callback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_X509VERIFY_CALLBACK_CTOR_OFFSET))(this, a1, a2);
		}

		::Mono::Unity::UnityTls_unitytls_x509verify_result Invoke(::PVOID a1, ::Mono::Unity::UnityTls_unitytls_x509_ref a2, ::Mono::Unity::UnityTls_unitytls_x509verify_result a3, ::PVOID a4)
		{
			return ((::Mono::Unity::UnityTls_unitytls_x509verify_result(*)(::PVOID, ::PVOID, ::Mono::Unity::UnityTls_unitytls_x509_ref, ::Mono::Unity::UnityTls_unitytls_x509verify_result, ::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_X509VERIFY_CALLBACK_INVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::IAsyncResult* BeginInvoke(::PVOID a1, ::Mono::Unity::UnityTls_unitytls_x509_ref a2, ::Mono::Unity::UnityTls_unitytls_x509verify_result a3, ::PVOID a4, ::System::AsyncCallback* a5, ::System::Object* a6)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::PVOID, ::Mono::Unity::UnityTls_unitytls_x509_ref, ::Mono::Unity::UnityTls_unitytls_x509verify_result, ::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_X509VERIFY_CALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::Mono::Unity::UnityTls_unitytls_x509verify_result EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::Mono::Unity::UnityTls_unitytls_x509verify_result(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_X509VERIFY_CALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}

	};
}
