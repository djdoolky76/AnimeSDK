#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define BPPDAHJOLME_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1398BBA0)
#define BPPDAHJOLME_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1398BB10)
#define BPPDAHJOLME_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1398B990)
#define BPPDAHJOLME__CTOR_OFFSET UNITYSDK_OFFSET(0x1398BB90)

inline static constexpr unsigned int BPPDAHJOLME_TypeDefinitionIndex = 69576;

class BPPDAHJOLME : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* DBBDKLENOKD; // 0x18
	::FGCOIBFFCHB* BAOBIBPKOEK; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* JIAPDEAHAMM; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* HBADNCJHEOJ; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPPDAHJOLME__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BPPDAHJOLME_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BPPDAHJOLME_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPPDAHJOLME_KGEBDLGBGNM_OFFSET))(this);
	}
};
