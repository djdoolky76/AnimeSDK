#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_TRACE_CALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EFD0EC0)
#define MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_TRACE_CALLBACK_CTOR_OFFSET UNITYSDK_OFFSET(0x1EFD0E10)
#define MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_TRACE_CALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EFD0F30)
#define MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_TRACE_CALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EFD0E90)

namespace Mono::Unity
{
	class UnityTls_unitytls_tlsctx_trace_callback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_TRACE_CALLBACK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::PVOID a1, ::PVOID a2, ::PVOID a3, ::System::IntPtr a4)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::PVOID, ::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_TRACE_CALLBACK_INVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::IAsyncResult* BeginInvoke(::PVOID a1, ::PVOID a2, ::PVOID a3, ::System::IntPtr a4, ::System::AsyncCallback* a5, ::System::Object* a6)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::PVOID, ::PVOID, ::PVOID, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_TRACE_CALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_TRACE_CALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}

	};
}
