#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_x509verify_result.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_x509list_ref.h"
namespace Mono::Unity { class UnityTls_unitytls_x509verify_callback; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509VERIFY_DEFAULT_CA_T_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EFD0840)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509VERIFY_DEFAULT_CA_T_CTOR_OFFSET UNITYSDK_OFFSET(0x1EFD0790)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509VERIFY_DEFAULT_CA_T_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EFD0910)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509VERIFY_DEFAULT_CA_T_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EFD0800)

namespace Mono::Unity
{
	inline static constexpr unsigned int UnityTls_unitytls_interface_struct_unitytls_x509verify_default_ca_t_TypeDefinitionIndex = 2384;

	class UnityTls_unitytls_interface_struct_unitytls_x509verify_default_ca_t : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509VERIFY_DEFAULT_CA_T_CTOR_OFFSET))(this, a1, a2);
		}

		::Mono::Unity::UnityTls_unitytls_x509verify_result Invoke(::Mono::Unity::UnityTls_unitytls_x509list_ref a1, ::PVOID a2, ::System::IntPtr a3, ::Mono::Unity::UnityTls_unitytls_x509verify_callback* a4, ::PVOID a5, ::PVOID a6)
		{
			return ((::Mono::Unity::UnityTls_unitytls_x509verify_result(*)(::PVOID, ::Mono::Unity::UnityTls_unitytls_x509list_ref, ::PVOID, ::System::IntPtr, ::Mono::Unity::UnityTls_unitytls_x509verify_callback*, ::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509VERIFY_DEFAULT_CA_T_INVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::IAsyncResult* BeginInvoke(::Mono::Unity::UnityTls_unitytls_x509list_ref a1, ::PVOID a2, ::System::IntPtr a3, ::Mono::Unity::UnityTls_unitytls_x509verify_callback* a4, ::PVOID a5, ::PVOID a6, ::System::AsyncCallback* a7, ::System::Object* a8)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Mono::Unity::UnityTls_unitytls_x509list_ref, ::PVOID, ::System::IntPtr, ::Mono::Unity::UnityTls_unitytls_x509verify_callback*, ::PVOID, ::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509VERIFY_DEFAULT_CA_T_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::Mono::Unity::UnityTls_unitytls_x509verify_result EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::Mono::Unity::UnityTls_unitytls_x509verify_result(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509VERIFY_DEFAULT_CA_T_ENDINVOKE_OFFSET))(this, a1);
		}

	};
}
