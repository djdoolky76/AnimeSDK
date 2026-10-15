#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Security::Cryptography { class HashAlgorithm; }
namespace System::Security::Cryptography { class RSA; }
namespace System::Security::Cryptography { class RandomNumberGenerator; }

#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C079FE0)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_COMPARE_OFFSET UNITYSDK_OFFSET(0x1C078250)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_CREATEFROMNAME_OFFSET UNITYSDK_OFFSET(0x1C079B80)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_DECRYPT_OAEP_OFFSET UNITYSDK_OFFSET(0x1C078F20)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_ENCODE_V15_OFFSET UNITYSDK_OFFSET(0x1C079800)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_ENCRYPT_OAEP_OFFSET UNITYSDK_OFFSET(0x1C0788E0)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_GETEMPTYHASH_OFFSET UNITYSDK_OFFSET(0x1C078350)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_I2OSP_1_OFFSET UNITYSDK_OFFSET(0x1C078640)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_I2OSP_OFFSET UNITYSDK_OFFSET(0x1C078500)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_MGF1_OFFSET UNITYSDK_OFFSET(0x1C078D00)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_OS2IP_OFFSET UNITYSDK_OFFSET(0x1C0786A0)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_RSADP_OFFSET UNITYSDK_OFFSET(0x1C0787C0)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_RSAEP_OFFSET UNITYSDK_OFFSET(0x1C078730)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_RSAVP1_OFFSET UNITYSDK_OFFSET(0x1C078850)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_VERIFY_V15_1_OFFSET UNITYSDK_OFFSET(0x1C0794A0)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_VERIFY_V15_OFFSET UNITYSDK_OFFSET(0x1C079420)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_XOR_OFFSET UNITYSDK_OFFSET(0x1C0782C0)

namespace Mono::Security::Cryptography
{
	class PKCS1 : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_emptySHA1()
		{
			return (::Il2CppArray<::System::Byte>**)UnitySDK::FromName("Mono.Security.Cryptography", "PKCS1")->GetStaticField(0xBB20);
		}

		static ::Il2CppArray<::System::Byte>** StaticGet_emptySHA384()
		{
			return (::Il2CppArray<::System::Byte>**)UnitySDK::FromName("Mono.Security.Cryptography", "PKCS1")->GetStaticField(0xBB28);
		}

		static ::Il2CppArray<::System::Byte>** StaticGet_emptySHA512()
		{
			return (::Il2CppArray<::System::Byte>**)UnitySDK::FromName("Mono.Security.Cryptography", "PKCS1")->GetStaticField(0xBB30);
		}

		static ::Il2CppArray<::System::Byte>** StaticGet_emptySHA256()
		{
			return (::Il2CppArray<::System::Byte>**)UnitySDK::FromName("Mono.Security.Cryptography", "PKCS1")->GetStaticField(0xBB38);
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
