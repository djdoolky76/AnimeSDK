#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/DateTime.h"

namespace Mono::Security { class ASN1_B704B12AF883B8E0; }
namespace System { class String; }

#define MONO_SECURITY_ASN1CONVERT_7807EDDE70A24655_FROMDATETIME_OFFSET UNITYSDK_OFFSET(0x1F8A7410)
#define MONO_SECURITY_ASN1CONVERT_7807EDDE70A24655_FROMINT32_OFFSET UNITYSDK_OFFSET(0x1F8A7740)
#define MONO_SECURITY_ASN1CONVERT_7807EDDE70A24655_FROMOID_OFFSET UNITYSDK_OFFSET(0x1F8A78D0)
#define MONO_SECURITY_ASN1CONVERT_7807EDDE70A24655_FROMUNSIGNEDBIGINTEGER_OFFSET UNITYSDK_OFFSET(0x1F8A7960)
#define MONO_SECURITY_ASN1CONVERT_7807EDDE70A24655_TODATETIME_OFFSET UNITYSDK_OFFSET(0x1F8A7DA0)
#define MONO_SECURITY_ASN1CONVERT_7807EDDE70A24655_TOINT32_OFFSET UNITYSDK_OFFSET(0x1F8A7A30)
#define MONO_SECURITY_ASN1CONVERT_7807EDDE70A24655_TOOID_OFFSET UNITYSDK_OFFSET(0x1F8A7B40)

namespace Mono::Security
{
	inline static constexpr unsigned int ASN1Convert_7807EDDE70A24655_TypeDefinitionIndex = 2271;

	class ASN1Convert_7807EDDE70A24655 : public ::System::Object
	{
	public:
		static ::Mono::Security::ASN1_B704B12AF883B8E0* FromDateTime(::System::DateTime dt)
		{
			return ((::Mono::Security::ASN1_B704B12AF883B8E0*(*)(::System::DateTime))((::PBYTE)hIl2Cpp + MONO_SECURITY_ASN1CONVERT_7807EDDE70A24655_FROMDATETIME_OFFSET))(dt);
		}

		static ::Mono::Security::ASN1_B704B12AF883B8E0* FromInt32(::System::Int32 value)
		{
			return ((::Mono::Security::ASN1_B704B12AF883B8E0*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_ASN1CONVERT_7807EDDE70A24655_FROMINT32_OFFSET))(value);
		}

		static ::Mono::Security::ASN1_B704B12AF883B8E0* FromOid(::System::String* oid)
		{
			return ((::Mono::Security::ASN1_B704B12AF883B8E0*(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_ASN1CONVERT_7807EDDE70A24655_FROMOID_OFFSET))(oid);
		}

		static ::Mono::Security::ASN1_B704B12AF883B8E0* FromUnsignedBigInteger(::Il2CppArray<::System::Byte>* big)
		{
			return ((::Mono::Security::ASN1_B704B12AF883B8E0*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_ASN1CONVERT_7807EDDE70A24655_FROMUNSIGNEDBIGINTEGER_OFFSET))(big);
		}

		static ::System::Int32 ToInt32(::Mono::Security::ASN1_B704B12AF883B8E0* asn1)
		{
			return ((::System::Int32(*)(::Mono::Security::ASN1_B704B12AF883B8E0*))((::PBYTE)hIl2Cpp + MONO_SECURITY_ASN1CONVERT_7807EDDE70A24655_TOINT32_OFFSET))(asn1);
		}

		static ::System::String* ToOid(::Mono::Security::ASN1_B704B12AF883B8E0* asn1)
		{
			return ((::System::String*(*)(::Mono::Security::ASN1_B704B12AF883B8E0*))((::PBYTE)hIl2Cpp + MONO_SECURITY_ASN1CONVERT_7807EDDE70A24655_TOOID_OFFSET))(asn1);
		}

		static ::System::DateTime ToDateTime(::Mono::Security::ASN1_B704B12AF883B8E0* time)
		{
			return ((::System::DateTime(*)(::Mono::Security::ASN1_B704B12AF883B8E0*))((::PBYTE)hIl2Cpp + MONO_SECURITY_ASN1CONVERT_7807EDDE70A24655_TODATETIME_OFFSET))(time);
		}
	};
}
