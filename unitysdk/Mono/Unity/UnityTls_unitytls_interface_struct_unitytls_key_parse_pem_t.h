#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_KEY_PARSE_PEM_T_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1DAD5EA0)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_KEY_PARSE_PEM_T_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1DAD5F40)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_KEY_PARSE_PEM_T_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DAD5AB0)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_KEY_PARSE_PEM_T__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAD5AA0)

namespace Mono::Unity
{
	inline static constexpr unsigned int UnityTls_unitytls_interface_struct_unitytls_key_parse_pem_t_TypeDefinitionIndex = 2551;

	class UnityTls_unitytls_interface_struct_unitytls_key_parse_pem_t : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_KEY_PARSE_PEM_T__CTOR_OFFSET))(this, object, method);
		}

		::PVOID Invoke(::PVOID buffer, ::System::IntPtr bufferLen, ::PVOID password, ::System::IntPtr passwordLen, ::PVOID errorState)
		{
			return ((::PVOID(*)(::PVOID, ::PVOID, ::System::IntPtr, ::PVOID, ::System::IntPtr, ::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_KEY_PARSE_PEM_T_INVOKE_OFFSET))(this, buffer, bufferLen, password, passwordLen, errorState);
		}

		::System::IAsyncResult* BeginInvoke(::PVOID buffer, ::System::IntPtr bufferLen, ::PVOID password, ::System::IntPtr passwordLen, ::PVOID errorState, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::PVOID, ::System::IntPtr, ::PVOID, ::System::IntPtr, ::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_KEY_PARSE_PEM_T_BEGININVOKE_OFFSET))(this, buffer, bufferLen, password, passwordLen, errorState, callback, object);
		}

		::PVOID EndInvoke(::System::IAsyncResult* result)
		{
			return ((::PVOID(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_KEY_PARSE_PEM_T_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
