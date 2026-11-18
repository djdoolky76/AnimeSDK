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

#define HEOLFDJMHNJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15B44460)
#define HEOLFDJMHNJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15B44360)
#define HEOLFDJMHNJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15B44050)
#define HEOLFDJMHNJ__CTOR_OFFSET UNITYSDK_OFFSET(0x15B44450)

inline static constexpr unsigned int HEOLFDJMHNJ_TypeDefinitionIndex = 54440;

class HEOLFDJMHNJ : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::CanvasGroup* LNICBLGHMEG; // 0x18
	::FGCOIBFFCHB* BILPEKOHGON; // 0x20
	::FGCOIBFFCHB* MPCHAMOFLPN; // 0x28
	::UnityEngine::RectTransform* BFKJOEJAOLJ; // 0x30
	::FGCOIBFFCHB* PGJLPOAHMMK; // 0x38
	::UnityEngine::CanvasGroup* LEBMAFKCAHP; // 0x40
	::UnityEngine::RectTransform* AKFINCPKPPN; // 0x48
	::FGCOIBFFCHB* FBMMJECPBFK; // 0x50
	::UnityEngine::RectTransform* BAOBIBPKOEK; // 0x58
	::UnityEngine::CanvasGroup* JMBBEHOMANA; // 0x60
	::GCIMMDDIFBJ* CMCAKLMEKMP; // 0x68
	::UnityEngine::Transform* LBIHJNDFLOI; // 0x70
	::MoleMole::UIButtonPosHandler* IHJNFOCOFOA; // 0x78
	::UnityEngine::CanvasGroup* PEHDEKGJMPN; // 0x80
	::UnityEngine::RectTransform* DOAEKLBBNBB; // 0x88
	::UnityEngine::RectTransform* EDIOHHAMBDM; // 0x90
	::MoleMole::UIButtonSizeHandler* KCBCFJFEJFG; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOLFDJMHNJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HEOLFDJMHNJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HEOLFDJMHNJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOLFDJMHNJ_KGEBDLGBGNM_OFFSET))(this);
	}
};
