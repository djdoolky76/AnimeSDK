#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GDALEODFJKL.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/JEIMDCMGJAM.h"

class PMDFNIFMDAP_DDJLJCOEAPI;
namespace System { class String; }

#define PMDFNIFMDAP_ELNHNFKMLOI_OFFSET UNITYSDK_OFFSET(0x1FBBA8A0)
#define PMDFNIFMDAP_KOAEEGDLLOA_OFFSET UNITYSDK_OFFSET(0x1FBBA850)
#define PMDFNIFMDAP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FBBA7C0)

inline static constexpr unsigned int PMDFNIFMDAP_TypeDefinitionIndex = 28706;

class PMDFNIFMDAP : public ::System::Object
{
public:
	static ::GDALEODFJKL* StaticGet_EPPCEPEKHJK()
	{
		return (::GDALEODFJKL*)Il2CppClass::FromTypeDefinitionIndex(PMDFNIFMDAP_TypeDefinitionIndex)->GetStaticField(0x25F50);
	}
	// static const ::System::UInt64 BJDCPBLJIDM = 0x1; // 0x0
	// static const ::System::UInt64 OHFCOELOBNG = 0x2; // 0x0
	// static const ::System::UInt64 GLCFHHMJAGK = 0x4; // 0x0
	// static const ::System::UInt64 MFHDPKGMMIL = 0x8; // 0x0
	// static const ::System::UInt64 NFMIIIHCKBO = 0xF; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PMDFNIFMDAP__CCTOR_OFFSET))();
	}

	static ::System::Boolean KOAEEGDLLOA(::System::UInt64 JPCPICBIOLB, ::System::UInt64 JHINIFJJPHM)
	{
		return ((::System::Boolean(*)(::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + PMDFNIFMDAP_KOAEEGDLLOA_OFFSET))(JPCPICBIOLB, JHINIFJJPHM);
	}

	static ::System::String* ELNHNFKMLOI(::JEIMDCMGJAM LDCPPJIIPDM, ::PMDFNIFMDAP_DDJLJCOEAPI* PEHMGBDOGJE)
	{
		return ((::System::String*(*)(::JEIMDCMGJAM, ::PMDFNIFMDAP_DDJLJCOEAPI*))((::PBYTE)hIl2Cpp + PMDFNIFMDAP_ELNHNFKMLOI_OFFSET))(LDCPPJIIPDM, PEHMGBDOGJE);
	}
};
