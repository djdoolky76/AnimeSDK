#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/X509/Extensions/KeyUsages.h"
#include "unitysdk/Mono/Security/X509/X509Extension_E1A5E202CA41D5D1.h"

namespace Mono::Security { class ASN1_B704B12AF883B8E0; }
namespace System { class String; }

#define MONO_SECURITY_X509_EXTENSIONS_KEYUSAGEEXTENSION_DECODE_OFFSET UNITYSDK_OFFSET(0x1FCFE1F0)
#define MONO_SECURITY_X509_EXTENSIONS_KEYUSAGEEXTENSION_ENCODE_OFFSET UNITYSDK_OFFSET(0x1FCFE320)
#define MONO_SECURITY_X509_EXTENSIONS_KEYUSAGEEXTENSION_GET_KEYUSAGE_OFFSET UNITYSDK_OFFSET(0x1FCFE600)
#define MONO_SECURITY_X509_EXTENSIONS_KEYUSAGEEXTENSION_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1FCFE670)
#define MONO_SECURITY_X509_EXTENSIONS_KEYUSAGEEXTENSION_SET_KEYUSAGE_OFFSET UNITYSDK_OFFSET(0x1FCFE610)
#define MONO_SECURITY_X509_EXTENSIONS_KEYUSAGEEXTENSION_SUPPORT_OFFSET UNITYSDK_OFFSET(0x1FCFE6B0)
#define MONO_SECURITY_X509_EXTENSIONS_KEYUSAGEEXTENSION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FCFE720)
#define MONO_SECURITY_X509_EXTENSIONS_KEYUSAGEEXTENSION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FCFE1A0)
#define MONO_SECURITY_X509_EXTENSIONS_KEYUSAGEEXTENSION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1FCFE1B0)
#define MONO_SECURITY_X509_EXTENSIONS_KEYUSAGEEXTENSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1FCFE190)

namespace Mono::Security::X509::Extensions
{
	inline static constexpr unsigned int KeyUsageExtension_TypeDefinitionIndex = 2336;

	class KeyUsageExtension : public ::Mono::Security::X509::X509Extension_E1A5E202CA41D5D1
	{
	public:
		::System::Int32 kubits; // 0x28

		::System::Void _ctor(::Mono::Security::ASN1_B704B12AF883B8E0* asn1)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::ASN1_B704B12AF883B8E0*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_KEYUSAGEEXTENSION__CTOR_OFFSET))(this, asn1);
		}

		::System::Void _ctor_1(::Mono::Security::X509::X509Extension_E1A5E202CA41D5D1* extension)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::X509::X509Extension_E1A5E202CA41D5D1*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_KEYUSAGEEXTENSION__CTOR_1_OFFSET))(this, extension);
		}

		::System::Void _ctor_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_KEYUSAGEEXTENSION__CTOR_2_OFFSET))(this);
		}

		::System::Void Decode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_KEYUSAGEEXTENSION_DECODE_OFFSET))(this);
		}

		::System::Void Encode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_KEYUSAGEEXTENSION_ENCODE_OFFSET))(this);
		}

		::Mono::Security::X509::Extensions::KeyUsages get_KeyUsage()
		{
			return ((::Mono::Security::X509::Extensions::KeyUsages(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_KEYUSAGEEXTENSION_GET_KEYUSAGE_OFFSET))(this);
		}

		::System::Void set_KeyUsage(::Mono::Security::X509::Extensions::KeyUsages value)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::X509::Extensions::KeyUsages))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_KEYUSAGEEXTENSION_SET_KEYUSAGE_OFFSET))(this, value);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_KEYUSAGEEXTENSION_GET_NAME_OFFSET))(this);
		}

		::System::Boolean Support(::Mono::Security::X509::Extensions::KeyUsages usage)
		{
			return ((::System::Boolean(*)(::PVOID, ::Mono::Security::X509::Extensions::KeyUsages))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_KEYUSAGEEXTENSION_SUPPORT_OFFSET))(this, usage);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_KEYUSAGEEXTENSION_TOSTRING_OFFSET))(this);
		}
	};
}
