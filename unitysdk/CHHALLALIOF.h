#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CHHALLALIOF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1479DBE0)
#define CHHALLALIOF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1479DAF0)
#define CHHALLALIOF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1479D8B0)
#define CHHALLALIOF__CTOR_OFFSET UNITYSDK_OFFSET(0x1479DBD0)

inline static constexpr unsigned int CHHALLALIOF_TypeDefinitionIndex = 91581;

class CHHALLALIOF : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* GJNNECLHOEB; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* NINIFMIBDIE; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* HBADNCJHEOJ; // 0x28
	::GCIMMDDIFBJ* PGDNKCDOECI; // 0x30
	::UnityEngine::GameObject* FLOANEOLEFN; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* PNDHOGLJAHH; // 0x40
	::UnityEngine::RectTransform* PPGOGGMDMGF; // 0x48
	::GCIMMDDIFBJ* IJDPDOHOCGB; // 0x50
	::FGCOIBFFCHB* LLHPHHPDAAO; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHHALLALIOF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CHHALLALIOF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHHALLALIOF_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CHHALLALIOF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
