#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_DERIVEBYTES_ADJUST_OFFSET UNITYSDK_OFFSET(0x1FD3B860)
#define MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_DERIVEBYTES_DERIVEIV_OFFSET UNITYSDK_OFFSET(0x1FD3C010)
#define MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_DERIVEBYTES_DERIVEKEY_OFFSET UNITYSDK_OFFSET(0x1FD3BFA0)
#define MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_DERIVEBYTES_DERIVEMAC_OFFSET UNITYSDK_OFFSET(0x1FD3C080)
#define MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_DERIVEBYTES_DERIVE_OFFSET UNITYSDK_OFFSET(0x1FD3B960)
#define MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_DERIVEBYTES_GET_HASHNAME_OFFSET UNITYSDK_OFFSET(0x1FD3B390)
#define MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_DERIVEBYTES_GET_ITERATIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1FD3B3B0)
#define MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_DERIVEBYTES_GET_PASSWORD_OFFSET UNITYSDK_OFFSET(0x1FD3B3D0)
#define MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_DERIVEBYTES_GET_SALT_OFFSET UNITYSDK_OFFSET(0x1FD3B620)
#define MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_DERIVEBYTES_SET_HASHNAME_OFFSET UNITYSDK_OFFSET(0x1FD3B3A0)
#define MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_DERIVEBYTES_SET_ITERATIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1FD3B3C0)
#define MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_DERIVEBYTES_SET_PASSWORD_OFFSET UNITYSDK_OFFSET(0x1FD3B4E0)
#define MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_DERIVEBYTES_SET_SALT_OFFSET UNITYSDK_OFFSET(0x1FD3B730)
#define MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_DERIVEBYTES__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD3C0F0)
#define MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_DERIVEBYTES__CTOR_OFFSET UNITYSDK_OFFSET(0x1FD3B380)

namespace Mono::Security::X509
{
	inline static constexpr unsigned int PKCS12_FA2D60DBEB87147A_DeriveBytes_TypeDefinitionIndex = 2289;

	class PKCS12_FA2D60DBEB87147A_DeriveBytes : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_macDiversifier()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(PKCS12_FA2D60DBEB87147A_DeriveBytes_TypeDefinitionIndex)->GetStaticField(0x2480);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_ivDiversifier()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(PKCS12_FA2D60DBEB87147A_DeriveBytes_TypeDefinitionIndex)->GetStaticField(0x2488);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_keyDiversifier()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(PKCS12_FA2D60DBEB87147A_DeriveBytes_TypeDefinitionIndex)->GetStaticField(0x2490);
		}
		::Il2CppArray<::System::Byte>* _password; // 0x10
		::System::String* _hashName; // 0x18
		::Il2CppArray<::System::Byte>* _salt; // 0x20
		::System::Int32 _iterations; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_DERIVEBYTES__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_DERIVEBYTES__CCTOR_OFFSET))();
		}

		::System::String* get_HashName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_DERIVEBYTES_GET_HASHNAME_OFFSET))(this);
		}

		::System::Void set_HashName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_DERIVEBYTES_SET_HASHNAME_OFFSET))(this, value);
		}

		::System::Int32 get_IterationCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_DERIVEBYTES_GET_ITERATIONCOUNT_OFFSET))(this);
		}

		::System::Void set_IterationCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_DERIVEBYTES_SET_ITERATIONCOUNT_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Byte>* get_Password()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_DERIVEBYTES_GET_PASSWORD_OFFSET))(this);
		}

		::System::Void set_Password(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_DERIVEBYTES_SET_PASSWORD_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Byte>* get_Salt()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_DERIVEBYTES_GET_SALT_OFFSET))(this);
		}

		::System::Void set_Salt(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_DERIVEBYTES_SET_SALT_OFFSET))(this, value);
		}

		::System::Void Adjust(::Il2CppArray<::System::Byte>* a, ::System::Int32 aOff, ::Il2CppArray<::System::Byte>* b)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_DERIVEBYTES_ADJUST_OFFSET))(this, a, aOff, b);
		}

		::Il2CppArray<::System::Byte>* Derive(::Il2CppArray<::System::Byte>* diversifier, ::System::Int32 n)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_DERIVEBYTES_DERIVE_OFFSET))(this, diversifier, n);
		}

		::Il2CppArray<::System::Byte>* DeriveKey(::System::Int32 size)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_DERIVEBYTES_DERIVEKEY_OFFSET))(this, size);
		}

		::Il2CppArray<::System::Byte>* DeriveIV(::System::Int32 size)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_DERIVEBYTES_DERIVEIV_OFFSET))(this, size);
		}

		::Il2CppArray<::System::Byte>* DeriveMAC(::System::Int32 size)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_DERIVEBYTES_DERIVEMAC_OFFSET))(this, size);
		}
	};
}
