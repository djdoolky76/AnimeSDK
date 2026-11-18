#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MONO_SECURITY_PKCS7_820FF13D373237A3_OID__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9A1890)

namespace Mono::Security
{
	inline static constexpr unsigned int PKCS7_820FF13D373237A3_Oid_TypeDefinitionIndex = 2274;

	class PKCS7_820FF13D373237A3_Oid : public ::System::Object
	{
	public:
		// static const ::System::String* rsaEncryption; // 0x0
		// static const ::System::String* data; // 0x0
		// static const ::System::String* signedData; // 0x0
		// static const ::System::String* envelopedData; // 0x0
		// static const ::System::String* signedAndEnvelopedData; // 0x0
		// static const ::System::String* digestedData; // 0x0
		// static const ::System::String* encryptedData; // 0x0
		// static const ::System::String* contentType; // 0x0
		// static const ::System::String* messageDigest; // 0x0
		// static const ::System::String* signingTime; // 0x0
		// static const ::System::String* countersignature; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_820FF13D373237A3_OID__CTOR_OFFSET))(this);
		}
	};
}
