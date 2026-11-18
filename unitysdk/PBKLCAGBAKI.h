#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIButtonPosHandler; }
namespace MoleMole { class UIButtonSizeHandler; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define PBKLCAGBAKI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15FFC550)
#define PBKLCAGBAKI_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15FFC450)
#define PBKLCAGBAKI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15FFC120)
#define PBKLCAGBAKI__CTOR_OFFSET UNITYSDK_OFFSET(0x15FFC540)

inline static constexpr unsigned int PBKLCAGBAKI_TypeDefinitionIndex = 43436;

class PBKLCAGBAKI : public ::GIBMJLOJLKD
{
public:
	::GCIMMDDIFBJ* CMCAKLMEKMP; // 0x18
	::UnityEngine::RectTransform* AKFINCPKPPN; // 0x20
	::UnityEngine::RectTransform* JPKNLAACODO; // 0x28
	::FGCOIBFFCHB* MPCHAMOFLPN; // 0x30
	::UnityEngine::CanvasGroup* LNICBLGHMEG; // 0x38
	::UnityEngine::RectTransform* EDIOHHAMBDM; // 0x40
	::UnityEngine::RectTransform* BAOBIBPKOEK; // 0x48
	::UnityEngine::Transform* LBIHJNDFLOI; // 0x50
	::UnityEngine::CanvasGroup* LEBMAFKCAHP; // 0x58
	::UnityEngine::RectTransform* BFKJOEJAOLJ; // 0x60
	::UnityEngine::CanvasGroup* PEHDEKGJMPN; // 0x68
	::FGCOIBFFCHB* BILPEKOHGON; // 0x70
	::FGCOIBFFCHB* PGJLPOAHMMK; // 0x78
	::MoleMole::UIButtonPosHandler* IHJNFOCOFOA; // 0x80
	::UnityEngine::RectTransform* DOAEKLBBNBB; // 0x88
	::MoleMole::UIButtonSizeHandler* KCBCFJFEJFG; // 0x90
	::FGCOIBFFCHB* FBMMJECPBFK; // 0x98
	::UnityEngine::CanvasGroup* JMBBEHOMANA; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBKLCAGBAKI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PBKLCAGBAKI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PBKLCAGBAKI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBKLCAGBAKI_KGEBDLGBGNM_OFFSET))(this);
	}
};
