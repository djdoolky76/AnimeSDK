#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define FLPBDANPMAB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x132288C0)
#define FLPBDANPMAB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x132287F0)
#define FLPBDANPMAB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x132286D0)
#define FLPBDANPMAB__CTOR_OFFSET UNITYSDK_OFFSET(0x132288B0)

inline static constexpr unsigned int FLPBDANPMAB_TypeDefinitionIndex = 39364;

class FLPBDANPMAB : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* DBBDKLENOKD; // 0x18
	::UnityEngine::UI::Extension::UITimeWidget* NPCIPCPJEMF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLPBDANPMAB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FLPBDANPMAB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FLPBDANPMAB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLPBDANPMAB_KGEBDLGBGNM_OFFSET))(this);
	}
};
