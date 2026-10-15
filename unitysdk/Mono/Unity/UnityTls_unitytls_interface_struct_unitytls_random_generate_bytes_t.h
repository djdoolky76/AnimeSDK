#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_RANDOM_GENERATE_BYTES_T_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EFCEF50)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_RANDOM_GENERATE_BYTES_T_CTOR_OFFSET UNITYSDK_OFFSET(0x1EFCEEB0)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_RANDOM_GENERATE_BYTES_T_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EFCEFC0)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_RANDOM_GENERATE_BYTES_T_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EFCEF30)

namespace Mono::Unity
{
	inline static constexpr unsigned int UnityTls_unitytls_interface_struct_unitytls_random_generate_bytes_t_TypeDefinitionIndex = 2400;

	class UnityTls_unitytls_interface_struct_unitytls_random_generate_bytes_t : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_RANDOM_GENERATE_BYTES_T_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::PVOID a1, ::System::IntPtr a2, ::PVOID a3)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::System::IntPtr, ::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_RANDOM_GENERATE_BYTES_T_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::PVOID a1, ::System::IntPtr a2, ::PVOID a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::PVOID, ::System::IntPtr, ::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_RANDOM_GENERATE_BYTES_T_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_RANDOM_GENERATE_BYTES_T_ENDINVOKE_OFFSET))(this, a1);
		}

	};
}
