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

#define PELBFHBHJGH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x150BF240)
#define PELBFHBHJGH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x150BF120)
#define PELBFHBHJGH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x150BEE80)
#define PELBFHBHJGH__CTOR_OFFSET UNITYSDK_OFFSET(0x150BF230)

inline static constexpr unsigned int PELBFHBHJGH_TypeDefinitionIndex = 92237;

class PELBFHBHJGH : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* KJODNKPHIGL; // 0x18
	::LGINJIKKBJA* KADDHBOOKAC; // 0x20
	::GCIMMDDIFBJ* OIKFFMHNCHB; // 0x28
	::FGCOIBFFCHB* BAOBIBPKOEK; // 0x30
	::UnityEngine::CanvasGroup* JMBBEHOMANA; // 0x38
	::UnityEngine::UI::Text* NMMCKDHAHHH; // 0x40
	::FGCOIBFFCHB* KAFEDIPPCFO; // 0x48
	::FGCOIBFFCHB* CIJAKOOOPNG; // 0x50
	::UnityEngine::Transform* LBIHJNDFLOI; // 0x58
	::FGCOIBFFCHB* LEIGOPHEFHC; // 0x60
	::UnityEngine::RectTransform* FOGDENONBHP; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PELBFHBHJGH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PELBFHBHJGH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PELBFHBHJGH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PELBFHBHJGH_KGEBDLGBGNM_OFFSET))(this);
	}
};
