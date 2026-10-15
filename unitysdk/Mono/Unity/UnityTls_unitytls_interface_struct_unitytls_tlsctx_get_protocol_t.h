#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_protocol.h"
#include "unitysdk/System/MulticastDelegate.h"
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_GET_PROTOCOL_T_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EFCF570)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_GET_PROTOCOL_T_CTOR_OFFSET UNITYSDK_OFFSET(0x1EFCF4E0)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_GET_PROTOCOL_T_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EFCF5B0)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_GET_PROTOCOL_T_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EFCF560)

namespace Mono::Unity
{
	inline static constexpr unsigned int UnityTls_unitytls_interface_struct_unitytls_tlsctx_get_protocol_t_TypeDefinitionIndex = 2394;

	class UnityTls_unitytls_interface_struct_unitytls_tlsctx_get_protocol_t : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_GET_PROTOCOL_T_CTOR_OFFSET))(this, a1, a2);
		}

		::Mono::Unity::UnityTls_unitytls_protocol Invoke(::PVOID a1, ::PVOID a2)
		{
			return ((::Mono::Unity::UnityTls_unitytls_protocol(*)(::PVOID, ::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_GET_PROTOCOL_T_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::PVOID a1, ::PVOID a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::PVOID, ::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_GET_PROTOCOL_T_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::Mono::Unity::UnityTls_unitytls_protocol EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::Mono::Unity::UnityTls_unitytls_protocol(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_GET_PROTOCOL_T_ENDINVOKE_OFFSET))(this, a1);
		}

	};
}
