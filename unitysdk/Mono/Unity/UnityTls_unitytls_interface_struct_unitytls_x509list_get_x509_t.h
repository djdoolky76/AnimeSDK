#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_x509_ref.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_x509list_ref.h"
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509LIST_GET_X509_T_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EFD06C0)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509LIST_GET_X509_T_CTOR_OFFSET UNITYSDK_OFFSET(0x1EFD0650)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509LIST_GET_X509_T_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EFD0760)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509LIST_GET_X509_T_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EFCE1D0)

namespace Mono::Unity
{
	inline static constexpr unsigned int UnityTls_unitytls_interface_struct_unitytls_x509list_get_x509_t_TypeDefinitionIndex = 2379;

	class UnityTls_unitytls_interface_struct_unitytls_x509list_get_x509_t : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509LIST_GET_X509_T_CTOR_OFFSET))(this, a1, a2);
		}

		::Mono::Unity::UnityTls_unitytls_x509_ref Invoke(::Mono::Unity::UnityTls_unitytls_x509list_ref a1, ::System::IntPtr a2, ::PVOID a3)
		{
			return ((::Mono::Unity::UnityTls_unitytls_x509_ref(*)(::PVOID, ::Mono::Unity::UnityTls_unitytls_x509list_ref, ::System::IntPtr, ::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509LIST_GET_X509_T_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::Mono::Unity::UnityTls_unitytls_x509list_ref a1, ::System::IntPtr a2, ::PVOID a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Mono::Unity::UnityTls_unitytls_x509list_ref, ::System::IntPtr, ::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509LIST_GET_X509_T_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::Mono::Unity::UnityTls_unitytls_x509_ref EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::Mono::Unity::UnityTls_unitytls_x509_ref(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509LIST_GET_X509_T_ENDINVOKE_OFFSET))(this, a1);
		}

	};
}
