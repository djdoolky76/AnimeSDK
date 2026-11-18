#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define PCEHFFCBCOI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x11B57660)
#define PCEHFFCBCOI_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x11B57540)
#define PCEHFFCBCOI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11B572A0)
#define PCEHFFCBCOI__CTOR_OFFSET UNITYSDK_OFFSET(0x11B57650)

inline static constexpr unsigned int PCEHFFCBCOI_TypeDefinitionIndex = 77017;

class PCEHFFCBCOI : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* KADDHBOOKAC; // 0x18
	::UnityEngine::UI::Text* NMMCKDHAHHH; // 0x20
	::FGCOIBFFCHB* CIJAKOOOPNG; // 0x28
	::FGCOIBFFCHB* KAFEDIPPCFO; // 0x30
	::GCIMMDDIFBJ* OIKFFMHNCHB; // 0x38
	::FGCOIBFFCHB* LEIGOPHEFHC; // 0x40
	::UnityEngine::RectTransform* KJODNKPHIGL; // 0x48
	::UnityEngine::RectTransform* FOGDENONBHP; // 0x50
	::UnityEngine::CanvasGroup* JMBBEHOMANA; // 0x58
	::UnityEngine::Transform* LBIHJNDFLOI; // 0x60
	::FGCOIBFFCHB* BAOBIBPKOEK; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCEHFFCBCOI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PCEHFFCBCOI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCEHFFCBCOI_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PCEHFFCBCOI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
