#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_READ_CALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D876710)
#define MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_READ_CALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D876790)
#define MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_READ_CALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D876380)
#define MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_READ_CALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D876370)

namespace Mono::Unity
{
	inline static constexpr unsigned int UnityTls_unitytls_tlsctx_read_callback_TypeDefinitionIndex = 2541;

	class UnityTls_unitytls_tlsctx_read_callback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_READ_CALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::IntPtr Invoke(::PVOID userData, ::PVOID buffer, ::System::IntPtr bufferLen, ::PVOID errorState)
		{
			return ((::System::IntPtr(*)(::PVOID, ::PVOID, ::PVOID, ::System::IntPtr, ::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_READ_CALLBACK_INVOKE_OFFSET))(this, userData, buffer, bufferLen, errorState);
		}

		::System::IAsyncResult* BeginInvoke(::PVOID userData, ::PVOID buffer, ::System::IntPtr bufferLen, ::PVOID errorState, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::PVOID, ::PVOID, ::System::IntPtr, ::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_READ_CALLBACK_BEGININVOKE_OFFSET))(this, userData, buffer, bufferLen, errorState, callback, object);
		}

		::System::IntPtr EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_READ_CALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
