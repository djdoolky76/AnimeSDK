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
namespace UnityEngine::UI { class Text; }

#define ILLFKJPFJNJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13AAAF10)
#define ILLFKJPFJNJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13AAAE10)
#define ILLFKJPFJNJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13AAAB50)
#define ILLFKJPFJNJ__CTOR_OFFSET UNITYSDK_OFFSET(0x13AAAF00)

inline static constexpr unsigned int ILLFKJPFJNJ_TypeDefinitionIndex = 58264;

class ILLFKJPFJNJ : public ::GIBMJLOJLKD
{
public:
	::MonoUIBtnScaleAnim* PCKBJJGKNBB; // 0x18
	::UnityEngine::UI::Text* FKCHAFIPBIM; // 0x20
	::UnityEngine::GameObject* HNLELGFGAJC; // 0x28
	::FGCOIBFFCHB* MLIJNHNOCJE; // 0x30
	::FGCOIBFFCHB* ANDFIBAKEAE; // 0x38
	::UnityEngine::GameObject* OGDGLMJEIGB; // 0x40
	::FGCOIBFFCHB* BPPINADHLOK; // 0x48
	::UnityEngine::UI::Text* IICLBPPCDKP; // 0x50
	::UnityEngine::RectTransform* ANDHLPBLPBG; // 0x58
	::UnityEngine::CanvasGroup* CABIBBCNFMJ; // 0x60
	::MoleMole::GradientColor* JENCBMJIGLD; // 0x68
	::UnityEngine::UI::Text* POIAFDAOKML; // 0x70
	::MoleMole::GradientColor* MCAMDNEMMKD; // 0x78
	::LGINJIKKBJA* IOBFOJKIKFI; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILLFKJPFJNJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ILLFKJPFJNJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ILLFKJPFJNJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILLFKJPFJNJ_KGEBDLGBGNM_OFFSET))(this);
	}
};
