#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
namespace Mono::Unity { class UnityTls_unitytls_tlsctx_trace_callback; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_SET_TRACE_CALLBACK_T_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EFCFD60)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_SET_TRACE_CALLBACK_T_CTOR_OFFSET UNITYSDK_OFFSET(0x1EFCFCB0)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_SET_TRACE_CALLBACK_T_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EFCFDB0)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_SET_TRACE_CALLBACK_T_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EFCFD30)

namespace Mono::Unity
{
	inline static constexpr unsigned int UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_trace_callback_t_TypeDefinitionIndex = 2390;

	class UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_trace_callback_t : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_SET_TRACE_CALLBACK_T_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::PVOID a1, ::Mono::Unity::UnityTls_unitytls_tlsctx_trace_callback* a2, ::PVOID a3, ::PVOID a4)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::Mono::Unity::UnityTls_unitytls_tlsctx_trace_callback*, ::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_SET_TRACE_CALLBACK_T_INVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::IAsyncResult* BeginInvoke(::PVOID a1, ::Mono::Unity::UnityTls_unitytls_tlsctx_trace_callback* a2, ::PVOID a3, ::PVOID a4, ::System::AsyncCallback* a5, ::System::Object* a6)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::PVOID, ::Mono::Unity::UnityTls_unitytls_tlsctx_trace_callback*, ::PVOID, ::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_SET_TRACE_CALLBACK_T_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_SET_TRACE_CALLBACK_T_ENDINVOKE_OFFSET))(this, a1);
		}

	};
}
