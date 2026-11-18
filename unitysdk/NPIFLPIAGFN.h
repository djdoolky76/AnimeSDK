#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define NPIFLPIAGFN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15FB6DD0)
#define NPIFLPIAGFN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15FB6D20)
#define NPIFLPIAGFN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15FB6B60)
#define NPIFLPIAGFN__CTOR_OFFSET UNITYSDK_OFFSET(0x15FB6DC0)

inline static constexpr unsigned int NPIFLPIAGFN_TypeDefinitionIndex = 58298;

class NPIFLPIAGFN : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* EBPGODBGOLI; // 0x18
	::UnityEngine::RectTransform* JLFJOJHAIGJ; // 0x20
	::UnityEngine::RectTransform* IOBFAMEDDEF; // 0x28
	::FGCOIBFFCHB* ANDFIBAKEAE; // 0x30
	::FGCOIBFFCHB* KKEMBAFDBEI; // 0x38
	::UnityEngine::RectTransform* FMBHOCGBIMM; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPIFLPIAGFN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NPIFLPIAGFN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NPIFLPIAGFN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPIFLPIAGFN_KGEBDLGBGNM_OFFSET))(this);
	}
};
