#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUIBtnScaleAnim;
namespace MoleMole { class GradientColor; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define ENNIFDIBBLB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x161672E0)
#define ENNIFDIBBLB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16167210)
#define ENNIFDIBBLB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16166FC0)
#define ENNIFDIBBLB__CTOR_OFFSET UNITYSDK_OFFSET(0x161672D0)

inline static constexpr unsigned int ENNIFDIBBLB_TypeDefinitionIndex = 55577;

class ENNIFDIBBLB : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* ANDFIBAKEAE; // 0x18
	::UnityEngine::RectTransform* ANDHLPBLPBG; // 0x20
	::MonoUIBtnScaleAnim* PCKBJJGKNBB; // 0x28
	::MoleMole::GradientColor* MCAMDNEMMKD; // 0x30
	::FGCOIBFFCHB* MLIJNHNOCJE; // 0x38
	::LGINJIKKBJA* IOBFOJKIKFI; // 0x40
	::UnityEngine::GameObject* OGDGLMJEIGB; // 0x48
	::UnityEngine::GameObject* HNLELGFGAJC; // 0x50
	::UnityEngine::CanvasGroup* CABIBBCNFMJ; // 0x58
	::MoleMole::GradientColor* JENCBMJIGLD; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENNIFDIBBLB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ENNIFDIBBLB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ENNIFDIBBLB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENNIFDIBBLB_KGEBDLGBGNM_OFFSET))(this);
	}
};
