#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define LHOAOJLOMPL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16C518E0)
#define LHOAOJLOMPL_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16C51850)
#define LHOAOJLOMPL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16C51620)
#define LHOAOJLOMPL__CTOR_OFFSET UNITYSDK_OFFSET(0x16C518D0)

inline static constexpr unsigned int LHOAOJLOMPL_TypeDefinitionIndex = 41494;

class LHOAOJLOMPL : public ::GIBMJLOJLKD
{
public:
	::GCIMMDDIFBJ* BGAAIKGMOMO; // 0x18
	::UnityEngine::GameObject* CFJECEMLDEG; // 0x20
	::UnityEngine::RectTransform* IKOFJEHPPAN; // 0x28
	::UnityEngine::RectTransform* JHEHEKPDLEH; // 0x30
	::UnityEngine::GameObject* PNCNPGAACAA; // 0x38
	::UnityEngine::RectTransform* MLHMOBNFPMK; // 0x40
	::GCIMMDDIFBJ* KNEHCGPNIGP; // 0x48
	::UnityEngine::GameObject* GJJKEOLNAJG; // 0x50
	::FGCOIBFFCHB* OBEMLOACGAF; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHOAOJLOMPL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LHOAOJLOMPL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHOAOJLOMPL_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LHOAOJLOMPL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
