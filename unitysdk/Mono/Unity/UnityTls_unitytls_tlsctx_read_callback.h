#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_READ_CALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EFD0D60)
#define MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_READ_CALLBACK_CTOR_OFFSET UNITYSDK_OFFSET(0x1EFD0CB0)
#define MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_READ_CALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EFD0DE0)
#define MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_READ_CALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EFD0D30)

namespace Mono::Unity
{
	inline static constexpr unsigned int UnityTls_unitytls_tlsctx_read_callback_TypeDefinitionIndex = 2365;

	class UnityTls_unitytls_tlsctx_read_callback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_READ_CALLBACK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::IntPtr Invoke(::PVOID a1, ::PVOID a2, ::System::IntPtr a3, ::PVOID a4)
		{
			return ((::System::IntPtr(*)(::PVOID, ::PVOID, ::PVOID, ::System::IntPtr, ::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_READ_CALLBACK_INVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::IAsyncResult* BeginInvoke(::PVOID a1, ::PVOID a2, ::System::IntPtr a3, ::PVOID a4, ::System::AsyncCallback* a5, ::System::Object* a6)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::PVOID, ::PVOID, ::System::IntPtr, ::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_READ_CALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::IntPtr EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_READ_CALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}

	};
}
