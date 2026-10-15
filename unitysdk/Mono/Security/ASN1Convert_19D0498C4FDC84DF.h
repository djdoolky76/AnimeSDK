#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/DateTime.h"
namespace Mono::Security { class ASN1_6C67A52C6BBD45E0; }
namespace System { class String; }

#define MONO_SECURITY_ASN1CONVERT_19D0498C4FDC84DF_FROMINT32_OFFSET UNITYSDK_OFFSET(0x1BFFCB60)
#define MONO_SECURITY_ASN1CONVERT_19D0498C4FDC84DF_FROMOID_OFFSET UNITYSDK_OFFSET(0x1BFFCEE0)
#define MONO_SECURITY_ASN1CONVERT_19D0498C4FDC84DF_FROMUNSIGNEDBIGINTEGER_OFFSET UNITYSDK_OFFSET(0x1BFFCF70)
#define MONO_SECURITY_ASN1CONVERT_19D0498C4FDC84DF_TODATETIME_OFFSET UNITYSDK_OFFSET(0x1BFFD360)
#define MONO_SECURITY_ASN1CONVERT_19D0498C4FDC84DF_TOINT32_OFFSET UNITYSDK_OFFSET(0x1BFFD030)
#define MONO_SECURITY_ASN1CONVERT_19D0498C4FDC84DF_TOOID_OFFSET UNITYSDK_OFFSET(0x1BFFD140)

namespace Mono::Security
{
	inline static constexpr unsigned int ASN1Convert_19D0498C4FDC84DF_TypeDefinitionIndex = 2258;

	class ASN1Convert_19D0498C4FDC84DF : public ::System::Object
	{
	public:
		static ::Mono::Security::ASN1_6C67A52C6BBD45E0* FromInt32(::System::Int32 a1)
		{
			return ((::Mono::Security::ASN1_6C67A52C6BBD45E0*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_ASN1CONVERT_19D0498C4FDC84DF_FROMINT32_OFFSET))(a1);
		}

		static ::Mono::Security::ASN1_6C67A52C6BBD45E0* FromOid(::System::String* a1)
		{
			return ((::Mono::Security::ASN1_6C67A52C6BBD45E0*(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_ASN1CONVERT_19D0498C4FDC84DF_FROMOID_OFFSET))(a1);
		}

		static ::Mono::Security::ASN1_6C67A52C6BBD45E0* FromUnsignedBigInteger(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::Mono::Security::ASN1_6C67A52C6BBD45E0*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_ASN1CONVERT_19D0498C4FDC84DF_FROMUNSIGNEDBIGINTEGER_OFFSET))(a1);
		}

		static ::System::Int32 ToInt32(::Mono::Security::ASN1_6C67A52C6BBD45E0* a1)
		{
			return ((::System::Int32(*)(::Mono::Security::ASN1_6C67A52C6BBD45E0*))((::PBYTE)hIl2Cpp + MONO_SECURITY_ASN1CONVERT_19D0498C4FDC84DF_TOINT32_OFFSET))(a1);
		}

		static ::System::String* ToOid(::Mono::Security::ASN1_6C67A52C6BBD45E0* a1)
		{
			return ((::System::String*(*)(::Mono::Security::ASN1_6C67A52C6BBD45E0*))((::PBYTE)hIl2Cpp + MONO_SECURITY_ASN1CONVERT_19D0498C4FDC84DF_TOOID_OFFSET))(a1);
		}

		static ::System::DateTime ToDateTime(::Mono::Security::ASN1_6C67A52C6BBD45E0* a1)
		{
			return ((::System::DateTime(*)(::Mono::Security::ASN1_6C67A52C6BBD45E0*))((::PBYTE)hIl2Cpp + MONO_SECURITY_ASN1CONVERT_19D0498C4FDC84DF_TODATETIME_OFFSET))(a1);
		}

	};
}
