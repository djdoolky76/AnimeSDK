#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Mono::Security { class ASN1_6C67A52C6BBD45E0; }
namespace Mono::Security { class PKCS7_183E832926C478BA_ContentInfo; }

#define MONO_SECURITY_PKCS7_183E832926C478BA_ENCRYPTEDDATA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C005EE0)
#define MONO_SECURITY_PKCS7_183E832926C478BA_ENCRYPTEDDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C005ED0)
#define MONO_SECURITY_PKCS7_183E832926C478BA_ENCRYPTEDDATA_GET_ENCRYPTEDCONTENT_OFFSET UNITYSDK_OFFSET(0x1C006290)
#define MONO_SECURITY_PKCS7_183E832926C478BA_ENCRYPTEDDATA_GET_ENCRYPTIONALGORITHM_OFFSET UNITYSDK_OFFSET(0x1C006280)

namespace Mono::Security
{
	inline static constexpr unsigned int PKCS7_183E832926C478BA_EncryptedData_TypeDefinitionIndex = 2262;

	class PKCS7_183E832926C478BA_EncryptedData : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* _encrypted; // 0x10
		::Mono::Security::PKCS7_183E832926C478BA_ContentInfo* _content; // 0x18
		::Mono::Security::PKCS7_183E832926C478BA_ContentInfo* _encryptionAlgorithm; // 0x20
		::System::Byte _version; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_183E832926C478BA_ENCRYPTEDDATA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Mono::Security::ASN1_6C67A52C6BBD45E0* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::ASN1_6C67A52C6BBD45E0*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_183E832926C478BA_ENCRYPTEDDATA_CTOR_1_OFFSET))(this, a1);
		}

		::Mono::Security::PKCS7_183E832926C478BA_ContentInfo* get_EncryptionAlgorithm()
		{
			return ((::Mono::Security::PKCS7_183E832926C478BA_ContentInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_183E832926C478BA_ENCRYPTEDDATA_GET_ENCRYPTIONALGORITHM_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_EncryptedContent()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_183E832926C478BA_ENCRYPTEDDATA_GET_ENCRYPTEDCONTENT_OFFSET))(this);
		}

	};
}
