#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/DateTime.h"
namespace Mono::Security { class ASN1; }
namespace System { class String; }

#define MONO_SECURITY_ASN1CONVERT_FROMINT32_OFFSET UNITYSDK_OFFSET(0x1C040B90)
#define MONO_SECURITY_ASN1CONVERT_FROMOID_OFFSET UNITYSDK_OFFSET(0x1C040F10)
#define MONO_SECURITY_ASN1CONVERT_TODATETIME_OFFSET UNITYSDK_OFFSET(0x1C0412D0)
#define MONO_SECURITY_ASN1CONVERT_TOINT32_OFFSET UNITYSDK_OFFSET(0x1C040FA0)
#define MONO_SECURITY_ASN1CONVERT_TOOID_OFFSET UNITYSDK_OFFSET(0x1C0410B0)

namespace Mono::Security
{
	inline static constexpr unsigned int ASN1Convert_TypeDefinitionIndex = 46;

	class ASN1Convert : public ::System::Object
	{
	public:
		static ::Mono::Security::ASN1* FromInt32(::System::Int32 a1)
		{
			return ((::Mono::Security::ASN1*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_ASN1CONVERT_FROMINT32_OFFSET))(a1);
		}

		static ::Mono::Security::ASN1* FromOid(::System::String* a1)
		{
			return ((::Mono::Security::ASN1*(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_ASN1CONVERT_FROMOID_OFFSET))(a1);
		}

		static ::System::Int32 ToInt32(::Mono::Security::ASN1* a1)
		{
			return ((::System::Int32(*)(::Mono::Security::ASN1*))((::PBYTE)hIl2Cpp + MONO_SECURITY_ASN1CONVERT_TOINT32_OFFSET))(a1);
		}

		static ::System::String* ToOid(::Mono::Security::ASN1* a1)
		{
			return ((::System::String*(*)(::Mono::Security::ASN1*))((::PBYTE)hIl2Cpp + MONO_SECURITY_ASN1CONVERT_TOOID_OFFSET))(a1);
		}

		static ::System::DateTime ToDateTime(::Mono::Security::ASN1* a1)
		{
			return ((::System::DateTime(*)(::Mono::Security::ASN1*))((::PBYTE)hIl2Cpp + MONO_SECURITY_ASN1CONVERT_TODATETIME_OFFSET))(a1);
		}

	};
}
