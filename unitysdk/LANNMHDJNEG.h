#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define LANNMHDJNEG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15DDD060)
#define LANNMHDJNEG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15DDCF60)
#define LANNMHDJNEG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15DDCCF0)
#define LANNMHDJNEG__CTOR_OFFSET UNITYSDK_OFFSET(0x15DDD050)

inline static constexpr unsigned int LANNMHDJNEG_TypeDefinitionIndex = 63470;

class LANNMHDJNEG : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* IBAPFELBGGL; // 0x18
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* JDJKPGMLGDN; // 0x28
	::UnityEngine::RectTransform* IGAELPNMEAG; // 0x30
	::FGCOIBFFCHB* BAIBLEJJNMI; // 0x38
	::GCIMMDDIFBJ* OBNLBMABFPF; // 0x40
	::FGCOIBFFCHB* JOIIGOIHMIE; // 0x48
	::GCIMMDDIFBJ* DEFFEMBANIF; // 0x50
	::UnityEngine::CanvasGroup* DMFEPOIHIDB; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* DJILAODCBCI; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LANNMHDJNEG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LANNMHDJNEG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LANNMHDJNEG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LANNMHDJNEG_KGEBDLGBGNM_OFFSET))(this);
	}
};
