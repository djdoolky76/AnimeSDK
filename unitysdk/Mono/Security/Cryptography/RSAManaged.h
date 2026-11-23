#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/RSA.h"
#include "unitysdk/System/Security/Cryptography/RSAParameters.h"

class BBB8A0ACE043BE4F;
namespace Mono::Security::Cryptography { class RSAManaged_FB20BEF60397E786; }
namespace System { class String; }

#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_ADD_KEYGENERATED_OFFSET UNITYSDK_OFFSET(0x3C04ED0)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_DECRYPTVALUE_OFFSET UNITYSDK_OFFSET(0x3C03030)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3C03460)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_ENCRYPTVALUE_OFFSET UNITYSDK_OFFSET(0x3C03730)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_EXPORTPARAMETERS_OFFSET UNITYSDK_OFFSET(0x3C03860)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_FINALIZE_OFFSET UNITYSDK_OFFSET(0x28F33C0)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_GENERATEKEYPAIR_OFFSET UNITYSDK_OFFSET(0x3C03C80)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_GETPADDEDVALUE_OFFSET UNITYSDK_OFFSET(0x3C03FE0)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_GET_ISCRTPOSSIBLE_OFFSET UNITYSDK_OFFSET(0x3C04F70)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_GET_KEYSIZE_OFFSET UNITYSDK_OFFSET(0x3C04F80)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_GET_PUBLICONLY_OFFSET UNITYSDK_OFFSET(0x3C05030)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_IMPORTPARAMETERS_OFFSET UNITYSDK_OFFSET(0x3C04090)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_REMOVE_KEYGENERATED_OFFSET UNITYSDK_OFFSET(0x3C050D0)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_TOXMLSTRING_OFFSET UNITYSDK_OFFSET(0x3C04700)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3C04CE0)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED__CTOR_OFFSET UNITYSDK_OFFSET(0x3C04DE0)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int RSAManaged_TypeDefinitionIndex = 11336;

	class RSAManaged : public ::System::Security::Cryptography::RSA
	{
	public:
		::System::Boolean isCRTpossible; // 0x20
		::System::Boolean keyBlinding; // 0x21
		::System::Boolean keypairGenerated; // 0x22
		::System::Boolean m_disposed; // 0x23
		::System::Byte _padding0[0x4];
		::BBB8A0ACE043BE4F* d; // 0x28
		::BBB8A0ACE043BE4F* p; // 0x30
		::BBB8A0ACE043BE4F* q; // 0x38
		::BBB8A0ACE043BE4F* dp; // 0x40
		::BBB8A0ACE043BE4F* dq; // 0x48
		::BBB8A0ACE043BE4F* qInv; // 0x50
		::BBB8A0ACE043BE4F* n; // 0x58
		::BBB8A0ACE043BE4F* e; // 0x60
		::Mono::Security::Cryptography::RSAManaged_FB20BEF60397E786* KeyGenerated; // 0x68

		::System::Void ImportParameters(::System::Security::Cryptography::RSAParameters B652C74F012A9C5B)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::RSAParameters))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_IMPORTPARAMETERS_OFFSET))(this, B652C74F012A9C5B);
		}

		::System::Void add_KeyGenerated(::Mono::Security::Cryptography::RSAManaged_FB20BEF60397E786* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Cryptography::RSAManaged_FB20BEF60397E786*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_ADD_KEYGENERATED_OFFSET))(this, E937D4885DAA1AE8);
		}

		::Il2CppArray<::System::Byte>* EncryptValue(::Il2CppArray<::System::Byte>* EFD90D39604601F6)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_ENCRYPTVALUE_OFFSET))(this, EFD90D39604601F6);
		}

		::System::Void remove_KeyGenerated(::Mono::Security::Cryptography::RSAManaged_FB20BEF60397E786* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Cryptography::RSAManaged_FB20BEF60397E786*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_REMOVE_KEYGENERATED_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* DecryptValue(::Il2CppArray<::System::Byte>* EFD90D39604601F6)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_DECRYPTVALUE_OFFSET))(this, EFD90D39604601F6);
		}

		::System::Security::Cryptography::RSAParameters ExportParameters(::System::Boolean A8C4FBC67474989C)
		{
			return ((::System::Security::Cryptography::RSAParameters(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_EXPORTPARAMETERS_OFFSET))(this, A8C4FBC67474989C);
		}

		::System::Int32 get_KeySize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_GET_KEYSIZE_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_FINALIZE_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* GetPaddedValue(::BBB8A0ACE043BE4F* E937D4885DAA1AE8, ::System::Int32 A96B867D8BBB8B00)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::BBB8A0ACE043BE4F*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_GETPADDEDVALUE_OFFSET))(this, E937D4885DAA1AE8, A96B867D8BBB8B00);
		}

		::System::Void GenerateKeyPair()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_GENERATEKEYPAIR_OFFSET))(this);
		}

		::System::String* ToXmlString(::System::Boolean A8C4FBC67474989C)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_TOXMLSTRING_OFFSET))(this, A8C4FBC67474989C);
		}

		::System::Void _ctor_1(::System::Int32 E8D5C504FEE1DCC0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED__CTOR_1_OFFSET))(this, E8D5C504FEE1DCC0);
		}

		::System::Void Dispose(::System::Boolean FB4A1BD5C4242BE9)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_DISPOSE_OFFSET))(this, FB4A1BD5C4242BE9);
		}

		::System::Boolean get_IsCrtPossible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_GET_ISCRTPOSSIBLE_OFFSET))(this);
		}

		::System::Boolean get_PublicOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_GET_PUBLICONLY_OFFSET))(this);
		}
	};
}
