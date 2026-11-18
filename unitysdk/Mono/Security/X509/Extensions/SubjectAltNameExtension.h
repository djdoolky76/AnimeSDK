#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/X509/X509Extension_E1A5E202CA41D5D1.h"

namespace Mono::Security { class ASN1_B704B12AF883B8E0; }
namespace Mono::Security::X509::Extensions { class GeneralNames; }
namespace System { class String; }

#define MONO_SECURITY_X509_EXTENSIONS_SUBJECTALTNAMEEXTENSION_DECODE_OFFSET UNITYSDK_OFFSET(0x1FEEB4C0)
#define MONO_SECURITY_X509_EXTENSIONS_SUBJECTALTNAMEEXTENSION_GET_DNSNAMES_OFFSET UNITYSDK_OFFSET(0x1FEEB5F0)
#define MONO_SECURITY_X509_EXTENSIONS_SUBJECTALTNAMEEXTENSION_GET_IPADDRESSES_OFFSET UNITYSDK_OFFSET(0x1FEEB610)
#define MONO_SECURITY_X509_EXTENSIONS_SUBJECTALTNAMEEXTENSION_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1FEEB590)
#define MONO_SECURITY_X509_EXTENSIONS_SUBJECTALTNAMEEXTENSION_GET_RFC822_OFFSET UNITYSDK_OFFSET(0x1FEEB5D0)
#define MONO_SECURITY_X509_EXTENSIONS_SUBJECTALTNAMEEXTENSION_GET_UNIFORMRESOURCEIDENTIFIERS_OFFSET UNITYSDK_OFFSET(0x1FEEB630)
#define MONO_SECURITY_X509_EXTENSIONS_SUBJECTALTNAMEEXTENSION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FEEB650)
#define MONO_SECURITY_X509_EXTENSIONS_SUBJECTALTNAMEEXTENSION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FEEB3D0)
#define MONO_SECURITY_X509_EXTENSIONS_SUBJECTALTNAMEEXTENSION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1FEEB3E0)
#define MONO_SECURITY_X509_EXTENSIONS_SUBJECTALTNAMEEXTENSION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1FEEB3F0)
#define MONO_SECURITY_X509_EXTENSIONS_SUBJECTALTNAMEEXTENSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1FEEB380)

namespace Mono::Security::X509::Extensions
{
	inline static constexpr unsigned int SubjectAltNameExtension_TypeDefinitionIndex = 2340;

	class SubjectAltNameExtension : public ::Mono::Security::X509::X509Extension_E1A5E202CA41D5D1
	{
	public:
		::Mono::Security::X509::Extensions::GeneralNames* _names; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_SUBJECTALTNAMEEXTENSION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Mono::Security::ASN1_B704B12AF883B8E0* asn1)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::ASN1_B704B12AF883B8E0*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_SUBJECTALTNAMEEXTENSION__CTOR_1_OFFSET))(this, asn1);
		}

		::System::Void _ctor_2(::Mono::Security::X509::X509Extension_E1A5E202CA41D5D1* extension)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::X509::X509Extension_E1A5E202CA41D5D1*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_SUBJECTALTNAMEEXTENSION__CTOR_2_OFFSET))(this, extension);
		}

		::System::Void _ctor_3(::Il2CppArray<::System::String*>* rfc822, ::Il2CppArray<::System::String*>* dnsNames, ::Il2CppArray<::System::String*>* ipAddresses, ::Il2CppArray<::System::String*>* uris)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_SUBJECTALTNAMEEXTENSION__CTOR_3_OFFSET))(this, rfc822, dnsNames, ipAddresses, uris);
		}

		::System::Void Decode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_SUBJECTALTNAMEEXTENSION_DECODE_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_SUBJECTALTNAMEEXTENSION_GET_NAME_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_RFC822()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_SUBJECTALTNAMEEXTENSION_GET_RFC822_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_DNSNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_SUBJECTALTNAMEEXTENSION_GET_DNSNAMES_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_IPAddresses()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_SUBJECTALTNAMEEXTENSION_GET_IPADDRESSES_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_UniformResourceIdentifiers()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_SUBJECTALTNAMEEXTENSION_GET_UNIFORMRESOURCEIDENTIFIERS_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_SUBJECTALTNAMEEXTENSION_TOSTRING_OFFSET))(this);
		}
	};
}
