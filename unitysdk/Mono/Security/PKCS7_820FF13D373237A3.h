#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono::Security { class ASN1_B704B12AF883B8E0; }
namespace Mono::Security::X509 { class X509Certificate_6FD3D162D0D30FF0; }
namespace System { class String; }

#define MONO_SECURITY_PKCS7_820FF13D373237A3_ALGORITHMIDENTIFIER_1_OFFSET UNITYSDK_OFFSET(0x1FCFAB60)
#define MONO_SECURITY_PKCS7_820FF13D373237A3_ALGORITHMIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1FCFA960)
#define MONO_SECURITY_PKCS7_820FF13D373237A3_ATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1FCFA690)
#define MONO_SECURITY_PKCS7_820FF13D373237A3_ISSUERANDSERIALNUMBER_OFFSET UNITYSDK_OFFSET(0x1FCFAD40)
#define MONO_SECURITY_PKCS7_820FF13D373237A3__CTOR_OFFSET UNITYSDK_OFFSET(0x1FCFA680)

namespace Mono::Security
{
	inline static constexpr unsigned int PKCS7_820FF13D373237A3_TypeDefinitionIndex = 2273;

	class PKCS7_820FF13D373237A3 : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_820FF13D373237A3__CTOR_OFFSET))(this);
		}

		static ::Mono::Security::ASN1_B704B12AF883B8E0* Attribute(::System::String* oid, ::Mono::Security::ASN1_B704B12AF883B8E0* value)
		{
			return ((::Mono::Security::ASN1_B704B12AF883B8E0*(*)(::System::String*, ::Mono::Security::ASN1_B704B12AF883B8E0*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_820FF13D373237A3_ATTRIBUTE_OFFSET))(oid, value);
		}

		static ::Mono::Security::ASN1_B704B12AF883B8E0* AlgorithmIdentifier(::System::String* oid)
		{
			return ((::Mono::Security::ASN1_B704B12AF883B8E0*(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_820FF13D373237A3_ALGORITHMIDENTIFIER_OFFSET))(oid);
		}

		static ::Mono::Security::ASN1_B704B12AF883B8E0* AlgorithmIdentifier_1(::System::String* oid, ::Mono::Security::ASN1_B704B12AF883B8E0* parameters)
		{
			return ((::Mono::Security::ASN1_B704B12AF883B8E0*(*)(::System::String*, ::Mono::Security::ASN1_B704B12AF883B8E0*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_820FF13D373237A3_ALGORITHMIDENTIFIER_1_OFFSET))(oid, parameters);
		}

		static ::Mono::Security::ASN1_B704B12AF883B8E0* IssuerAndSerialNumber(::Mono::Security::X509::X509Certificate_6FD3D162D0D30FF0* x509)
		{
			return ((::Mono::Security::ASN1_B704B12AF883B8E0*(*)(::Mono::Security::X509::X509Certificate_6FD3D162D0D30FF0*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_820FF13D373237A3_ISSUERANDSERIALNUMBER_OFFSET))(x509);
		}
	};
}
