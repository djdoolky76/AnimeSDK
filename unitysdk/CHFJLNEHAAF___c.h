#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Net/Security/SslPolicyErrors.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Net::Security { class RemoteCertificateValidationCallback; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }
namespace System::Security::Cryptography::X509Certificates { class X509Chain; }

#define CHFJLNEHAAF___C_DCAGOEDNHHB_OFFSET UNITYSDK_OFFSET(0x1479D300)
#define CHFJLNEHAAF___C_FIBPMHCALFI_OFFSET UNITYSDK_OFFSET(0x1479D2B0)
#define CHFJLNEHAAF___C_KBHHIOJLMGK_OFFSET UNITYSDK_OFFSET(0x1479D340)
#define CHFJLNEHAAF___C_OHKJCMCLPHA_OFFSET UNITYSDK_OFFSET(0x1479D2F0)
#define CHFJLNEHAAF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1479D260)
#define CHFJLNEHAAF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1479D2A0)

inline static constexpr unsigned int CHFJLNEHAAF___c_TypeDefinitionIndex = 87345;

class CHFJLNEHAAF___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*>, ::System::String*>** StaticGet___9__15_0()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*>, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CHFJLNEHAAF___c_TypeDefinitionIndex)->GetStaticField(0x43000);
	}
	static ::System::Net::Security::RemoteCertificateValidationCallback** StaticGet___9__13_0()
	{
		return (::System::Net::Security::RemoteCertificateValidationCallback**)Il2CppClass::FromTypeDefinitionIndex(CHFJLNEHAAF___c_TypeDefinitionIndex)->GetStaticField(0x43008);
	}
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*>, ::System::String*>** StaticGet___9__17_0()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*>, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CHFJLNEHAAF___c_TypeDefinitionIndex)->GetStaticField(0x43010);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CHFJLNEHAAF___c_TypeDefinitionIndex)->GetStaticField(0x43018);
	}
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*>, ::System::String*>** StaticGet___9__16_0()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*>, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CHFJLNEHAAF___c_TypeDefinitionIndex)->GetStaticField(0x43020);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHFJLNEHAAF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFJLNEHAAF___C__CTOR_OFFSET))(this);
	}

	::System::String* FIBPMHCALFI(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*> JGAAPEJLGEM)
	{
		return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*>))((::PBYTE)hIl2Cpp + CHFJLNEHAAF___C_FIBPMHCALFI_OFFSET))(this, JGAAPEJLGEM);
	}

	::System::Boolean OHKJCMCLPHA(::System::Object* KFNDCKDNNFC, ::System::Security::Cryptography::X509Certificates::X509Certificate* PHDIGMDBFDF, ::System::Security::Cryptography::X509Certificates::X509Chain* IMHBHBGBPKG, ::System::Net::Security::SslPolicyErrors LPOJEOLGGEJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509Chain*, ::System::Net::Security::SslPolicyErrors))((::PBYTE)hIl2Cpp + CHFJLNEHAAF___C_OHKJCMCLPHA_OFFSET))(this, KFNDCKDNNFC, PHDIGMDBFDF, IMHBHBGBPKG, LPOJEOLGGEJ);
	}

	::System::String* DCAGOEDNHHB(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*> JGAAPEJLGEM)
	{
		return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*>))((::PBYTE)hIl2Cpp + CHFJLNEHAAF___C_DCAGOEDNHHB_OFFSET))(this, JGAAPEJLGEM);
	}

	::System::String* KBHHIOJLMGK(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*> JGAAPEJLGEM)
	{
		return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*>))((::PBYTE)hIl2Cpp + CHFJLNEHAAF___C_KBHHIOJLMGK_OFFSET))(this, JGAAPEJLGEM);
	}
};
