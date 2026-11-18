#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Security/Cryptography/DSAParameters.h"

namespace Mono::Security { class ASN1_B704B12AF883B8E0; }
namespace Mono::Security { class PKCS7_820FF13D373237A3_ContentInfo; }
namespace Mono::Security { class PKCS7_820FF13D373237A3_EncryptedData; }
namespace Mono::Security::Cryptography { class PKCS8_A6D5F5B302F41534_PrivateKeyInfo; }
namespace Mono::Security::X509 { class X509CertificateCollection_8FF10F09B594C630; }
namespace Mono::Security::X509 { class X509Certificate_6FD3D162D0D30FF0; }
namespace System { class String; }
namespace System::Collections { class ArrayList; }
namespace System::Collections { class IDictionary; }
namespace System::Security::Cryptography { class AsymmetricAlgorithm; }
namespace System::Security::Cryptography { class RandomNumberGenerator; }
namespace System::Security::Cryptography { class SymmetricAlgorithm; }

#define MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_ADDCERTIFICATE_1_OFFSET UNITYSDK_OFFSET(0x1E9B6D60)
#define MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_ADDCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x1E9B6380)
#define MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_ADDKEYBAG_1_OFFSET UNITYSDK_OFFSET(0x1E9B83B0)
#define MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_ADDKEYBAG_OFFSET UNITYSDK_OFFSET(0x1E9B83A0)
#define MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_ADDPKCS8SHROUDEDKEYBAG_1_OFFSET UNITYSDK_OFFSET(0x1E9B7A40)
#define MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_ADDPKCS8SHROUDEDKEYBAG_OFFSET UNITYSDK_OFFSET(0x1E9B7A30)
#define MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_ADDPRIVATEKEY_OFFSET UNITYSDK_OFFSET(0x1E9ACC10)
#define MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_ADDSECRETBAG_1_OFFSET UNITYSDK_OFFSET(0x1E9B8BF0)
#define MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_ADDSECRETBAG_OFFSET UNITYSDK_OFFSET(0x1E9B8BE0)
#define MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_CERTIFICATESAFEBAG_OFFSET UNITYSDK_OFFSET(0x1E9B10A0)
#define MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9BCD80)
#define MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_COMPAREASYMMETRICALGORITHM_OFFSET UNITYSDK_OFFSET(0x1E9B7980)
#define MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_COMPARE_OFFSET UNITYSDK_OFFSET(0x1E9AA290)
#define MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_DECODE_OFFSET UNITYSDK_OFFSET(0x1E9A9530)
#define MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_DECRYPT_1_OFFSET UNITYSDK_OFFSET(0x1E9AADC0)
#define MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_DECRYPT_OFFSET UNITYSDK_OFFSET(0x1E9AB7C0)
#define MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_ENCRYPTEDCONTENTINFO_OFFSET UNITYSDK_OFFSET(0x1E9B6390)
#define MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_ENCRYPT_OFFSET UNITYSDK_OFFSET(0x1E9AC7C0)
#define MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1E9AAE80)
#define MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_GETASYMMETRICALGORITHM_OFFSET UNITYSDK_OFFSET(0x1E9B9060)
#define MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_GETATTRIBUTES_1_OFFSET UNITYSDK_OFFSET(0x1E9BC1F0)
#define MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_GETATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1E9BB380)
#define MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_GETBYTES_OFFSET UNITYSDK_OFFSET(0x1E9B26D0)
#define MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_GETCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x1E9BA930)
#define MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_GETEXISTINGPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1E9AC950)
#define MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_GETSECRET_OFFSET UNITYSDK_OFFSET(0x1E9B9F90)
#define MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_GETSYMMETRICALGORITHM_OFFSET UNITYSDK_OFFSET(0x1E9AC240)
#define MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_GET_CERTIFICATES_OFFSET UNITYSDK_OFFSET(0x1E9ABD60)
#define MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_GET_ITERATIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1E9AAF00)
#define MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x1E9AAF20)
#define MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_GET_MAXIMUMPASSWORDLENGTH_OFFSET UNITYSDK_OFFSET(0x1E9BCF70)
#define MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_GET_RNG_OFFSET UNITYSDK_OFFSET(0x1E9AC1E0)
#define MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_GET_SECRETS_OFFSET UNITYSDK_OFFSET(0x1E9AB970)
#define MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_KEYBAGSAFEBAG_OFFSET UNITYSDK_OFFSET(0x1E9AE580)
#define MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_LOADFILE_OFFSET UNITYSDK_OFFSET(0x1E9BD0C0)
#define MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_LOADFROMFILE_1_OFFSET UNITYSDK_OFFSET(0x1E9BD380)
#define MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_LOADFROMFILE_OFFSET UNITYSDK_OFFSET(0x1E9BD270)
#define MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_MAC_OFFSET UNITYSDK_OFFSET(0x1E9AA060)
#define MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_PKCS8SHROUDEDKEYBAGSAFEBAG_OFFSET UNITYSDK_OFFSET(0x1E9ACD90)
#define MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_READSAFEBAG_OFFSET UNITYSDK_OFFSET(0x1E9AA300)
#define MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_REMOVECERTIFICATE_1_OFFSET UNITYSDK_OFFSET(0x1E9B70A0)
#define MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_REMOVECERTIFICATE_OFFSET UNITYSDK_OFFSET(0x1E9B6370)
#define MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_REMOVEKEYBAG_OFFSET UNITYSDK_OFFSET(0x1E9B87E0)
#define MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_REMOVEPKCS8SHROUDEDKEYBAG_OFFSET UNITYSDK_OFFSET(0x1E9B7F10)
#define MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_REMOVESECRETBAG_OFFSET UNITYSDK_OFFSET(0x1E9B8E40)
#define MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_SAVETOFILE_OFFSET UNITYSDK_OFFSET(0x1E9BCBE0)
#define MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_SECRETBAGSAFEBAG_OFFSET UNITYSDK_OFFSET(0x1E9AFC90)
#define MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_SET_ITERATIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1E9AAF10)
#define MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_SET_MAXIMUMPASSWORDLENGTH_OFFSET UNITYSDK_OFFSET(0x1E9BCFD0)
#define MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_SET_PASSWORD_OFFSET UNITYSDK_OFFSET(0x1E9A92C0)
#define MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9BD440)
#define MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9A9250)
#define MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1E9A9FF0)
#define MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1E9AA030)
#define MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9A9000)

namespace Mono::Security::X509
{
	inline static constexpr unsigned int PKCS12_FA2D60DBEB87147A_TypeDefinitionIndex = 2288;

	class PKCS12_FA2D60DBEB87147A : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_password_max_length()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PKCS12_FA2D60DBEB87147A_TypeDefinitionIndex)->GetStaticField(0xF40);
		}
		// static const ::System::String* pbeWithSHAAnd128BitRC4; // 0x0
		// static const ::System::String* pbeWithSHAAnd40BitRC4; // 0x0
		// static const ::System::String* pbeWithSHAAnd3KeyTripleDESCBC; // 0x0
		// static const ::System::String* pbeWithSHAAnd2KeyTripleDESCBC; // 0x0
		// static const ::System::String* pbeWithSHAAnd128BitRC2CBC; // 0x0
		// static const ::System::String* pbeWithSHAAnd40BitRC2CBC; // 0x0
		// static const ::System::String* keyBag; // 0x0
		// static const ::System::String* pkcs8ShroudedKeyBag; // 0x0
		// static const ::System::String* certBag; // 0x0
		// static const ::System::String* crlBag; // 0x0
		// static const ::System::String* secretBag; // 0x0
		// static const ::System::String* safeContentsBag; // 0x0
		// static const ::System::String* x509Certificate; // 0x0
		// static const ::System::String* sdsiCertificate; // 0x0
		// static const ::System::String* x509Crl; // 0x0
		// static const ::System::Int32 recommendedIterationCount = 0x7D0; // 0x0
		// static const ::System::Int32 CryptoApiPasswordLimit = 0x20; // 0x0
		::System::Collections::ArrayList* _keyBags; // 0x10
		::System::Collections::ArrayList* _secretBags; // 0x18
		::Il2CppArray<::System::Byte>* _password; // 0x20
		::Mono::Security::X509::X509CertificateCollection_8FF10F09B594C630* _certs; // 0x28
		::System::Security::Cryptography::RandomNumberGenerator* _rng; // 0x30
		::System::Collections::ArrayList* _safeBags; // 0x38
		::System::Boolean _keyBagsChanged; // 0x40
		::System::Boolean _certsChanged; // 0x41
		::System::Boolean _secretBagsChanged; // 0x42
		::System::Byte _padding0[0x1];
		::System::Int32 _iterations; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::Byte>* data)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A__CTOR_1_OFFSET))(this, data);
		}

		::System::Void _ctor_2(::Il2CppArray<::System::Byte>* data, ::System::String* password)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A__CTOR_2_OFFSET))(this, data, password);
		}

		::System::Void _ctor_3(::Il2CppArray<::System::Byte>* data, ::Il2CppArray<::System::Byte>* password)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A__CTOR_3_OFFSET))(this, data, password);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A__CCTOR_OFFSET))();
		}

		::System::Void Decode(::Il2CppArray<::System::Byte>* data)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_DECODE_OFFSET))(this, data);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_FINALIZE_OFFSET))(this);
		}

		::System::Void set_Password(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_SET_PASSWORD_OFFSET))(this, value);
		}

		::System::Int32 get_IterationCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_GET_ITERATIONCOUNT_OFFSET))(this);
		}

		::System::Void set_IterationCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_SET_ITERATIONCOUNT_OFFSET))(this, value);
		}

		::System::Collections::ArrayList* get_Keys()
		{
			return ((::System::Collections::ArrayList*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_GET_KEYS_OFFSET))(this);
		}

		::System::Collections::ArrayList* get_Secrets()
		{
			return ((::System::Collections::ArrayList*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_GET_SECRETS_OFFSET))(this);
		}

		::Mono::Security::X509::X509CertificateCollection_8FF10F09B594C630* get_Certificates()
		{
			return ((::Mono::Security::X509::X509CertificateCollection_8FF10F09B594C630*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_GET_CERTIFICATES_OFFSET))(this);
		}

		::System::Security::Cryptography::RandomNumberGenerator* get_RNG()
		{
			return ((::System::Security::Cryptography::RandomNumberGenerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_GET_RNG_OFFSET))(this);
		}

		::System::Boolean Compare(::Il2CppArray<::System::Byte>* expected, ::Il2CppArray<::System::Byte>* actual)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_COMPARE_OFFSET))(this, expected, actual);
		}

		::System::Security::Cryptography::SymmetricAlgorithm* GetSymmetricAlgorithm(::System::String* algorithmOid, ::Il2CppArray<::System::Byte>* salt, ::System::Int32 iterationCount)
		{
			return ((::System::Security::Cryptography::SymmetricAlgorithm*(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_GETSYMMETRICALGORITHM_OFFSET))(this, algorithmOid, salt, iterationCount);
		}

		::Il2CppArray<::System::Byte>* Decrypt(::System::String* algorithmOid, ::Il2CppArray<::System::Byte>* salt, ::System::Int32 iterationCount, ::Il2CppArray<::System::Byte>* encryptedData)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_DECRYPT_OFFSET))(this, algorithmOid, salt, iterationCount, encryptedData);
		}

		::Il2CppArray<::System::Byte>* Decrypt_1(::Mono::Security::PKCS7_820FF13D373237A3_EncryptedData* ed)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Mono::Security::PKCS7_820FF13D373237A3_EncryptedData*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_DECRYPT_1_OFFSET))(this, ed);
		}

		::Il2CppArray<::System::Byte>* Encrypt(::System::String* algorithmOid, ::Il2CppArray<::System::Byte>* salt, ::System::Int32 iterationCount, ::Il2CppArray<::System::Byte>* data)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_ENCRYPT_OFFSET))(this, algorithmOid, salt, iterationCount, data);
		}

		::System::Security::Cryptography::DSAParameters GetExistingParameters(::System::Boolean& found)
		{
			return ((::System::Security::Cryptography::DSAParameters(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_GETEXISTINGPARAMETERS_OFFSET))(this, found);
		}

		::System::Void AddPrivateKey(::Mono::Security::Cryptography::PKCS8_A6D5F5B302F41534_PrivateKeyInfo* pki)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Cryptography::PKCS8_A6D5F5B302F41534_PrivateKeyInfo*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_ADDPRIVATEKEY_OFFSET))(this, pki);
		}

		::System::Void ReadSafeBag(::Mono::Security::ASN1_B704B12AF883B8E0* safeBag)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::ASN1_B704B12AF883B8E0*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_READSAFEBAG_OFFSET))(this, safeBag);
		}

		::Mono::Security::ASN1_B704B12AF883B8E0* Pkcs8ShroudedKeyBagSafeBag(::System::Security::Cryptography::AsymmetricAlgorithm* aa, ::System::Collections::IDictionary* attributes)
		{
			return ((::Mono::Security::ASN1_B704B12AF883B8E0*(*)(::PVOID, ::System::Security::Cryptography::AsymmetricAlgorithm*, ::System::Collections::IDictionary*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_PKCS8SHROUDEDKEYBAGSAFEBAG_OFFSET))(this, aa, attributes);
		}

		::Mono::Security::ASN1_B704B12AF883B8E0* KeyBagSafeBag(::System::Security::Cryptography::AsymmetricAlgorithm* aa, ::System::Collections::IDictionary* attributes)
		{
			return ((::Mono::Security::ASN1_B704B12AF883B8E0*(*)(::PVOID, ::System::Security::Cryptography::AsymmetricAlgorithm*, ::System::Collections::IDictionary*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_KEYBAGSAFEBAG_OFFSET))(this, aa, attributes);
		}

		::Mono::Security::ASN1_B704B12AF883B8E0* SecretBagSafeBag(::Il2CppArray<::System::Byte>* secret, ::System::Collections::IDictionary* attributes)
		{
			return ((::Mono::Security::ASN1_B704B12AF883B8E0*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Collections::IDictionary*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_SECRETBAGSAFEBAG_OFFSET))(this, secret, attributes);
		}

		::Mono::Security::ASN1_B704B12AF883B8E0* CertificateSafeBag(::Mono::Security::X509::X509Certificate_6FD3D162D0D30FF0* x509, ::System::Collections::IDictionary* attributes)
		{
			return ((::Mono::Security::ASN1_B704B12AF883B8E0*(*)(::PVOID, ::Mono::Security::X509::X509Certificate_6FD3D162D0D30FF0*, ::System::Collections::IDictionary*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_CERTIFICATESAFEBAG_OFFSET))(this, x509, attributes);
		}

		::Il2CppArray<::System::Byte>* MAC(::Il2CppArray<::System::Byte>* password, ::Il2CppArray<::System::Byte>* salt, ::System::Int32 iterations, ::Il2CppArray<::System::Byte>* data)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_MAC_OFFSET))(this, password, salt, iterations, data);
		}

		::Il2CppArray<::System::Byte>* GetBytes()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_GETBYTES_OFFSET))(this);
		}

		::Mono::Security::PKCS7_820FF13D373237A3_ContentInfo* EncryptedContentInfo(::Mono::Security::ASN1_B704B12AF883B8E0* safeBags, ::System::String* algorithmOid)
		{
			return ((::Mono::Security::PKCS7_820FF13D373237A3_ContentInfo*(*)(::PVOID, ::Mono::Security::ASN1_B704B12AF883B8E0*, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_ENCRYPTEDCONTENTINFO_OFFSET))(this, safeBags, algorithmOid);
		}

		::System::Void AddCertificate(::Mono::Security::X509::X509Certificate_6FD3D162D0D30FF0* cert)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::X509::X509Certificate_6FD3D162D0D30FF0*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_ADDCERTIFICATE_OFFSET))(this, cert);
		}

		::System::Void AddCertificate_1(::Mono::Security::X509::X509Certificate_6FD3D162D0D30FF0* cert, ::System::Collections::IDictionary* attributes)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::X509::X509Certificate_6FD3D162D0D30FF0*, ::System::Collections::IDictionary*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_ADDCERTIFICATE_1_OFFSET))(this, cert, attributes);
		}

		::System::Void RemoveCertificate(::Mono::Security::X509::X509Certificate_6FD3D162D0D30FF0* cert)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::X509::X509Certificate_6FD3D162D0D30FF0*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_REMOVECERTIFICATE_OFFSET))(this, cert);
		}

		::System::Void RemoveCertificate_1(::Mono::Security::X509::X509Certificate_6FD3D162D0D30FF0* cert, ::System::Collections::IDictionary* attrs)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::X509::X509Certificate_6FD3D162D0D30FF0*, ::System::Collections::IDictionary*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_REMOVECERTIFICATE_1_OFFSET))(this, cert, attrs);
		}

		::System::Boolean CompareAsymmetricAlgorithm(::System::Security::Cryptography::AsymmetricAlgorithm* a1, ::System::Security::Cryptography::AsymmetricAlgorithm* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Security::Cryptography::AsymmetricAlgorithm*, ::System::Security::Cryptography::AsymmetricAlgorithm*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_COMPAREASYMMETRICALGORITHM_OFFSET))(this, a1, a2);
		}

		::System::Void AddPkcs8ShroudedKeyBag(::System::Security::Cryptography::AsymmetricAlgorithm* aa)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::AsymmetricAlgorithm*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_ADDPKCS8SHROUDEDKEYBAG_OFFSET))(this, aa);
		}

		::System::Void AddPkcs8ShroudedKeyBag_1(::System::Security::Cryptography::AsymmetricAlgorithm* aa, ::System::Collections::IDictionary* attributes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::AsymmetricAlgorithm*, ::System::Collections::IDictionary*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_ADDPKCS8SHROUDEDKEYBAG_1_OFFSET))(this, aa, attributes);
		}

		::System::Void RemovePkcs8ShroudedKeyBag(::System::Security::Cryptography::AsymmetricAlgorithm* aa)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::AsymmetricAlgorithm*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_REMOVEPKCS8SHROUDEDKEYBAG_OFFSET))(this, aa);
		}

		::System::Void AddKeyBag(::System::Security::Cryptography::AsymmetricAlgorithm* aa)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::AsymmetricAlgorithm*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_ADDKEYBAG_OFFSET))(this, aa);
		}

		::System::Void AddKeyBag_1(::System::Security::Cryptography::AsymmetricAlgorithm* aa, ::System::Collections::IDictionary* attributes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::AsymmetricAlgorithm*, ::System::Collections::IDictionary*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_ADDKEYBAG_1_OFFSET))(this, aa, attributes);
		}

		::System::Void RemoveKeyBag(::System::Security::Cryptography::AsymmetricAlgorithm* aa)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::AsymmetricAlgorithm*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_REMOVEKEYBAG_OFFSET))(this, aa);
		}

		::System::Void AddSecretBag(::Il2CppArray<::System::Byte>* secret)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_ADDSECRETBAG_OFFSET))(this, secret);
		}

		::System::Void AddSecretBag_1(::Il2CppArray<::System::Byte>* secret, ::System::Collections::IDictionary* attributes)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Collections::IDictionary*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_ADDSECRETBAG_1_OFFSET))(this, secret, attributes);
		}

		::System::Void RemoveSecretBag(::Il2CppArray<::System::Byte>* secret)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_REMOVESECRETBAG_OFFSET))(this, secret);
		}

		::System::Security::Cryptography::AsymmetricAlgorithm* GetAsymmetricAlgorithm(::System::Collections::IDictionary* attrs)
		{
			return ((::System::Security::Cryptography::AsymmetricAlgorithm*(*)(::PVOID, ::System::Collections::IDictionary*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_GETASYMMETRICALGORITHM_OFFSET))(this, attrs);
		}

		::Il2CppArray<::System::Byte>* GetSecret(::System::Collections::IDictionary* attrs)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Collections::IDictionary*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_GETSECRET_OFFSET))(this, attrs);
		}

		::Mono::Security::X509::X509Certificate_6FD3D162D0D30FF0* GetCertificate(::System::Collections::IDictionary* attrs)
		{
			return ((::Mono::Security::X509::X509Certificate_6FD3D162D0D30FF0*(*)(::PVOID, ::System::Collections::IDictionary*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_GETCERTIFICATE_OFFSET))(this, attrs);
		}

		::System::Collections::IDictionary* GetAttributes(::System::Security::Cryptography::AsymmetricAlgorithm* aa)
		{
			return ((::System::Collections::IDictionary*(*)(::PVOID, ::System::Security::Cryptography::AsymmetricAlgorithm*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_GETATTRIBUTES_OFFSET))(this, aa);
		}

		::System::Collections::IDictionary* GetAttributes_1(::Mono::Security::X509::X509Certificate_6FD3D162D0D30FF0* cert)
		{
			return ((::System::Collections::IDictionary*(*)(::PVOID, ::Mono::Security::X509::X509Certificate_6FD3D162D0D30FF0*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_GETATTRIBUTES_1_OFFSET))(this, cert);
		}

		::System::Void SaveToFile(::System::String* filename)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_SAVETOFILE_OFFSET))(this, filename);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_CLONE_OFFSET))(this);
		}

		static ::System::Int32 get_MaximumPasswordLength()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_GET_MAXIMUMPASSWORDLENGTH_OFFSET))();
		}

		static ::System::Void set_MaximumPasswordLength(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_SET_MAXIMUMPASSWORDLENGTH_OFFSET))(value);
		}

		static ::Il2CppArray<::System::Byte>* LoadFile(::System::String* filename)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_LOADFILE_OFFSET))(filename);
		}

		static ::Mono::Security::X509::PKCS12_FA2D60DBEB87147A* LoadFromFile(::System::String* filename)
		{
			return ((::Mono::Security::X509::PKCS12_FA2D60DBEB87147A*(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_LOADFROMFILE_OFFSET))(filename);
		}

		static ::Mono::Security::X509::PKCS12_FA2D60DBEB87147A* LoadFromFile_1(::System::String* filename, ::System::String* password)
		{
			return ((::Mono::Security::X509::PKCS12_FA2D60DBEB87147A*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_FA2D60DBEB87147A_LOADFROMFILE_1_OFFSET))(filename, password);
		}
	};
}
