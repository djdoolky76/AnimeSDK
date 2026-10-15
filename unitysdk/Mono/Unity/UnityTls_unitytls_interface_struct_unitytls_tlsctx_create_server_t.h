#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_tlsctx_callbacks.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_tlsctx_protocolrange.h"
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_CREATE_SERVER_T_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EFCF230)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_CREATE_SERVER_T_CTOR_OFFSET UNITYSDK_OFFSET(0x1EFCF170)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_CREATE_SERVER_T_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EFCF310)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_CREATE_SERVER_T_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EFCF1E0)

namespace Mono::Unity
{
	class UnityTls_unitytls_interface_struct_unitytls_tlsctx_create_server_t : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_CREATE_SERVER_T_CTOR_OFFSET))(this, a1, a2);
		}

		::PVOID Invoke(::Mono::Unity::UnityTls_unitytls_tlsctx_protocolrange a1, ::Mono::Unity::UnityTls_unitytls_tlsctx_callbacks a2, ::System::UInt64 a3, ::System::UInt64 a4, ::PVOID a5)
		{
			return ((::PVOID(*)(::PVOID, ::Mono::Unity::UnityTls_unitytls_tlsctx_protocolrange, ::Mono::Unity::UnityTls_unitytls_tlsctx_callbacks, ::System::UInt64, ::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_CREATE_SERVER_T_INVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::IAsyncResult* BeginInvoke(::Mono::Unity::UnityTls_unitytls_tlsctx_protocolrange a1, ::Mono::Unity::UnityTls_unitytls_tlsctx_callbacks a2, ::System::UInt64 a3, ::System::UInt64 a4, ::PVOID a5, ::System::AsyncCallback* a6, ::System::Object* a7)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Mono::Unity::UnityTls_unitytls_tlsctx_protocolrange, ::Mono::Unity::UnityTls_unitytls_tlsctx_callbacks, ::System::UInt64, ::System::UInt64, ::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_CREATE_SERVER_T_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::PVOID EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::PVOID(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_CREATE_SERVER_T_ENDINVOKE_OFFSET))(this, a1);
		}

	};
}
