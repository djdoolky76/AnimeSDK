#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define HJKCFPPLEME_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x10118360)
#define HJKCFPPLEME_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x101181D0)
#define HJKCFPPLEME__CTOR_OFFSET UNITYSDK_OFFSET(0x10118350)

inline static constexpr unsigned int HJKCFPPLEME_TypeDefinitionIndex = 60649;

class HJKCFPPLEME : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* JHEHEKPDLEH; // 0x18
	::GCIMMDDIFBJ* BGAAIKGMOMO; // 0x20
	::UnityEngine::GameObject* OBEMLOACGAF; // 0x28
	::UnityEngine::GameObject* PNCNPGAACAA; // 0x30
	::UnityEngine::GameObject* GJJKEOLNAJG; // 0x38
	::UnityEngine::RectTransform* MLHMOBNFPMK; // 0x40
	::UnityEngine::RectTransform* IKOFJEHPPAN; // 0x48
	::UnityEngine::CanvasGroup* DMPNJGCACCM; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJKCFPPLEME__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HJKCFPPLEME_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HJKCFPPLEME_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
