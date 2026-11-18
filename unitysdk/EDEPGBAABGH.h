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

#define EDEPGBAABGH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13539DC0)
#define EDEPGBAABGH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13539CA0)
#define EDEPGBAABGH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13539A00)
#define EDEPGBAABGH__CTOR_OFFSET UNITYSDK_OFFSET(0x13539DB0)

inline static constexpr unsigned int EDEPGBAABGH_TypeDefinitionIndex = 88715;

class EDEPGBAABGH : public ::GIBMJLOJLKD
{
public:
	::GCIMMDDIFBJ* OIKFFMHNCHB; // 0x18
	::UnityEngine::Transform* LBIHJNDFLOI; // 0x20
	::LGINJIKKBJA* KADDHBOOKAC; // 0x28
	::UnityEngine::UI::Text* NMMCKDHAHHH; // 0x30
	::FGCOIBFFCHB* KAFEDIPPCFO; // 0x38
	::UnityEngine::RectTransform* FOGDENONBHP; // 0x40
	::FGCOIBFFCHB* LEIGOPHEFHC; // 0x48
	::FGCOIBFFCHB* BAOBIBPKOEK; // 0x50
	::FGCOIBFFCHB* CIJAKOOOPNG; // 0x58
	::UnityEngine::CanvasGroup* JMBBEHOMANA; // 0x60
	::UnityEngine::RectTransform* KJODNKPHIGL; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDEPGBAABGH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EDEPGBAABGH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EDEPGBAABGH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDEPGBAABGH_KGEBDLGBGNM_OFFSET))(this);
	}
};
