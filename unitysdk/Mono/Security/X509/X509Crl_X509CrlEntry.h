#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

namespace Mono::Security { class ASN1_B704B12AF883B8E0; }
namespace Mono::Security::X509 { class X509ExtensionCollection_0A61A9ED600D8A6F; }

#define MONO_SECURITY_X509_X509CRL_X509CRLENTRY_GETBYTES_OFFSET UNITYSDK_OFFSET(0x1FD00DF0)
#define MONO_SECURITY_X509_X509CRL_X509CRLENTRY_GET_EXTENSIONS_OFFSET UNITYSDK_OFFSET(0x1FD00DE0)
#define MONO_SECURITY_X509_X509CRL_X509CRLENTRY_GET_REVOCATIONDATE_OFFSET UNITYSDK_OFFSET(0x1FD00DD0)
#define MONO_SECURITY_X509_X509CRL_X509CRLENTRY_GET_SERIALNUMBER_OFFSET UNITYSDK_OFFSET(0x1FD00CC0)
#define MONO_SECURITY_X509_X509CRL_X509CRLENTRY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FD00B90)
#define MONO_SECURITY_X509_X509CRL_X509CRLENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1FD00A90)

namespace Mono::Security::X509
{
	inline static constexpr unsigned int X509Crl_X509CrlEntry_TypeDefinitionIndex = 2294;

	class X509Crl_X509CrlEntry : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* sn; // 0x10
		::Mono::Security::X509::X509ExtensionCollection_0A61A9ED600D8A6F* extensions; // 0x18
		::System::DateTime revocationDate; // 0x20

		::System::Void _ctor(::Il2CppArray<::System::Byte>* serialNumber, ::System::DateTime revocationDate, ::Mono::Security::X509::X509ExtensionCollection_0A61A9ED600D8A6F* extensions)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::DateTime, ::Mono::Security::X509::X509ExtensionCollection_0A61A9ED600D8A6F*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CRL_X509CRLENTRY__CTOR_OFFSET))(this, serialNumber, revocationDate, extensions);
		}

		::System::Void _ctor_1(::Mono::Security::ASN1_B704B12AF883B8E0* entry)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::ASN1_B704B12AF883B8E0*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CRL_X509CRLENTRY__CTOR_1_OFFSET))(this, entry);
		}

		::Il2CppArray<::System::Byte>* get_SerialNumber()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CRL_X509CRLENTRY_GET_SERIALNUMBER_OFFSET))(this);
		}

		::System::DateTime get_RevocationDate()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CRL_X509CRLENTRY_GET_REVOCATIONDATE_OFFSET))(this);
		}

		::Mono::Security::X509::X509ExtensionCollection_0A61A9ED600D8A6F* get_Extensions()
		{
			return ((::Mono::Security::X509::X509ExtensionCollection_0A61A9ED600D8A6F*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CRL_X509CRLENTRY_GET_EXTENSIONS_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* GetBytes()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CRL_X509CRLENTRY_GETBYTES_OFFSET))(this);
		}
	};
}
