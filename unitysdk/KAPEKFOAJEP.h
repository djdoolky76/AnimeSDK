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

#define KAPEKFOAJEP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14FC93F0)
#define KAPEKFOAJEP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14FC9320)
#define KAPEKFOAJEP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14FC90D0)
#define KAPEKFOAJEP__CTOR_OFFSET UNITYSDK_OFFSET(0x14FC93E0)

inline static constexpr unsigned int KAPEKFOAJEP_TypeDefinitionIndex = 86219;

class KAPEKFOAJEP : public ::GIBMJLOJLKD
{
public:
	::MoleMole::GradientColor* MCAMDNEMMKD; // 0x18
	::LGINJIKKBJA* IOBFOJKIKFI; // 0x20
	::UnityEngine::CanvasGroup* CABIBBCNFMJ; // 0x28
	::FGCOIBFFCHB* MLIJNHNOCJE; // 0x30
	::MonoUIBtnScaleAnim* PCKBJJGKNBB; // 0x38
	::FGCOIBFFCHB* ANDFIBAKEAE; // 0x40
	::MoleMole::GradientColor* JENCBMJIGLD; // 0x48
	::UnityEngine::GameObject* HNLELGFGAJC; // 0x50
	::UnityEngine::RectTransform* ANDHLPBLPBG; // 0x58
	::UnityEngine::GameObject* OGDGLMJEIGB; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAPEKFOAJEP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KAPEKFOAJEP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KAPEKFOAJEP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAPEKFOAJEP_KGEBDLGBGNM_OFFSET))(this);
	}
};
