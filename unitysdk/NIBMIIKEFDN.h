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

#define NIBMIIKEFDN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13151630)
#define NIBMIIKEFDN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13151530)
#define NIBMIIKEFDN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13151200)
#define NIBMIIKEFDN__CTOR_OFFSET UNITYSDK_OFFSET(0x13151620)

inline static constexpr unsigned int NIBMIIKEFDN_TypeDefinitionIndex = 68999;

class NIBMIIKEFDN : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* AKFINCPKPPN; // 0x18
	::FGCOIBFFCHB* FBMMJECPBFK; // 0x20
	::UnityEngine::RectTransform* EDIOHHAMBDM; // 0x28
	::UnityEngine::CanvasGroup* LEBMAFKCAHP; // 0x30
	::FGCOIBFFCHB* BILPEKOHGON; // 0x38
	::FGCOIBFFCHB* MPCHAMOFLPN; // 0x40
	::UnityEngine::CanvasGroup* PEHDEKGJMPN; // 0x48
	::MoleMole::UIButtonSizeHandler* KCBCFJFEJFG; // 0x50
	::UnityEngine::RectTransform* JPKNLAACODO; // 0x58
	::UnityEngine::RectTransform* DOAEKLBBNBB; // 0x60
	::UnityEngine::RectTransform* BAOBIBPKOEK; // 0x68
	::FGCOIBFFCHB* PGJLPOAHMMK; // 0x70
	::UnityEngine::Transform* LBIHJNDFLOI; // 0x78
	::UnityEngine::CanvasGroup* JMBBEHOMANA; // 0x80
	::MoleMole::UIButtonPosHandler* IHJNFOCOFOA; // 0x88
	::UnityEngine::RectTransform* BFKJOEJAOLJ; // 0x90
	::GCIMMDDIFBJ* CMCAKLMEKMP; // 0x98
	::UnityEngine::CanvasGroup* LNICBLGHMEG; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIBMIIKEFDN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NIBMIIKEFDN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NIBMIIKEFDN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIBMIIKEFDN_KGEBDLGBGNM_OFFSET))(this);
	}
};
