#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_KEY_PARSE_PEM_T_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EFA1010)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_KEY_PARSE_PEM_T_CTOR_OFFSET UNITYSDK_OFFSET(0x1EFA0F60)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_KEY_PARSE_PEM_T_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EFA10B0)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_KEY_PARSE_PEM_T_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EFA0FE0)

namespace Mono::Unity
{
	inline static constexpr unsigned int UnityTls_unitytls_interface_struct_unitytls_key_parse_pem_t_TypeDefinitionIndex = 2375;

	class UnityTls_unitytls_interface_struct_unitytls_key_parse_pem_t : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_KEY_PARSE_PEM_T_CTOR_OFFSET))(this, a1, a2);
		}

		::PVOID Invoke(::PVOID a1, ::System::IntPtr a2, ::PVOID a3, ::System::IntPtr a4, ::PVOID a5)
		{
			return ((::PVOID(*)(::PVOID, ::PVOID, ::System::IntPtr, ::PVOID, ::System::IntPtr, ::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_KEY_PARSE_PEM_T_INVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::IAsyncResult* BeginInvoke(::PVOID a1, ::System::IntPtr a2, ::PVOID a3, ::System::IntPtr a4, ::PVOID a5, ::System::AsyncCallback* a6, ::System::Object* a7)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::PVOID, ::System::IntPtr, ::PVOID, ::System::IntPtr, ::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_KEY_PARSE_PEM_T_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::PVOID EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::PVOID(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_KEY_PARSE_PEM_T_ENDINVOKE_OFFSET))(this, a1);
		}

	};
}
