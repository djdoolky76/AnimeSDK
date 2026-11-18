#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define JKMBEBEMFNI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1C3656F0)
#define JKMBEBEMFNI_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1C365660)
#define JKMBEBEMFNI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1C365520)
#define JKMBEBEMFNI__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3656E0)

inline static constexpr unsigned int JKMBEBEMFNI_TypeDefinitionIndex = 75018;

class JKMBEBEMFNI : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x18
	::UnityEngine::UI::Extension::UITimeWidget* EAFAECECFFH; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* HGABMBEKIFE; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKMBEBEMFNI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JKMBEBEMFNI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JKMBEBEMFNI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKMBEBEMFNI_KGEBDLGBGNM_OFFSET))(this);
	}
};
