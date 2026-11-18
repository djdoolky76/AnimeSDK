#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_x509_ref.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509LIST_APPEND_T_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CF9F680)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509LIST_APPEND_T_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CF9F710)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509LIST_APPEND_T_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF9F330)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509LIST_APPEND_T__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF9F320)

namespace Mono::Unity
{
	inline static constexpr unsigned int UnityTls_unitytls_interface_struct_unitytls_x509list_append_t_TypeDefinitionIndex = 2557;

	class UnityTls_unitytls_interface_struct_unitytls_x509list_append_t : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509LIST_APPEND_T__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::PVOID list, ::Mono::Unity::UnityTls_unitytls_x509_ref cert, ::PVOID errorState)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::Mono::Unity::UnityTls_unitytls_x509_ref, ::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509LIST_APPEND_T_INVOKE_OFFSET))(this, list, cert, errorState);
		}

		::System::IAsyncResult* BeginInvoke(::PVOID list, ::Mono::Unity::UnityTls_unitytls_x509_ref cert, ::PVOID errorState, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::PVOID, ::Mono::Unity::UnityTls_unitytls_x509_ref, ::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509LIST_APPEND_T_BEGININVOKE_OFFSET))(this, list, cert, errorState, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509LIST_APPEND_T_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
