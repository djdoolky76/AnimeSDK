#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UIDynamicNumberLabel; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MFMNGPHDMEB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13D2C8E0)
#define MFMNGPHDMEB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13D2C850)
#define MFMNGPHDMEB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13D2C6D0)
#define MFMNGPHDMEB__CTOR_OFFSET UNITYSDK_OFFSET(0x13D2C8D0)

inline static constexpr unsigned int MFMNGPHDMEB_TypeDefinitionIndex = 55333;

class MFMNGPHDMEB : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* DOCMKJEDPCK; // 0x18
	::UnityEngine::UI::Extension::UIDynamicNumberLabel* HBADNCJHEOJ; // 0x20
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* MGEDBKBHJPM; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFMNGPHDMEB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MFMNGPHDMEB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MFMNGPHDMEB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFMNGPHDMEB_KGEBDLGBGNM_OFFSET))(this);
	}
};
