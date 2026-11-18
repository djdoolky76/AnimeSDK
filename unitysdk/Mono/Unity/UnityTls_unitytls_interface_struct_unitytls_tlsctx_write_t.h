#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_WRITE_T_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1E0AE470)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_WRITE_T_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1E0AE4F0)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_WRITE_T_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E0AE0E0)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_WRITE_T__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0AE0D0)

namespace Mono::Unity
{
	inline static constexpr unsigned int UnityTls_unitytls_interface_struct_unitytls_tlsctx_write_t_TypeDefinitionIndex = 2574;

	class UnityTls_unitytls_interface_struct_unitytls_tlsctx_write_t : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_WRITE_T__CTOR_OFFSET))(this, object, method);
		}

		::System::IntPtr Invoke(::PVOID ctx, ::PVOID data, ::System::IntPtr bufferLen, ::PVOID errorState)
		{
			return ((::System::IntPtr(*)(::PVOID, ::PVOID, ::PVOID, ::System::IntPtr, ::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_WRITE_T_INVOKE_OFFSET))(this, ctx, data, bufferLen, errorState);
		}

		::System::IAsyncResult* BeginInvoke(::PVOID ctx, ::PVOID data, ::System::IntPtr bufferLen, ::PVOID errorState, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::PVOID, ::PVOID, ::System::IntPtr, ::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_WRITE_T_BEGININVOKE_OFFSET))(this, ctx, data, bufferLen, errorState, callback, object);
		}

		::System::IntPtr EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_WRITE_T_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
