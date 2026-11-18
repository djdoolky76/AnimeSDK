#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define KGINFKNBJAK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1770B550)
#define KGINFKNBJAK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1770B480)
#define KGINFKNBJAK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1770B330)
#define KGINFKNBJAK__CTOR_OFFSET UNITYSDK_OFFSET(0x1770B540)

inline static constexpr unsigned int KGINFKNBJAK_TypeDefinitionIndex = 92030;

class KGINFKNBJAK : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* DEAPLILJLJD; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* HBADNCJHEOJ; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGINFKNBJAK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KGINFKNBJAK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KGINFKNBJAK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGINFKNBJAK_KGEBDLGBGNM_OFFSET))(this);
	}
};
