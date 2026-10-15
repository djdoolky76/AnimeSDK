#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_x509_ref.h"
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509_EXPORT_DER_T_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EFD00A0)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509_EXPORT_DER_T_CTOR_OFFSET UNITYSDK_OFFSET(0x1EFD0030)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509_EXPORT_DER_T_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EFD0150)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509_EXPORT_DER_T_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EFCE1F0)

namespace Mono::Unity
{
	inline static constexpr unsigned int UnityTls_unitytls_interface_struct_unitytls_x509_export_der_t_TypeDefinitionIndex = 2377;

	class UnityTls_unitytls_interface_struct_unitytls_x509_export_der_t : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509_EXPORT_DER_T_CTOR_OFFSET))(this, a1, a2);
		}

		::System::IntPtr Invoke(::Mono::Unity::UnityTls_unitytls_x509_ref a1, ::PVOID a2, ::System::IntPtr a3, ::PVOID a4)
		{
			return ((::System::IntPtr(*)(::PVOID, ::Mono::Unity::UnityTls_unitytls_x509_ref, ::PVOID, ::System::IntPtr, ::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509_EXPORT_DER_T_INVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::IAsyncResult* BeginInvoke(::Mono::Unity::UnityTls_unitytls_x509_ref a1, ::PVOID a2, ::System::IntPtr a3, ::PVOID a4, ::System::AsyncCallback* a5, ::System::Object* a6)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Mono::Unity::UnityTls_unitytls_x509_ref, ::PVOID, ::System::IntPtr, ::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509_EXPORT_DER_T_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::IntPtr EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509_EXPORT_DER_T_ENDINVOKE_OFFSET))(this, a1);
		}

	};
}
