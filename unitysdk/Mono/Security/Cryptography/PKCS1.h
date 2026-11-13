#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Security::Cryptography { class HashAlgorithm; }
namespace System::Security::Cryptography { class RSA; }
namespace System::Security::Cryptography { class RandomNumberGenerator; }

#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_CCTOR_OFFSET UNITYSDK_OFFSET(0x17AE0540)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_COMPARE_OFFSET UNITYSDK_OFFSET(0x17ADE760)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_CREATEFROMNAME_OFFSET UNITYSDK_OFFSET(0x17AE0090)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_DECRYPT_OAEP_OFFSET UNITYSDK_OFFSET(0x17ADF430)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_ENCODE_V15_OFFSET UNITYSDK_OFFSET(0x17ADFD10)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_ENCRYPT_OAEP_OFFSET UNITYSDK_OFFSET(0x17ADEDF0)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_GETEMPTYHASH_OFFSET UNITYSDK_OFFSET(0x17ADE860)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_I2OSP_1_OFFSET UNITYSDK_OFFSET(0x17ADEB50)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_I2OSP_OFFSET UNITYSDK_OFFSET(0x17ADEA10)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_MGF1_OFFSET UNITYSDK_OFFSET(0x17ADF210)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_OS2IP_OFFSET UNITYSDK_OFFSET(0x17ADEBB0)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_RSADP_OFFSET UNITYSDK_OFFSET(0x17ADECD0)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_RSAEP_OFFSET UNITYSDK_OFFSET(0x17ADEC40)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_RSAVP1_OFFSET UNITYSDK_OFFSET(0x17ADED60)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_VERIFY_V15_1_OFFSET UNITYSDK_OFFSET(0x17ADF9B0)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_VERIFY_V15_OFFSET UNITYSDK_OFFSET(0x17ADF930)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_XOR_OFFSET UNITYSDK_OFFSET(0x17ADE7D0)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int PKCS1_TypeDefinitionIndex = 71;

	class PKCS1 : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_emptySHA512()
		{
			return (::Il2CppArray<::System::Byte>**)UnitySDK::FromName("Mono.Security.Cryptography", "PKCS1")->GetStaticField(0xB1C0);
		}

		static ::Il2CppArray<::System::Byte>** StaticGet_emptySHA1()
		{
			return (::Il2CppArray<::System::Byte>**)UnitySDK::FromName("Mono.Security.Cryptography", "PKCS1")->GetStaticField(0xB1C8);
		}

		static ::Il2CppArray<::System::Byte>** StaticGet_emptySHA256()
		{
			return (::Il2CppArray<::System::Byte>**)UnitySDK::FromName("Mono.Security.Cryptography", "PKCS1")->GetStaticField(0xB1D0);
		}

		static ::Il2CppArray<::System::Byte>** StaticGet_emptySHA384()
		{
			return (::Il2CppArray<::System::Byte>**)UnitySDK::FromName("Mono.Security.Cryptography", "PKCS1")->GetStaticField(0xB1D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1_CCTOR_OFFSET))();
		}

		static ::System::Boolean Compare(::Il2CppArray<::System::Byte>* a1, ::Il2CppArray<::System::Byte>* a2)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1_COMPARE_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::Byte>* xor(::Il2CppArray<::System::Byte>* a1, ::Il2CppArray<::System::Byte>* a2)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1_XOR_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::Byte>* GetEmptyHash(::System::Security::Cryptography::HashAlgorithm* a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Security::Cryptography::HashAlgorithm*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1_GETEMPTYHASH_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Byte>* I2OSP(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1_I2OSP_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::Byte>* I2OSP_1(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1_I2OSP_1_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::Byte>* OS2IP(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1_OS2IP_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Byte>* RSAEP(::System::Security::Cryptography::RSA* a1, ::Il2CppArray<::System::Byte>* a2)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Security::Cryptography::RSA*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1_RSAEP_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::Byte>* RSADP(::System::Security::Cryptography::RSA* a1, ::Il2CppArray<::System::Byte>* a2)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Security::Cryptography::RSA*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1_RSADP_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::Byte>* RSAVP1(::System::Security::Cryptography::RSA* a1, ::Il2CppArray<::System::Byte>* a2)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Security::Cryptography::RSA*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1_RSAVP1_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::Byte>* Encrypt_OAEP(::System::Security::Cryptography::RSA* a1, ::System::Security::Cryptography::HashAlgorithm* a2, ::System::Security::Cryptography::RandomNumberGenerator* a3, ::Il2CppArray<::System::Byte>* a4)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Security::Cryptography::RSA*, ::System::Security::Cryptography::HashAlgorithm*, ::System::Security::Cryptography::RandomNumberGenerator*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1_ENCRYPT_OAEP_OFFSET))(a1, a2, a3, a4);
		}

		static ::Il2CppArray<::System::Byte>* Decrypt_OAEP(::System::Security::Cryptography::RSA* a1, ::System::Security::Cryptography::HashAlgorithm* a2, ::Il2CppArray<::System::Byte>* a3)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Security::Cryptography::RSA*, ::System::Security::Cryptography::HashAlgorithm*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1_DECRYPT_OAEP_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean Verify_v15(::System::Security::Cryptography::RSA* a1, ::System::Security::Cryptography::HashAlgorithm* a2, ::Il2CppArray<::System::Byte>* a3, ::Il2CppArray<::System::Byte>* a4)
		{
			return ((::System::Boolean(*)(::System::Security::Cryptography::RSA*, ::System::Security::Cryptography::HashAlgorithm*, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1_VERIFY_V15_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Verify_v15_1(::System::Security::Cryptography::RSA* a1, ::System::Security::Cryptography::HashAlgorithm* a2, ::Il2CppArray<::System::Byte>* a3, ::Il2CppArray<::System::Byte>* a4, ::System::Boolean a5)
		{
			return ((::System::Boolean(*)(::System::Security::Cryptography::RSA*, ::System::Security::Cryptography::HashAlgorithm*, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1_VERIFY_V15_1_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::Il2CppArray<::System::Byte>* Encode_v15(::System::Security::Cryptography::HashAlgorithm* a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Security::Cryptography::HashAlgorithm*, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1_ENCODE_V15_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::System::Byte>* MGF1(::System::Security::Cryptography::HashAlgorithm* a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Security::Cryptography::HashAlgorithm*, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1_MGF1_OFFSET))(a1, a2, a3);
		}

		static ::System::Security::Cryptography::HashAlgorithm* CreateFromName(::System::String* a1)
		{
			return ((::System::Security::Cryptography::HashAlgorithm*(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1_CREATEFROMNAME_OFFSET))(a1);
		}

	};
}
