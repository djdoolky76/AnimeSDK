#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Security/Cryptography/DSAParameters.h"
namespace System { class String; }
namespace System::Collections { class ArrayList; }
namespace System::Security::Cryptography { class DSA; }
namespace System::Security::Cryptography { class RSA; }

#define MONO_SECURITY_CRYPTOGRAPHY_PKCS8_PRIVATEKEYINFO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C07A7B0)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS8_PRIVATEKEYINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C07A750)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS8_PRIVATEKEYINFO_DECODEDSA_OFFSET UNITYSDK_OFFSET(0x1C07B3F0)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS8_PRIVATEKEYINFO_DECODERSA_OFFSET UNITYSDK_OFFSET(0x1C07ADD0)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS8_PRIVATEKEYINFO_DECODE_OFFSET UNITYSDK_OFFSET(0x1C07A820)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS8_PRIVATEKEYINFO_GET_PRIVATEKEY_OFFSET UNITYSDK_OFFSET(0x1C07ABE0)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS8_PRIVATEKEYINFO_NORMALIZE_OFFSET UNITYSDK_OFFSET(0x1C07AD30)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS8_PRIVATEKEYINFO_REMOVELEADINGZERO_OFFSET UNITYSDK_OFFSET(0x1C07ACC0)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int PKCS8_PrivateKeyInfo_TypeDefinitionIndex = 73;

	class PKCS8_PrivateKeyInfo : public ::System::Object
	{
	public:
		::System::String* _algorithm; // 0x10
		::Il2CppArray<::System::Byte>* _key; // 0x18
		::System::Collections::ArrayList* _list; // 0x20
		::System::Int32 _version; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS8_PRIVATEKEYINFO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS8_PRIVATEKEYINFO_CTOR_1_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Byte>* get_PrivateKey()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS8_PRIVATEKEYINFO_GET_PRIVATEKEY_OFFSET))(this);
		}

		::System::Void Decode(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS8_PRIVATEKEYINFO_DECODE_OFFSET))(this, a1);
		}

		static ::Il2CppArray<::System::Byte>* RemoveLeadingZero(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS8_PRIVATEKEYINFO_REMOVELEADINGZERO_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Byte>* Normalize(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS8_PRIVATEKEYINFO_NORMALIZE_OFFSET))(a1, a2);
		}

		static ::System::Security::Cryptography::RSA* DecodeRSA(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Security::Cryptography::RSA*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS8_PRIVATEKEYINFO_DECODERSA_OFFSET))(a1);
		}

		static ::System::Security::Cryptography::DSA* DecodeDSA(::Il2CppArray<::System::Byte>* a1, ::System::Security::Cryptography::DSAParameters a2)
		{
			return ((::System::Security::Cryptography::DSA*(*)(::Il2CppArray<::System::Byte>*, ::System::Security::Cryptography::DSAParameters))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS8_PRIVATEKEYINFO_DECODEDSA_OFFSET))(a1, a2);
		}

	};
}
