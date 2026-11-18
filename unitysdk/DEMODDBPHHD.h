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

#define DEMODDBPHHD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x19A3AC00)
#define DEMODDBPHHD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x19A3AB00)
#define DEMODDBPHHD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x19A3A840)
#define DEMODDBPHHD__CTOR_OFFSET UNITYSDK_OFFSET(0x19A3ABF0)

inline static constexpr unsigned int DEMODDBPHHD_TypeDefinitionIndex = 51639;

class DEMODDBPHHD : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* HNLELGFGAJC; // 0x18
	::UnityEngine::UI::Text* POIAFDAOKML; // 0x20
	::MoleMole::GradientColor* JENCBMJIGLD; // 0x28
	::LGINJIKKBJA* IOBFOJKIKFI; // 0x30
	::MoleMole::GradientColor* MCAMDNEMMKD; // 0x38
	::UnityEngine::GameObject* OGDGLMJEIGB; // 0x40
	::UnityEngine::CanvasGroup* CABIBBCNFMJ; // 0x48
	::MonoUIBtnScaleAnim* PCKBJJGKNBB; // 0x50
	::UnityEngine::UI::Text* IICLBPPCDKP; // 0x58
	::UnityEngine::RectTransform* ANDHLPBLPBG; // 0x60
	::FGCOIBFFCHB* BPPINADHLOK; // 0x68
	::UnityEngine::UI::Text* FKCHAFIPBIM; // 0x70
	::FGCOIBFFCHB* ANDFIBAKEAE; // 0x78
	::FGCOIBFFCHB* MLIJNHNOCJE; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEMODDBPHHD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DEMODDBPHHD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DEMODDBPHHD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEMODDBPHHD_KGEBDLGBGNM_OFFSET))(this);
	}
};
