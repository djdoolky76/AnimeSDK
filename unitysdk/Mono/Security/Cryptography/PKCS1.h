#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Security::Cryptography { class HashAlgorithm; }
namespace System::Security::Cryptography { class RSA; }
namespace System::Security::Cryptography { class RandomNumberGenerator; }

#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_COMPARE_OFFSET UNITYSDK_OFFSET(0x3B3A8D0)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_CREATEFROMNAME_OFFSET UNITYSDK_OFFSET(0x3D3C880)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_DECRYPT_OAEP_OFFSET UNITYSDK_OFFSET(0x3D3CBD0)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_ENCODE_V15_OFFSET UNITYSDK_OFFSET(0x3D3D1D0)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_ENCRYPT_OAEP_OFFSET UNITYSDK_OFFSET(0x3D3D520)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_GETEMPTYHASH_OFFSET UNITYSDK_OFFSET(0x3D3DA60)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_I2OSP_1_OFFSET UNITYSDK_OFFSET(0x3D3DCB0)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_I2OSP_OFFSET UNITYSDK_OFFSET(0x3D3DC30)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_MGF1_OFFSET UNITYSDK_OFFSET(0x3D3DD90)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_OS2IP_OFFSET UNITYSDK_OFFSET(0x3D3E080)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_RSADP_OFFSET UNITYSDK_OFFSET(0x3D3E150)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_RSAEP_OFFSET UNITYSDK_OFFSET(0x3B3B6A0)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_RSAVP1_OFFSET UNITYSDK_OFFSET(0x3B3B6A0)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_VERIFY_V15_1_OFFSET UNITYSDK_OFFSET(0x3D3E180)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_VERIFY_V15_2_OFFSET UNITYSDK_OFFSET(0x3D3E510)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_VERIFY_V15_OFFSET UNITYSDK_OFFSET(0x3D3E630)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_XOR_OFFSET UNITYSDK_OFFSET(0x3D3E850)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1__CCTOR_OFFSET UNITYSDK_OFFSET(0x3D3E6C0)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int PKCS1_TypeDefinitionIndex = 10927;

	class PKCS1 : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_emptySHA1()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(PKCS1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_emptySHA256()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(PKCS1_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_emptySHA384()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(PKCS1_TypeDefinitionIndex)->GetStaticField(0x10);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_emptySHA512()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(PKCS1_TypeDefinitionIndex)->GetStaticField(0x18);
		}

		static ::Il2CppArray<::System::Byte>* Encrypt_OAEP(::System::Security::Cryptography::RSA* FC17E705F01EA4DC, ::System::Security::Cryptography::HashAlgorithm* ED6B739E3493B1E8, ::System::Security::Cryptography::RandomNumberGenerator* E3CA290995975D9C, ::Il2CppArray<::System::Byte>* F620C2DBB7259ADB)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Security::Cryptography::RSA*, ::System::Security::Cryptography::HashAlgorithm*, ::System::Security::Cryptography::RandomNumberGenerator*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1_ENCRYPT_OAEP_OFFSET))(FC17E705F01EA4DC, ED6B739E3493B1E8, E3CA290995975D9C, F620C2DBB7259ADB);
		}

		static ::Il2CppArray<::System::Byte>* Encode_v15(::System::Security::Cryptography::HashAlgorithm* ED6B739E3493B1E8, ::Il2CppArray<::System::Byte>* BF6E9880E0FFEC4B, ::System::Int32 E3A4851F3A74CE71)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Security::Cryptography::HashAlgorithm*, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1_ENCODE_V15_OFFSET))(ED6B739E3493B1E8, BF6E9880E0FFEC4B, E3A4851F3A74CE71);
		}

		static ::System::Boolean Verify_v15(::System::Security::Cryptography::RSA* FC17E705F01EA4DC, ::System::Security::Cryptography::HashAlgorithm* ED6B739E3493B1E8, ::Il2CppArray<::System::Byte>* BF6E9880E0FFEC4B, ::Il2CppArray<::System::Byte>* ADA902CFC22F5C58)
		{
			return ((::System::Boolean(*)(::System::Security::Cryptography::RSA*, ::System::Security::Cryptography::HashAlgorithm*, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1_VERIFY_V15_OFFSET))(FC17E705F01EA4DC, ED6B739E3493B1E8, BF6E9880E0FFEC4B, ADA902CFC22F5C58);
		}

		static ::Il2CppArray<::System::Byte>* RSADP(::System::Security::Cryptography::RSA* FC17E705F01EA4DC, ::Il2CppArray<::System::Byte>* A97F5B807CC19082)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Security::Cryptography::RSA*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1_RSADP_OFFSET))(FC17E705F01EA4DC, A97F5B807CC19082);
		}

		static ::Il2CppArray<::System::Byte>* OS2IP(::Il2CppArray<::System::Byte>* BB8C609F76620E45)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1_OS2IP_OFFSET))(BB8C609F76620E45);
		}

		static ::System::Boolean Compare(::Il2CppArray<::System::Byte>* A4F1E8AE2EAC885C, ::Il2CppArray<::System::Byte>* F0DD69B27EFAB788)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1_COMPARE_OFFSET))(A4F1E8AE2EAC885C, F0DD69B27EFAB788);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1__CCTOR_OFFSET))();
		}

		static ::Il2CppArray<::System::Byte>* I2OSP(::Il2CppArray<::System::Byte>* BB8C609F76620E45, ::System::Int32 F54AF627638DE3C9)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1_I2OSP_OFFSET))(BB8C609F76620E45, F54AF627638DE3C9);
		}

		static ::Il2CppArray<::System::Byte>* RSAEP(::System::Security::Cryptography::RSA* FC17E705F01EA4DC, ::Il2CppArray<::System::Byte>* B8A196AEAF73E28B)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Security::Cryptography::RSA*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1_RSAEP_OFFSET))(FC17E705F01EA4DC, B8A196AEAF73E28B);
		}

		static ::Il2CppArray<::System::Byte>* GetEmptyHash(::System::Security::Cryptography::HashAlgorithm* ED6B739E3493B1E8)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Security::Cryptography::HashAlgorithm*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1_GETEMPTYHASH_OFFSET))(ED6B739E3493B1E8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1__CTOR_OFFSET))(this);
		}

		static ::Il2CppArray<::System::Byte>* I2OSP_1(::System::Int32 BB8C609F76620E45, ::System::Int32 F54AF627638DE3C9)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1_I2OSP_1_OFFSET))(BB8C609F76620E45, F54AF627638DE3C9);
		}

		static ::Il2CppArray<::System::Byte>* xor(::Il2CppArray<::System::Byte>* A4F1E8AE2EAC885C, ::Il2CppArray<::System::Byte>* F0DD69B27EFAB788)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1_XOR_OFFSET))(A4F1E8AE2EAC885C, F0DD69B27EFAB788);
		}

		static ::System::Boolean Verify_v15_1(::System::Security::Cryptography::RSA* FC17E705F01EA4DC, ::System::Security::Cryptography::HashAlgorithm* ED6B739E3493B1E8, ::Il2CppArray<::System::Byte>* BF6E9880E0FFEC4B, ::Il2CppArray<::System::Byte>* ADA902CFC22F5C58, ::System::Boolean FD61BEFAA5DF5DE9)
		{
			return ((::System::Boolean(*)(::System::Security::Cryptography::RSA*, ::System::Security::Cryptography::HashAlgorithm*, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1_VERIFY_V15_1_OFFSET))(FC17E705F01EA4DC, ED6B739E3493B1E8, BF6E9880E0FFEC4B, ADA902CFC22F5C58, FD61BEFAA5DF5DE9);
		}

		static ::Il2CppArray<::System::Byte>* Decrypt_OAEP(::System::Security::Cryptography::RSA* FC17E705F01EA4DC, ::System::Security::Cryptography::HashAlgorithm* ED6B739E3493B1E8, ::Il2CppArray<::System::Byte>* FF370D5436AFF6B9)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Security::Cryptography::RSA*, ::System::Security::Cryptography::HashAlgorithm*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1_DECRYPT_OAEP_OFFSET))(FC17E705F01EA4DC, ED6B739E3493B1E8, FF370D5436AFF6B9);
		}

		static ::Il2CppArray<::System::Byte>* RSAVP1(::System::Security::Cryptography::RSA* FC17E705F01EA4DC, ::Il2CppArray<::System::Byte>* B9AEC57275825552)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Security::Cryptography::RSA*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1_RSAVP1_OFFSET))(FC17E705F01EA4DC, B9AEC57275825552);
		}

		static ::Il2CppArray<::System::Byte>* MGF1(::System::Security::Cryptography::HashAlgorithm* ED6B739E3493B1E8, ::Il2CppArray<::System::Byte>* B625B3D830811FC3, ::System::Int32 B9AFA0A18D91EFCC)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Security::Cryptography::HashAlgorithm*, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1_MGF1_OFFSET))(ED6B739E3493B1E8, B625B3D830811FC3, B9AFA0A18D91EFCC);
		}

		static ::System::Boolean Verify_v15_2(::System::Security::Cryptography::RSA* FC17E705F01EA4DC, ::System::String* A21259221BC53061, ::Il2CppArray<::System::Byte>* BF6E9880E0FFEC4B, ::Il2CppArray<::System::Byte>* ADA902CFC22F5C58)
		{
			return ((::System::Boolean(*)(::System::Security::Cryptography::RSA*, ::System::String*, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1_VERIFY_V15_2_OFFSET))(FC17E705F01EA4DC, A21259221BC53061, BF6E9880E0FFEC4B, ADA902CFC22F5C58);
		}

		static ::System::Security::Cryptography::HashAlgorithm* CreateFromName(::System::String* F79B4D487F303AB2)
		{
			return ((::System::Security::Cryptography::HashAlgorithm*(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1_CREATEFROMNAME_OFFSET))(F79B4D487F303AB2);
		}
	};
}
