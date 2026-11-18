#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/RSA.h"
#include "unitysdk/System/Security/Cryptography/RSAParameters.h"

namespace Mono::Math { class BigInteger_195A9C52A7AD8B6F; }
namespace Mono::Security::Cryptography { class RSAManaged_90255A423B470C9A_KeyGeneratedEventHandler; }
namespace System { class String; }

#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_90255A423B470C9A_ADD_KEYGENERATED_OFFSET UNITYSDK_OFFSET(0x1F8D94B0)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_90255A423B470C9A_DECRYPTVALUE_OFFSET UNITYSDK_OFFSET(0x1F8D8210)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_90255A423B470C9A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F8D7450)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_90255A423B470C9A_ENCRYPTVALUE_OFFSET UNITYSDK_OFFSET(0x1F8D89E0)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_90255A423B470C9A_EXPORTPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1F8D8BC0)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_90255A423B470C9A_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1F8D73E0)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_90255A423B470C9A_GENERATEKEYPAIR_OFFSET UNITYSDK_OFFSET(0x1F8D79B0)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_90255A423B470C9A_GETPADDEDVALUE_OFFSET UNITYSDK_OFFSET(0x1F8D8940)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_90255A423B470C9A_GET_ISCRTPOSSIBLE_OFFSET UNITYSDK_OFFSET(0x1F8D9BD0)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_90255A423B470C9A_GET_KEYEXCHANGEALGORITHM_OFFSET UNITYSDK_OFFSET(0x1F8D8100)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_90255A423B470C9A_GET_KEYSIZE_OFFSET UNITYSDK_OFFSET(0x1F8D8070)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_90255A423B470C9A_GET_PUBLICONLY_OFFSET UNITYSDK_OFFSET(0x1F8D8140)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_90255A423B470C9A_GET_SIGNATUREALGORITHM_OFFSET UNITYSDK_OFFSET(0x1F8D81D0)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_90255A423B470C9A_GET_USEKEYBLINDING_OFFSET UNITYSDK_OFFSET(0x1F8D9BB0)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_90255A423B470C9A_IMPORTPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1F8D8F30)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_90255A423B470C9A_REMOVE_KEYGENERATED_OFFSET UNITYSDK_OFFSET(0x1F8D9530)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_90255A423B470C9A_SET_USEKEYBLINDING_OFFSET UNITYSDK_OFFSET(0x1F8D9BC0)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_90255A423B470C9A_TOXMLSTRING_OFFSET UNITYSDK_OFFSET(0x1F8D95B0)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_90255A423B470C9A__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F8D7340)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_90255A423B470C9A__CTOR_OFFSET UNITYSDK_OFFSET(0x1F8D7330)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int RSAManaged_90255A423B470C9A_TypeDefinitionIndex = 2466;

	class RSAManaged_90255A423B470C9A : public ::System::Security::Cryptography::RSA
	{
	public:
		// static const ::System::Int32 defaultKeySize = 0x400; // 0x0
		::Mono::Math::BigInteger_195A9C52A7AD8B6F* qInv; // 0x20
		::Mono::Math::BigInteger_195A9C52A7AD8B6F* d; // 0x28
		::Mono::Math::BigInteger_195A9C52A7AD8B6F* p; // 0x30
		::Mono::Math::BigInteger_195A9C52A7AD8B6F* dq; // 0x38
		::Mono::Math::BigInteger_195A9C52A7AD8B6F* q; // 0x40
		::Mono::Math::BigInteger_195A9C52A7AD8B6F* e; // 0x48
		::Mono::Security::Cryptography::RSAManaged_90255A423B470C9A_KeyGeneratedEventHandler* KeyGenerated; // 0x50
		::Mono::Math::BigInteger_195A9C52A7AD8B6F* n; // 0x58
		::Mono::Math::BigInteger_195A9C52A7AD8B6F* dp; // 0x60
		::System::Boolean keypairGenerated; // 0x68
		::System::Boolean m_disposed; // 0x69
		::System::Boolean keyBlinding; // 0x6A
		::System::Boolean isCRTpossible; // 0x6B

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_90255A423B470C9A__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 keySize)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_90255A423B470C9A__CTOR_1_OFFSET))(this, keySize);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_90255A423B470C9A_FINALIZE_OFFSET))(this);
		}

		::System::Void GenerateKeyPair()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_90255A423B470C9A_GENERATEKEYPAIR_OFFSET))(this);
		}

		::System::Int32 get_KeySize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_90255A423B470C9A_GET_KEYSIZE_OFFSET))(this);
		}

		::System::String* get_KeyExchangeAlgorithm()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_90255A423B470C9A_GET_KEYEXCHANGEALGORITHM_OFFSET))(this);
		}

		::System::Boolean get_PublicOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_90255A423B470C9A_GET_PUBLICONLY_OFFSET))(this);
		}

		::System::String* get_SignatureAlgorithm()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_90255A423B470C9A_GET_SIGNATUREALGORITHM_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* DecryptValue(::Il2CppArray<::System::Byte>* rgb)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_90255A423B470C9A_DECRYPTVALUE_OFFSET))(this, rgb);
		}

		::Il2CppArray<::System::Byte>* EncryptValue(::Il2CppArray<::System::Byte>* rgb)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_90255A423B470C9A_ENCRYPTVALUE_OFFSET))(this, rgb);
		}

		::System::Security::Cryptography::RSAParameters ExportParameters(::System::Boolean includePrivateParameters)
		{
			return ((::System::Security::Cryptography::RSAParameters(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_90255A423B470C9A_EXPORTPARAMETERS_OFFSET))(this, includePrivateParameters);
		}

		::System::Void ImportParameters(::System::Security::Cryptography::RSAParameters parameters)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::RSAParameters))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_90255A423B470C9A_IMPORTPARAMETERS_OFFSET))(this, parameters);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_90255A423B470C9A_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Void add_KeyGenerated(::Mono::Security::Cryptography::RSAManaged_90255A423B470C9A_KeyGeneratedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Cryptography::RSAManaged_90255A423B470C9A_KeyGeneratedEventHandler*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_90255A423B470C9A_ADD_KEYGENERATED_OFFSET))(this, value);
		}

		::System::Void remove_KeyGenerated(::Mono::Security::Cryptography::RSAManaged_90255A423B470C9A_KeyGeneratedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Cryptography::RSAManaged_90255A423B470C9A_KeyGeneratedEventHandler*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_90255A423B470C9A_REMOVE_KEYGENERATED_OFFSET))(this, value);
		}

		::System::String* ToXmlString(::System::Boolean includePrivateParameters)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_90255A423B470C9A_TOXMLSTRING_OFFSET))(this, includePrivateParameters);
		}

		::System::Boolean get_UseKeyBlinding()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_90255A423B470C9A_GET_USEKEYBLINDING_OFFSET))(this);
		}

		::System::Void set_UseKeyBlinding(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_90255A423B470C9A_SET_USEKEYBLINDING_OFFSET))(this, value);
		}

		::System::Boolean get_IsCrtPossible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_90255A423B470C9A_GET_ISCRTPOSSIBLE_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* GetPaddedValue(::Mono::Math::BigInteger_195A9C52A7AD8B6F* value, ::System::Int32 length)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Mono::Math::BigInteger_195A9C52A7AD8B6F*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_90255A423B470C9A_GETPADDEDVALUE_OFFSET))(this, value, length);
		}
	};
}
