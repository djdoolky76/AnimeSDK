#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CNAOJBNIGPE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x145D9000)
#define CNAOJBNIGPE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x145D8F70)
#define CNAOJBNIGPE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x145D8DD0)
#define CNAOJBNIGPE__CTOR_OFFSET UNITYSDK_OFFSET(0x145D8FF0)

inline static constexpr unsigned int CNAOJBNIGPE_TypeDefinitionIndex = 90721;

class CNAOJBNIGPE : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* PMFAEAHBHKL; // 0x18
	::FGCOIBFFCHB* FOLEHLMBOJB; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* PKGFLFLBFLE; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* HDJPMKNLDBC; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* IBPGPKFLKEC; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNAOJBNIGPE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CNAOJBNIGPE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CNAOJBNIGPE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNAOJBNIGPE_KGEBDLGBGNM_OFFSET))(this);
	}
};
