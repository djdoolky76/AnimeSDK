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

#define GACNGOJGKKM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1FB85F10)
#define GACNGOJGKKM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1FB85E10)
#define GACNGOJGKKM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1FB85AE0)
#define GACNGOJGKKM__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB85F00)

inline static constexpr unsigned int GACNGOJGKKM_TypeDefinitionIndex = 95146;

class GACNGOJGKKM : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* MPCHAMOFLPN; // 0x18
	::UnityEngine::RectTransform* DOAEKLBBNBB; // 0x20
	::UnityEngine::CanvasGroup* JMBBEHOMANA; // 0x28
	::UnityEngine::Transform* LBIHJNDFLOI; // 0x30
	::UnityEngine::RectTransform* AKFINCPKPPN; // 0x38
	::FGCOIBFFCHB* FBMMJECPBFK; // 0x40
	::MoleMole::UIButtonSizeHandler* KCBCFJFEJFG; // 0x48
	::UnityEngine::CanvasGroup* LNICBLGHMEG; // 0x50
	::UnityEngine::RectTransform* BAOBIBPKOEK; // 0x58
	::UnityEngine::RectTransform* JPKNLAACODO; // 0x60
	::UnityEngine::RectTransform* EDIOHHAMBDM; // 0x68
	::UnityEngine::CanvasGroup* LEBMAFKCAHP; // 0x70
	::GCIMMDDIFBJ* CMCAKLMEKMP; // 0x78
	::FGCOIBFFCHB* BILPEKOHGON; // 0x80
	::UnityEngine::RectTransform* BFKJOEJAOLJ; // 0x88
	::MoleMole::UIButtonPosHandler* IHJNFOCOFOA; // 0x90
	::FGCOIBFFCHB* PGJLPOAHMMK; // 0x98
	::UnityEngine::CanvasGroup* PEHDEKGJMPN; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GACNGOJGKKM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GACNGOJGKKM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GACNGOJGKKM_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GACNGOJGKKM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
