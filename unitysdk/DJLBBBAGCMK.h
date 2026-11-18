#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define DJLBBBAGCMK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12088870)
#define DJLBBBAGCMK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x120887C0)
#define DJLBBBAGCMK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12088550)
#define DJLBBBAGCMK__CTOR_OFFSET UNITYSDK_OFFSET(0x12088860)

inline static constexpr unsigned int DJLBBBAGCMK_TypeDefinitionIndex = 48518;

class DJLBBBAGCMK : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Animator* KEMKOKGFIGM; // 0x18
	::FGCOIBFFCHB* CHCCPCCKJBG; // 0x20
	::UnityEngine::RectTransform* KJODNKPHIGL; // 0x28
	::GCIMMDDIFBJ* LPOAEPILCEI; // 0x30
	::LGINJIKKBJA* KADDHBOOKAC; // 0x38
	::UnityEngine::RectTransform* NLGNNCFALMA; // 0x40
	::GCIMMDDIFBJ* OIKFFMHNCHB; // 0x48
	::UnityEngine::CanvasGroup* JMBBEHOMANA; // 0x50
	::UnityEngine::Transform* LBIHJNDFLOI; // 0x58
	::UnityEngine::RectTransform* PNCNPGAACAA; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJLBBBAGCMK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DJLBBBAGCMK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DJLBBBAGCMK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJLBBBAGCMK_KGEBDLGBGNM_OFFSET))(this);
	}
};
