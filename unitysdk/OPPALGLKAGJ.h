#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
class MonoGeneralLevelUpConfig;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define OPPALGLKAGJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x11B4D030)
#define OPPALGLKAGJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x11B4CFA0)
#define OPPALGLKAGJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11B4CDA0)
#define OPPALGLKAGJ__CTOR_OFFSET UNITYSDK_OFFSET(0x11B4D020)

inline static constexpr unsigned int OPPALGLKAGJ_TypeDefinitionIndex = 74071;

class OPPALGLKAGJ : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* HGKANNMDNMI; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* DBBDKLENOKD; // 0x20
	::MonoGeneralLevelUpConfig* AHMFPFACACD; // 0x28
	::GCIMMDDIFBJ* HGEBLKNDDPG; // 0x30
	::UnityEngine::RectTransform* KBNHFJFKKPK; // 0x38
	::FGCOIBFFCHB* BAOBIBPKOEK; // 0x40
	::UnityEngine::RectTransform* EHPOIMNPHOH; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPPALGLKAGJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OPPALGLKAGJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPPALGLKAGJ_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OPPALGLKAGJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
