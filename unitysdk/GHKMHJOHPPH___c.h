#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Security/SslPolicyErrors.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace System::Net::Security { class RemoteCertificateValidationCallback; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }
namespace System::Security::Cryptography::X509Certificates { class X509Chain; }

#define GHKMHJOHPPH___C_HAINADOBILI_OFFSET UNITYSDK_OFFSET(0x149D7900)
#define GHKMHJOHPPH___C_MNEOLLMPHPO_OFFSET UNITYSDK_OFFSET(0x149D78F0)
#define GHKMHJOHPPH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x149D78A0)
#define GHKMHJOHPPH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x149D78E0)

inline static constexpr unsigned int GHKMHJOHPPH___c_TypeDefinitionIndex = 64827;

class GHKMHJOHPPH___c : public ::System::Object
{
public:
	static ::System::Action_1<::System::Boolean>** StaticGet___9__109_0()
	{
		return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GHKMHJOHPPH___c_TypeDefinitionIndex)->GetStaticField(0x31C70);
	}
	static ::System::Net::Security::RemoteCertificateValidationCallback** StaticGet___9__130_0()
	{
		return (::System::Net::Security::RemoteCertificateValidationCallback**)Il2CppClass::FromTypeDefinitionIndex(GHKMHJOHPPH___c_TypeDefinitionIndex)->GetStaticField(0x31C78);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(GHKMHJOHPPH___c_TypeDefinitionIndex)->GetStaticField(0x31C80);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHKMHJOHPPH___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHKMHJOHPPH___C__CTOR_OFFSET))(this);
	}

	::System::Void MNEOLLMPHPO(::System::Boolean LFPIKGNKOLM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GHKMHJOHPPH___C_MNEOLLMPHPO_OFFSET))(this, LFPIKGNKOLM);
	}

	::System::Boolean HAINADOBILI(::System::Object* KFNDCKDNNFC, ::System::Security::Cryptography::X509Certificates::X509Certificate* PHDIGMDBFDF, ::System::Security::Cryptography::X509Certificates::X509Chain* IMHBHBGBPKG, ::System::Net::Security::SslPolicyErrors LPOJEOLGGEJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509Chain*, ::System::Net::Security::SslPolicyErrors))((::PBYTE)hIl2Cpp + GHKMHJOHPPH___C_HAINADOBILI_OFFSET))(this, KFNDCKDNNFC, PHDIGMDBFDF, IMHBHBGBPKG, LPOJEOLGGEJ);
	}
};
