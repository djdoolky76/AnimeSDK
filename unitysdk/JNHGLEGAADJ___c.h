#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Security/SslPolicyErrors.h"
#include "unitysdk/System/Object.h"

class JNHGLEGAADJ_FOKJOKKDNHM;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Net::Security { class RemoteCertificateValidationCallback; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }
namespace System::Security::Cryptography::X509Certificates { class X509Chain; }

#define JNHGLEGAADJ___C_BHDPMEACNFN_OFFSET UNITYSDK_OFFSET(0x13AE0DE0)
#define JNHGLEGAADJ___C_DCDBMKHNPFB_OFFSET UNITYSDK_OFFSET(0x13AE0DC0)
#define JNHGLEGAADJ___C_HMCOMLLBLGF_OFFSET UNITYSDK_OFFSET(0x13AE0DF0)
#define JNHGLEGAADJ___C_ODCDGAJAJOG_OFFSET UNITYSDK_OFFSET(0x13AE0DB0)
#define JNHGLEGAADJ___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13AE0D60)
#define JNHGLEGAADJ___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13AE0DA0)

inline static constexpr unsigned int JNHGLEGAADJ___c_TypeDefinitionIndex = 70049;

class JNHGLEGAADJ___c : public ::System::Object
{
public:
	static ::System::Action_1<::System::Boolean>** StaticGet___9__102_0()
	{
		return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(JNHGLEGAADJ___c_TypeDefinitionIndex)->GetStaticField(0x3E3E0);
	}
	static ::System::Func_2<::System::Object*, ::System::Boolean>** StaticGet___9__101_0()
	{
		return (::System::Func_2<::System::Object*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(JNHGLEGAADJ___c_TypeDefinitionIndex)->GetStaticField(0x3E3E8);
	}
	static ::System::Net::Security::RemoteCertificateValidationCallback** StaticGet___9__121_0()
	{
		return (::System::Net::Security::RemoteCertificateValidationCallback**)Il2CppClass::FromTypeDefinitionIndex(JNHGLEGAADJ___c_TypeDefinitionIndex)->GetStaticField(0x3E3F0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(JNHGLEGAADJ___c_TypeDefinitionIndex)->GetStaticField(0x3E3F8);
	}
	static ::System::Func_2<::System::Object*, ::System::Boolean>** StaticGet___9__100_0()
	{
		return (::System::Func_2<::System::Object*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(JNHGLEGAADJ___c_TypeDefinitionIndex)->GetStaticField(0x3E400);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JNHGLEGAADJ___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNHGLEGAADJ___C__CTOR_OFFSET))(this);
	}

	::System::Boolean ODCDGAJAJOG(::System::Object* KFNDCKDNNFC, ::System::Security::Cryptography::X509Certificates::X509Certificate* PHDIGMDBFDF, ::System::Security::Cryptography::X509Certificates::X509Chain* IMHBHBGBPKG, ::System::Net::Security::SslPolicyErrors LPOJEOLGGEJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509Chain*, ::System::Net::Security::SslPolicyErrors))((::PBYTE)hIl2Cpp + JNHGLEGAADJ___C_ODCDGAJAJOG_OFFSET))(this, KFNDCKDNNFC, PHDIGMDBFDF, IMHBHBGBPKG, LPOJEOLGGEJ);
	}

	::System::Boolean DCDBMKHNPFB(::JNHGLEGAADJ_FOKJOKKDNHM* IMLLDOHDCNC)
	{
		return ((::System::Boolean(*)(::PVOID, ::JNHGLEGAADJ_FOKJOKKDNHM*))((::PBYTE)hIl2Cpp + JNHGLEGAADJ___C_DCDBMKHNPFB_OFFSET))(this, IMLLDOHDCNC);
	}

	::System::Void BHDPMEACNFN(::System::Boolean LFPIKGNKOLM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JNHGLEGAADJ___C_BHDPMEACNFN_OFFSET))(this, LFPIKGNKOLM);
	}

	::System::Boolean HMCOMLLBLGF(::JNHGLEGAADJ_FOKJOKKDNHM* IMLLDOHDCNC)
	{
		return ((::System::Boolean(*)(::PVOID, ::JNHGLEGAADJ_FOKJOKKDNHM*))((::PBYTE)hIl2Cpp + JNHGLEGAADJ___C_HMCOMLLBLGF_OFFSET))(this, IMLLDOHDCNC);
	}
};
