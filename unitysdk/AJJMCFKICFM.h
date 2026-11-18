#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define AJJMCFKICFM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1EEBD9B0)
#define AJJMCFKICFM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1EEBD800)
#define AJJMCFKICFM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1EEBD520)
#define AJJMCFKICFM__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEBD9A0)

inline static constexpr unsigned int AJJMCFKICFM_TypeDefinitionIndex = 94959;

class AJJMCFKICFM : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* LEEJEBIJDPL; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* AJHAGPKPDGN; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* EIJIICLEGNI; // 0x28
	::FGCOIBFFCHB* BGCPEPEBFMH; // 0x30
	::GCIMMDDIFBJ* KDOFOMOEMFH; // 0x38
	::FGCOIBFFCHB* LDNNIOGHPNJ; // 0x40
	::FGCOIBFFCHB* DBIJCHMHALE; // 0x48
	::FGCOIBFFCHB* KNOCPOEJGFJ; // 0x50
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x58
	::FGCOIBFFCHB* MLDHFJKCBBD; // 0x60
	::UnityEngine::RectTransform* PNCNPGAACAA; // 0x68
	::FGCOIBFFCHB* HFOHNIKDPHC; // 0x70
	::FGCOIBFFCHB* IBAPFELBGGL; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJJMCFKICFM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AJJMCFKICFM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJJMCFKICFM_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AJJMCFKICFM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
