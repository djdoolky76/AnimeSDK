#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509LIST_CREATE_T_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EFD0450)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509LIST_CREATE_T_CTOR_OFFSET UNITYSDK_OFFSET(0x1EFD03D0)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509LIST_CREATE_T_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EFD0480)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509LIST_CREATE_T_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EFD0440)

namespace Mono::Unity
{
	inline static constexpr unsigned int UnityTls_unitytls_interface_struct_unitytls_x509list_create_t_TypeDefinitionIndex = 2380;

	class UnityTls_unitytls_interface_struct_unitytls_x509list_create_t : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509LIST_CREATE_T_CTOR_OFFSET))(this, a1, a2);
		}

		::PVOID Invoke(::PVOID a1)
		{
			return ((::PVOID(*)(::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509LIST_CREATE_T_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::PVOID a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509LIST_CREATE_T_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::PVOID EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::PVOID(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509LIST_CREATE_T_ENDINVOKE_OFFSET))(this, a1);
		}

	};
}
