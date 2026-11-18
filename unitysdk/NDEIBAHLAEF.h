#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
class MonoGeneralLevelUpConfig;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define NDEIBAHLAEF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x131363D0)
#define NDEIBAHLAEF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x131362C0)
#define NDEIBAHLAEF__CTOR_OFFSET UNITYSDK_OFFSET(0x131363C0)

inline static constexpr unsigned int NDEIBAHLAEF_TypeDefinitionIndex = 41552;

class NDEIBAHLAEF : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* BMGLEAINAEK; // 0x18
	::GCIMMDDIFBJ* HGEBLKNDDPG; // 0x20
	::MonoGeneralLevelUpConfig* AHMFPFACACD; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDEIBAHLAEF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NDEIBAHLAEF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NDEIBAHLAEF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
