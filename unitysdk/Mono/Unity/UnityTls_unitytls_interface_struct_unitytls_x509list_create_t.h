#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509LIST_CREATE_T_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1DD2B820)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509LIST_CREATE_T_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1DD2B850)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509LIST_CREATE_T_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DD2B530)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509LIST_CREATE_T__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD2B520)

namespace Mono::Unity
{
	inline static constexpr unsigned int UnityTls_unitytls_interface_struct_unitytls_x509list_create_t_TypeDefinitionIndex = 2556;

	class UnityTls_unitytls_interface_struct_unitytls_x509list_create_t : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509LIST_CREATE_T__CTOR_OFFSET))(this, object, method);
		}

		::PVOID Invoke(::PVOID errorState)
		{
			return ((::PVOID(*)(::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509LIST_CREATE_T_INVOKE_OFFSET))(this, errorState);
		}

		::System::IAsyncResult* BeginInvoke(::PVOID errorState, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509LIST_CREATE_T_BEGININVOKE_OFFSET))(this, errorState, callback, object);
		}

		::PVOID EndInvoke(::System::IAsyncResult* result)
		{
			return ((::PVOID(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509LIST_CREATE_T_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
