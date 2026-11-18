#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono::Security { class ASN1; }
namespace System { class String; }

#define MONO_SECURITY_X509_SAFEBAG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1ABCD0)

namespace Mono::Security::X509
{
	inline static constexpr unsigned int SafeBag_TypeDefinitionIndex = 54;

	class SafeBag : public ::System::Object
	{
	public:
		::System::String* _bagOID; // 0x10
		::Mono::Security::ASN1* _asn1; // 0x18

		::System::Void _ctor(::System::String* bagOID, ::Mono::Security::ASN1* asn1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Mono::Security::ASN1*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_SAFEBAG__CTOR_OFFSET))(this, bagOID, asn1);
		}
	};
}
