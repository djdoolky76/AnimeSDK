#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define KJPEJBGHNCG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1995C3D0)
#define KJPEJBGHNCG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1995C300)
#define KJPEJBGHNCG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1995C1E0)
#define KJPEJBGHNCG__CTOR_OFFSET UNITYSDK_OFFSET(0x1995C3C0)

inline static constexpr unsigned int KJPEJBGHNCG_TypeDefinitionIndex = 41464;

class KJPEJBGHNCG : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UITimeWidget* EAFAECECFFH; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* JNBMKGEJEBE; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJPEJBGHNCG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KJPEJBGHNCG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KJPEJBGHNCG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJPEJBGHNCG_KGEBDLGBGNM_OFFSET))(this);
	}
};
