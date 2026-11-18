#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class ShaderAniHelp;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }

#define BCKLPOBAGLC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x169E2320)
#define BCKLPOBAGLC_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x169E2250)
#define BCKLPOBAGLC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x169E2030)
#define BCKLPOBAGLC__CTOR_OFFSET UNITYSDK_OFFSET(0x169E2310)

inline static constexpr unsigned int BCKLPOBAGLC_TypeDefinitionIndex = 83929;

class BCKLPOBAGLC : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::CanvasGroup* JMBBEHOMANA; // 0x18
	::ShaderAniHelp* OBEMLOACGAF; // 0x20
	::LGINJIKKBJA* KADDHBOOKAC; // 0x28
	::FGCOIBFFCHB* BAOBIBPKOEK; // 0x30
	::UnityEngine::RectTransform* PBELIJHOGNH; // 0x38
	::UnityEngine::RectTransform* KJODNKPHIGL; // 0x40
	::FGCOIBFFCHB* BPECPPJFIMK; // 0x48
	::UnityEngine::RectTransform* GEACBJAKDAG; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCKLPOBAGLC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BCKLPOBAGLC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BCKLPOBAGLC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCKLPOBAGLC_KGEBDLGBGNM_OFFSET))(this);
	}
};
