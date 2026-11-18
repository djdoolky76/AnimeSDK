#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono::Security { class ASN1_B704B12AF883B8E0; }
namespace System { class String; }

#define MONO_SECURITY_X509_SAFEBAG_272BA08A48299974_GET_ASN1_OFFSET UNITYSDK_OFFSET(0x1FEF5FF0)
#define MONO_SECURITY_X509_SAFEBAG_272BA08A48299974_GET_BAGOID_OFFSET UNITYSDK_OFFSET(0x1FEF5FE0)
#define MONO_SECURITY_X509_SAFEBAG_272BA08A48299974__CTOR_OFFSET UNITYSDK_OFFSET(0x1FEF5FD0)

namespace Mono::Security::X509
{
	inline static constexpr unsigned int SafeBag_272BA08A48299974_TypeDefinitionIndex = 2287;

	class SafeBag_272BA08A48299974 : public ::System::Object
	{
	public:
		::System::String* _bagOID; // 0x10
		::Mono::Security::ASN1_B704B12AF883B8E0* _asn1; // 0x18

		::System::Void _ctor(::System::String* bagOID, ::Mono::Security::ASN1_B704B12AF883B8E0* asn1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Mono::Security::ASN1_B704B12AF883B8E0*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_SAFEBAG_272BA08A48299974__CTOR_OFFSET))(this, bagOID, asn1);
		}

		::System::String* get_BagOID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_SAFEBAG_272BA08A48299974_GET_BAGOID_OFFSET))(this);
		}

		::Mono::Security::ASN1_B704B12AF883B8E0* get_ASN1()
		{
			return ((::Mono::Security::ASN1_B704B12AF883B8E0*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_SAFEBAG_272BA08A48299974_GET_ASN1_OFFSET))(this);
		}
	};
}
