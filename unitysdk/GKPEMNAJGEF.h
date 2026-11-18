#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UIToggleButton; }

#define GKPEMNAJGEF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x10FE7B70)
#define GKPEMNAJGEF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x10FE7AA0)
#define GKPEMNAJGEF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x10FE7930)
#define GKPEMNAJGEF__CTOR_OFFSET UNITYSDK_OFFSET(0x10FE7B60)

inline static constexpr unsigned int GKPEMNAJGEF_TypeDefinitionIndex = 72100;

class GKPEMNAJGEF : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* MGEDBKBHJPM; // 0x18
	::UnityEngine::UI::Extension::UIToggleButton* HJDAMCBKNEI; // 0x20
	::FGCOIBFFCHB* BOKMJMOAONH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKPEMNAJGEF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GKPEMNAJGEF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GKPEMNAJGEF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKPEMNAJGEF_KGEBDLGBGNM_OFFSET))(this);
	}
};
