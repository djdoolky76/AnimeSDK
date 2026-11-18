#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define GJFOPICAIPM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15F23F80)
#define GJFOPICAIPM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15F23EF0)
#define GJFOPICAIPM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15F23CF0)
#define GJFOPICAIPM__CTOR_OFFSET UNITYSDK_OFFSET(0x15F23F70)

inline static constexpr unsigned int GJFOPICAIPM_TypeDefinitionIndex = 65017;

class GJFOPICAIPM : public ::GIBMJLOJLKD
{
public:
	::GCIMMDDIFBJ* BGAAIKGMOMO; // 0x18
	::UnityEngine::RectTransform* MLHMOBNFPMK; // 0x20
	::UnityEngine::GameObject* PNCNPGAACAA; // 0x28
	::UnityEngine::RectTransform* JHEHEKPDLEH; // 0x30
	::UnityEngine::GameObject* GJJKEOLNAJG; // 0x38
	::UnityEngine::RectTransform* IKOFJEHPPAN; // 0x40
	::FGCOIBFFCHB* OBEMLOACGAF; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJFOPICAIPM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GJFOPICAIPM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJFOPICAIPM_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GJFOPICAIPM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
