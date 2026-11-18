#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }

#define LOMEDPCPIJA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15E11420)
#define LOMEDPCPIJA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15E112D0)
#define LOMEDPCPIJA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15E10FA0)
#define LOMEDPCPIJA__CTOR_OFFSET UNITYSDK_OFFSET(0x15E11410)

inline static constexpr unsigned int LOMEDPCPIJA_TypeDefinitionIndex = 56537;

class LOMEDPCPIJA : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* KDGDNBGJDHN; // 0x18
	::UnityEngine::RectTransform* FOGDENONBHP; // 0x20
	::FGCOIBFFCHB* CIJAKOOOPNG; // 0x28
	::UnityEngine::RectTransform* KJODNKPHIGL; // 0x30
	::FGCOIBFFCHB* LEIGOPHEFHC; // 0x38
	::GCIMMDDIFBJ* EAKCNMHGKHL; // 0x40
	::FGCOIBFFCHB* CHCCPCCKJBG; // 0x48
	::GCIMMDDIFBJ* ODAKHLNHMCD; // 0x50
	::FGCOIBFFCHB* KAFEDIPPCFO; // 0x58
	::UnityEngine::UI::Text* NMMCKDHAHHH; // 0x60
	::GCIMMDDIFBJ* DOEKEKKIPOO; // 0x68
	::FGCOIBFFCHB* BAOBIBPKOEK; // 0x70
	::UnityEngine::CanvasGroup* JMBBEHOMANA; // 0x78
	::UnityEngine::GameObject* JEBFCLJBPJP; // 0x80
	::LGINJIKKBJA* JDBDAFFFOJK; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOMEDPCPIJA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LOMEDPCPIJA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOMEDPCPIJA_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LOMEDPCPIJA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
