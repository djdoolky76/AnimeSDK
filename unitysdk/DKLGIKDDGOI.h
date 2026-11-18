#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define DKLGIKDDGOI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x149B49F0)
#define DKLGIKDDGOI_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x149B4960)
#define DKLGIKDDGOI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x149B4790)
#define DKLGIKDDGOI__CTOR_OFFSET UNITYSDK_OFFSET(0x149B49E0)

inline static constexpr unsigned int DKLGIKDDGOI_TypeDefinitionIndex = 92035;

class DKLGIKDDGOI : public ::GIBMJLOJLKD
{
public:
	::GCIMMDDIFBJ* BGAAIKGMOMO; // 0x18
	::UnityEngine::RectTransform* MLHMOBNFPMK; // 0x20
	::UnityEngine::RectTransform* JHEHEKPDLEH; // 0x28
	::UnityEngine::RectTransform* IKOFJEHPPAN; // 0x30
	::FGCOIBFFCHB* OBEMLOACGAF; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKLGIKDDGOI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DKLGIKDDGOI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DKLGIKDDGOI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKLGIKDDGOI_KGEBDLGBGNM_OFFSET))(this);
	}
};
