#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define OCLKCMDBIMK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xE0E6FB0)
#define OCLKCMDBIMK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xE0E6F20)
#define OCLKCMDBIMK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xE0E6D40)
#define OCLKCMDBIMK__CTOR_OFFSET UNITYSDK_OFFSET(0xE0E6FA0)

inline static constexpr unsigned int OCLKCMDBIMK_TypeDefinitionIndex = 56722;

class OCLKCMDBIMK : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* PNCNPGAACAA; // 0x18
	::UnityEngine::RectTransform* MLHMOBNFPMK; // 0x20
	::UnityEngine::RectTransform* IKOFJEHPPAN; // 0x28
	::GCIMMDDIFBJ* BGAAIKGMOMO; // 0x30
	::FGCOIBFFCHB* OBEMLOACGAF; // 0x38
	::UnityEngine::RectTransform* JHEHEKPDLEH; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCLKCMDBIMK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OCLKCMDBIMK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OCLKCMDBIMK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCLKCMDBIMK_KGEBDLGBGNM_OFFSET))(this);
	}
};
