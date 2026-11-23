#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/HashAlgorithmName.h"
#include "unitysdk/System/Security/Cryptography/RSAEncryptionPaddingMode.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_COMBINEHASHCODES_OFFSET UNITYSDK_OFFSET(0x2E658E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_CREATEOAEP_OFFSET UNITYSDK_OFFSET(0x3BCDDB0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3BCDE90)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_EQUALS_OFFSET UNITYSDK_OFFSET(0x3BCDEF0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3BCDFB0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x3BCE260)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x3BCE280)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3BCE020)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING__CCTOR_OFFSET UNITYSDK_OFFSET(0x3BCE090)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3BCE230)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING__CTOR_OFFSET UNITYSDK_OFFSET(0x3BCE1F0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int RSAEncryptionPadding_TypeDefinitionIndex = 11233;

	class RSAEncryptionPadding : public ::System::Object
	{
	public:
		static ::System::Security::Cryptography::RSAEncryptionPadding** StaticGet_s_pkcs1()
		{
			return (::System::Security::Cryptography::RSAEncryptionPadding**)Il2CppClass::FromTypeDefinitionIndex(RSAEncryptionPadding_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Security::Cryptography::RSAEncryptionPadding** StaticGet_s_oaepSHA1()
		{
			return (::System::Security::Cryptography::RSAEncryptionPadding**)Il2CppClass::FromTypeDefinitionIndex(RSAEncryptionPadding_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		static ::System::Security::Cryptography::RSAEncryptionPadding** StaticGet_s_oaepSHA256()
		{
			return (::System::Security::Cryptography::RSAEncryptionPadding**)Il2CppClass::FromTypeDefinitionIndex(RSAEncryptionPadding_TypeDefinitionIndex)->GetStaticField(0x10);
		}
		static ::System::Security::Cryptography::RSAEncryptionPadding** StaticGet_s_oaepSHA384()
		{
			return (::System::Security::Cryptography::RSAEncryptionPadding**)Il2CppClass::FromTypeDefinitionIndex(RSAEncryptionPadding_TypeDefinitionIndex)->GetStaticField(0x18);
		}
		static ::System::Security::Cryptography::RSAEncryptionPadding** StaticGet_s_oaepSHA512()
		{
			return (::System::Security::Cryptography::RSAEncryptionPadding**)Il2CppClass::FromTypeDefinitionIndex(RSAEncryptionPadding_TypeDefinitionIndex)->GetStaticField(0x20);
		}
		::System::Security::Cryptography::RSAEncryptionPaddingMode _mode; // 0x10
		::System::Byte _padding0[0x4];
		::System::Security::Cryptography::HashAlgorithmName _oaepHashAlgorithm; // 0x18

		static ::System::Boolean op_Equality(::System::Security::Cryptography::RSAEncryptionPadding* A11D4EC92205DAEE, ::System::Security::Cryptography::RSAEncryptionPadding* F38046B0C91E49B1)
		{
			return ((::System::Boolean(*)(::System::Security::Cryptography::RSAEncryptionPadding*, ::System::Security::Cryptography::RSAEncryptionPadding*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_OP_EQUALITY_OFFSET))(A11D4EC92205DAEE, F38046B0C91E49B1);
		}

		::System::Boolean Equals(::System::Security::Cryptography::RSAEncryptionPadding* BEEE7A5A60941632)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Security::Cryptography::RSAEncryptionPadding*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_EQUALS_OFFSET))(this, BEEE7A5A60941632);
		}

		static ::System::Security::Cryptography::RSAEncryptionPadding* CreateOaep(::System::Security::Cryptography::HashAlgorithmName B3B952005B4CCF8B)
		{
			return ((::System::Security::Cryptography::RSAEncryptionPadding*(*)(::System::Security::Cryptography::HashAlgorithmName))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_CREATEOAEP_OFFSET))(B3B952005B4CCF8B);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_TOSTRING_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING__CCTOR_OFFSET))();
		}

		::System::Void _ctor(::System::Security::Cryptography::RSAEncryptionPaddingMode A84D57260767D5BD, ::System::Security::Cryptography::HashAlgorithmName F4AB3373BFA2EBE2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::RSAEncryptionPaddingMode, ::System::Security::Cryptography::HashAlgorithmName))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING__CTOR_OFFSET))(this, A84D57260767D5BD, F4AB3373BFA2EBE2);
		}

		static ::System::Boolean op_Inequality(::System::Security::Cryptography::RSAEncryptionPadding* A11D4EC92205DAEE, ::System::Security::Cryptography::RSAEncryptionPadding* F38046B0C91E49B1)
		{
			return ((::System::Boolean(*)(::System::Security::Cryptography::RSAEncryptionPadding*, ::System::Security::Cryptography::RSAEncryptionPadding*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_OP_INEQUALITY_OFFSET))(A11D4EC92205DAEE, F38046B0C91E49B1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_GETHASHCODE_OFFSET))(this);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING__CTOR_1_OFFSET))(this);
		}

		static ::System::Int32 CombineHashCodes(::System::Int32 B7D9F0E0B4E6BBE5, ::System::Int32 B4198727A7DF2CAD)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_COMBINEHASHCODES_OFFSET))(B7D9F0E0B4E6BBE5, B4198727A7DF2CAD);
		}

		::System::Boolean Equals_1(::System::Object* A86A90C31A146E9C)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_EQUALS_1_OFFSET))(this, A86A90C31A146E9C);
		}
	};
}
