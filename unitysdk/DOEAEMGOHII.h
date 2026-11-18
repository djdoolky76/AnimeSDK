#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
class MonoGeneralLevelUpConfig;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define DOEAEMGOHII_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16BC37F0)
#define DOEAEMGOHII_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16BC3760)
#define DOEAEMGOHII_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16BC35B0)
#define DOEAEMGOHII__CTOR_OFFSET UNITYSDK_OFFSET(0x16BC37E0)

inline static constexpr unsigned int DOEAEMGOHII_TypeDefinitionIndex = 77122;

class DOEAEMGOHII : public ::GIBMJLOJLKD
{
public:
	::GCIMMDDIFBJ* HGEBLKNDDPG; // 0x18
	::MonoGeneralLevelUpConfig* AHMFPFACACD; // 0x20
	::FGCOIBFFCHB* BAOBIBPKOEK; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* DBBDKLENOKD; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOEAEMGOHII__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DOEAEMGOHII_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DOEAEMGOHII_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOEAEMGOHII_KGEBDLGBGNM_OFFSET))(this);
	}
};
