#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/X509/X509Extension_E1A5E202CA41D5D1.h"

namespace Mono::Security { class ASN1_B704B12AF883B8E0; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MONO_SECURITY_X509_EXTENSIONS_CRLDISTRIBUTIONPOINTSEXTENSION_DECODE_OFFSET UNITYSDK_OFFSET(0x1FFD97A0)
#define MONO_SECURITY_X509_EXTENSIONS_CRLDISTRIBUTIONPOINTSEXTENSION_GET_DISTRIBUTIONPOINTS_OFFSET UNITYSDK_OFFSET(0x1FFD9A00)
#define MONO_SECURITY_X509_EXTENSIONS_CRLDISTRIBUTIONPOINTSEXTENSION_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1FFD99C0)
#define MONO_SECURITY_X509_EXTENSIONS_CRLDISTRIBUTIONPOINTSEXTENSION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FFD9A10)
#define MONO_SECURITY_X509_EXTENSIONS_CRLDISTRIBUTIONPOINTSEXTENSION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FFD9780)
#define MONO_SECURITY_X509_EXTENSIONS_CRLDISTRIBUTIONPOINTSEXTENSION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1FFD9790)
#define MONO_SECURITY_X509_EXTENSIONS_CRLDISTRIBUTIONPOINTSEXTENSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1FFD9700)

namespace Mono::Security::X509::Extensions
{
	inline static constexpr unsigned int CRLDistributionPointsExtension_TypeDefinitionIndex = 2328;

	class CRLDistributionPointsExtension : public ::Mono::Security::X509::X509Extension_E1A5E202CA41D5D1
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* dps; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_CRLDISTRIBUTIONPOINTSEXTENSION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Mono::Security::ASN1_B704B12AF883B8E0* asn1)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::ASN1_B704B12AF883B8E0*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_CRLDISTRIBUTIONPOINTSEXTENSION__CTOR_1_OFFSET))(this, asn1);
		}

		::System::Void _ctor_2(::Mono::Security::X509::X509Extension_E1A5E202CA41D5D1* extension)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::X509::X509Extension_E1A5E202CA41D5D1*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_CRLDISTRIBUTIONPOINTSEXTENSION__CTOR_2_OFFSET))(this, extension);
		}

		::System::Void Decode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_CRLDISTRIBUTIONPOINTSEXTENSION_DECODE_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_CRLDISTRIBUTIONPOINTSEXTENSION_GET_NAME_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Object*>* get_DistributionPoints()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_CRLDISTRIBUTIONPOINTSEXTENSION_GET_DISTRIBUTIONPOINTS_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_CRLDISTRIBUTIONPOINTSEXTENSION_TOSTRING_OFFSET))(this);
		}
	};
}
