#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define MONO_SECURITY_X509_PKCS12_16AB12B131A4D249_DERIVEBYTES_ADJUST_OFFSET UNITYSDK_OFFSET(0x1D1CE7A0)
#define MONO_SECURITY_X509_PKCS12_16AB12B131A4D249_DERIVEBYTES_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1CEF00)
#define MONO_SECURITY_X509_PKCS12_16AB12B131A4D249_DERIVEBYTES_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1C5A60)
#define MONO_SECURITY_X509_PKCS12_16AB12B131A4D249_DERIVEBYTES_DERIVEIV_OFFSET UNITYSDK_OFFSET(0x1D1C5CC0)
#define MONO_SECURITY_X509_PKCS12_16AB12B131A4D249_DERIVEBYTES_DERIVEKEY_OFFSET UNITYSDK_OFFSET(0x1D1C5C50)
#define MONO_SECURITY_X509_PKCS12_16AB12B131A4D249_DERIVEBYTES_DERIVEMAC_OFFSET UNITYSDK_OFFSET(0x1D1C82C0)
#define MONO_SECURITY_X509_PKCS12_16AB12B131A4D249_DERIVEBYTES_DERIVE_OFFSET UNITYSDK_OFFSET(0x1D1CE860)
#define MONO_SECURITY_X509_PKCS12_16AB12B131A4D249_DERIVEBYTES_SET_HASHNAME_OFFSET UNITYSDK_OFFSET(0x1D1CE780)
#define MONO_SECURITY_X509_PKCS12_16AB12B131A4D249_DERIVEBYTES_SET_ITERATIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1D1CE790)
#define MONO_SECURITY_X509_PKCS12_16AB12B131A4D249_DERIVEBYTES_SET_PASSWORD_OFFSET UNITYSDK_OFFSET(0x1D1C5A70)
#define MONO_SECURITY_X509_PKCS12_16AB12B131A4D249_DERIVEBYTES_SET_SALT_OFFSET UNITYSDK_OFFSET(0x1D1C5B70)

namespace Mono::Security::X509
{
	inline static constexpr unsigned int PKCS12_16AB12B131A4D249_DeriveBytes_TypeDefinitionIndex = 2265;

	class PKCS12_16AB12B131A4D249_DeriveBytes : public ::System::Object
	{
	public:
		::System::String* _hashName; // 0x10
		::Il2CppArray<::System::Byte>* _password; // 0x18
		::Il2CppArray<::System::Byte>* _salt; // 0x20
		::System::Int32 _iterations; // 0x28
		static ::Il2CppArray<::System::Byte>** StaticGet_ivDiversifier()
		{
			return (::Il2CppArray<::System::Byte>**)UnitySDK::FromName("Mono.Security.X509", "DeriveBytes")->GetStaticField(0x27730);
		}

		static ::Il2CppArray<::System::Byte>** StaticGet_macDiversifier()
		{
			return (::Il2CppArray<::System::Byte>**)UnitySDK::FromName("Mono.Security.X509", "DeriveBytes")->GetStaticField(0x27738);
		}

		static ::Il2CppArray<::System::Byte>** StaticGet_keyDiversifier()
		{
			return (::Il2CppArray<::System::Byte>**)UnitySDK::FromName("Mono.Security.X509", "DeriveBytes")->GetStaticField(0x27740);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_16AB12B131A4D249_DERIVEBYTES_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_16AB12B131A4D249_DERIVEBYTES_CCTOR_OFFSET))();
		}

		::System::Void set_HashName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_16AB12B131A4D249_DERIVEBYTES_SET_HASHNAME_OFFSET))(this, a1);
		}

		::System::Void set_IterationCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_16AB12B131A4D249_DERIVEBYTES_SET_ITERATIONCOUNT_OFFSET))(this, a1);
		}

		::System::Void set_Password(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_16AB12B131A4D249_DERIVEBYTES_SET_PASSWORD_OFFSET))(this, a1);
		}

		::System::Void set_Salt(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_16AB12B131A4D249_DERIVEBYTES_SET_SALT_OFFSET))(this, a1);
		}

		::System::Void Adjust(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::Il2CppArray<::System::Byte>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_16AB12B131A4D249_DERIVEBYTES_ADJUST_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::System::Byte>* Derive(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_16AB12B131A4D249_DERIVEBYTES_DERIVE_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::Byte>* DeriveKey(::System::Int32 a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_16AB12B131A4D249_DERIVEBYTES_DERIVEKEY_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Byte>* DeriveIV(::System::Int32 a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_16AB12B131A4D249_DERIVEBYTES_DERIVEIV_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Byte>* DeriveMAC(::System::Int32 a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_16AB12B131A4D249_DERIVEBYTES_DERIVEMAC_OFFSET))(this, a1);
		}

	};
}
