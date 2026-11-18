#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define OAIDAAOPBBE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13661680)
#define OAIDAAOPBBE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x136615A0)
#define OAIDAAOPBBE__CTOR_OFFSET UNITYSDK_OFFSET(0x13661670)

inline static constexpr unsigned int OAIDAAOPBBE_TypeDefinitionIndex = 65746;

class OAIDAAOPBBE : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* NHHOPHAHAGB; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* DBCNOFDNEAP; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* CKMFCKGBDEO; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAIDAAOPBBE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OAIDAAOPBBE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OAIDAAOPBBE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
