#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define OLMKAALPIFC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14F8C2D0)
#define OLMKAALPIFC_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14F8C200)
#define OLMKAALPIFC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14F8C090)
#define OLMKAALPIFC__CTOR_OFFSET UNITYSDK_OFFSET(0x14F8C2C0)

inline static constexpr unsigned int OLMKAALPIFC_TypeDefinitionIndex = 53442;

class OLMKAALPIFC : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* BDIMEKPNKMG; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* LNGNCEIAING; // 0x20
	::UnityEngine::Animation* AAEEHMPIJPN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLMKAALPIFC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OLMKAALPIFC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OLMKAALPIFC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLMKAALPIFC_KGEBDLGBGNM_OFFSET))(this);
	}
};
