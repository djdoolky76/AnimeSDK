#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/RSA.h"
#include "unitysdk/System/Security/Cryptography/RSAParameters.h"
namespace Mono::Math { class BigInteger; }
namespace Mono::Security::Cryptography { class RSAManaged_KeyGeneratedEventHandler; }
namespace System { class String; }

#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_ADD_KEYGENERATED_OFFSET UNITYSDK_OFFSET(0x1C04F130)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_CTOR_OFFSET UNITYSDK_OFFSET(0x1C04CFC0)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_DECRYPTVALUE_OFFSET UNITYSDK_OFFSET(0x1C04DDF0)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C04D0B0)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_ENCRYPTVALUE_OFFSET UNITYSDK_OFFSET(0x1C04E550)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_EXPORTPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1C04E760)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C04D040)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_GENERATEKEYPAIR_OFFSET UNITYSDK_OFFSET(0x1C04D530)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_GETPADDEDVALUE_OFFSET UNITYSDK_OFFSET(0x1C04E4D0)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_GET_ISCRTPOSSIBLE_OFFSET UNITYSDK_OFFSET(0x1C04F710)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_GET_KEYSIZE_OFFSET UNITYSDK_OFFSET(0x1C04DCC0)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_GET_PUBLICONLY_OFFSET UNITYSDK_OFFSET(0x1C04DD60)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_IMPORTPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1C04EAE0)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_REMOVE_KEYGENERATED_OFFSET UNITYSDK_OFFSET(0x1C04F1B0)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_TOXMLSTRING_OFFSET UNITYSDK_OFFSET(0x1C04F230)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int RSAManaged_TypeDefinitionIndex = 76;

	class RSAManaged : public ::System::Security::Cryptography::RSA
	{
	public:
		::Mono::Math::BigInteger* dp; // 0x20
		::Mono::Math::BigInteger* q; // 0x28
		::Mono::Math::BigInteger* e; // 0x30
		::Mono::Math::BigInteger* dq; // 0x38
		::Mono::Math::BigInteger* d; // 0x40
		::Mono::Math::BigInteger* qInv; // 0x48
		::Mono::Security::Cryptography::RSAManaged_KeyGeneratedEventHandler* KeyGenerated; // 0x50
		::Mono::Math::BigInteger* n; // 0x58
		::Mono::Math::BigInteger* p; // 0x60
		::System::Boolean m_disposed; // 0x68
		::System::Boolean keyBlinding; // 0x69
		::System::Boolean isCRTpossible; // 0x6A
		::System::Boolean keypairGenerated; // 0x6B
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_CTOR_OFFSET))(this, a1);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_FINALIZE_OFFSET))(this);
		}

		::System::Void GenerateKeyPair()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_GENERATEKEYPAIR_OFFSET))(this);
		}

		::System::Int32 get_KeySize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_GET_KEYSIZE_OFFSET))(this);
		}

		::System::Boolean get_PublicOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_GET_PUBLICONLY_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* DecryptValue(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_DECRYPTVALUE_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Byte>* EncryptValue(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_ENCRYPTVALUE_OFFSET))(this, a1);
		}

		::System::Security::Cryptography::RSAParameters ExportParameters(::System::Boolean a1)
		{
			return ((::System::Security::Cryptography::RSAParameters(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_EXPORTPARAMETERS_OFFSET))(this, a1);
		}

		::System::Void ImportParameters(::System::Security::Cryptography::RSAParameters a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::RSAParameters))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_IMPORTPARAMETERS_OFFSET))(this, a1);
		}

		::System::Void Dispose(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_DISPOSE_OFFSET))(this, a1);
		}

		::System::Void add_KeyGenerated(::Mono::Security::Cryptography::RSAManaged_KeyGeneratedEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Cryptography::RSAManaged_KeyGeneratedEventHandler*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_ADD_KEYGENERATED_OFFSET))(this, a1);
		}

		::System::Void remove_KeyGenerated(::Mono::Security::Cryptography::RSAManaged_KeyGeneratedEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Cryptography::RSAManaged_KeyGeneratedEventHandler*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_REMOVE_KEYGENERATED_OFFSET))(this, a1);
		}

		::System::String* ToXmlString(::System::Boolean a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_TOXMLSTRING_OFFSET))(this, a1);
		}

		::System::Boolean get_IsCrtPossible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_GET_ISCRTPOSSIBLE_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* GetPaddedValue(::Mono::Math::BigInteger* a1, ::System::Int32 a2)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Mono::Math::BigInteger*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_GETPADDEDVALUE_OFFSET))(this, a1, a2);
		}

	};
}
