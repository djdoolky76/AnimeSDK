#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Security/SslPolicyErrors.h"
#include "unitysdk/System/Object.h"

namespace System::Net::Security { class RemoteCertificateValidationCallback; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }
namespace System::Security::Cryptography::X509Certificates { class X509Chain; }

#define GPNLCMANEMN___C_ADPINNBKMMP_OFFSET UNITYSDK_OFFSET(0x15B35B30)
#define GPNLCMANEMN___C_DCCOGLMDOKH_OFFSET UNITYSDK_OFFSET(0x15B35B20)
#define GPNLCMANEMN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B35AD0)
#define GPNLCMANEMN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15B35B10)

inline static constexpr unsigned int GPNLCMANEMN___c_TypeDefinitionIndex = 39841;

class GPNLCMANEMN___c : public ::System::Object
{
public:
	static ::System::Net::Security::RemoteCertificateValidationCallback** StaticGet___9__90_1()
	{
		return (::System::Net::Security::RemoteCertificateValidationCallback**)Il2CppClass::FromTypeDefinitionIndex(GPNLCMANEMN___c_TypeDefinitionIndex)->GetStaticField(0x31D20);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(GPNLCMANEMN___c_TypeDefinitionIndex)->GetStaticField(0x31D28);
	}
	static ::System::Net::Security::RemoteCertificateValidationCallback** StaticGet___9__89_1()
	{
		return (::System::Net::Security::RemoteCertificateValidationCallback**)Il2CppClass::FromTypeDefinitionIndex(GPNLCMANEMN___c_TypeDefinitionIndex)->GetStaticField(0x31D30);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GPNLCMANEMN___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPNLCMANEMN___C__CTOR_OFFSET))(this);
	}

	::System::Boolean DCCOGLMDOKH(::System::Object* KFNDCKDNNFC, ::System::Security::Cryptography::X509Certificates::X509Certificate* PHDIGMDBFDF, ::System::Security::Cryptography::X509Certificates::X509Chain* IMHBHBGBPKG, ::System::Net::Security::SslPolicyErrors LPOJEOLGGEJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509Chain*, ::System::Net::Security::SslPolicyErrors))((::PBYTE)hIl2Cpp + GPNLCMANEMN___C_DCCOGLMDOKH_OFFSET))(this, KFNDCKDNNFC, PHDIGMDBFDF, IMHBHBGBPKG, LPOJEOLGGEJ);
	}

	::System::Boolean ADPINNBKMMP(::System::Object* KFNDCKDNNFC, ::System::Security::Cryptography::X509Certificates::X509Certificate* PHDIGMDBFDF, ::System::Security::Cryptography::X509Certificates::X509Chain* IMHBHBGBPKG, ::System::Net::Security::SslPolicyErrors LPOJEOLGGEJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509Chain*, ::System::Net::Security::SslPolicyErrors))((::PBYTE)hIl2Cpp + GPNLCMANEMN___C_ADPINNBKMMP_OFFSET))(this, KFNDCKDNNFC, PHDIGMDBFDF, IMHBHBGBPKG, LPOJEOLGGEJ);
	}
};
