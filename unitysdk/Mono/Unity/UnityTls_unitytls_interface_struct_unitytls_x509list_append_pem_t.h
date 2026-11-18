#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509LIST_APPEND_PEM_T_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CBD2660)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509LIST_APPEND_PEM_T_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CBD26E0)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509LIST_APPEND_PEM_T_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CBD22D0)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509LIST_APPEND_PEM_T__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBD22C0)

namespace Mono::Unity
{
	inline static constexpr unsigned int UnityTls_unitytls_interface_struct_unitytls_x509list_append_pem_t_TypeDefinitionIndex = 2559;

	class UnityTls_unitytls_interface_struct_unitytls_x509list_append_pem_t : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509LIST_APPEND_PEM_T__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::PVOID list, ::PVOID buffer, ::System::IntPtr bufferLen, ::PVOID errorState)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::PVOID, ::System::IntPtr, ::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509LIST_APPEND_PEM_T_INVOKE_OFFSET))(this, list, buffer, bufferLen, errorState);
		}

		::System::IAsyncResult* BeginInvoke(::PVOID list, ::PVOID buffer, ::System::IntPtr bufferLen, ::PVOID errorState, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::PVOID, ::PVOID, ::System::IntPtr, ::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509LIST_APPEND_PEM_T_BEGININVOKE_OFFSET))(this, list, buffer, bufferLen, errorState, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509LIST_APPEND_PEM_T_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
