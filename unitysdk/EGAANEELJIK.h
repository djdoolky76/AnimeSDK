#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
class MonoGeneralLevelUpConfig;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define EGAANEELJIK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x135471C0)
#define EGAANEELJIK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13547110)
#define EGAANEELJIK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13546F10)
#define EGAANEELJIK__CTOR_OFFSET UNITYSDK_OFFSET(0x135471B0)

inline static constexpr unsigned int EGAANEELJIK_TypeDefinitionIndex = 53048;

class EGAANEELJIK : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* ELOPCMHPEID; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* GHKONLOGJNP; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* AGCCEHDJPID; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* BMGLEAINAEK; // 0x30
	::GCIMMDDIFBJ* HGEBLKNDDPG; // 0x38
	::MonoGeneralLevelUpConfig* AHMFPFACACD; // 0x40
	::FGCOIBFFCHB* PODLCCMICAN; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGAANEELJIK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EGAANEELJIK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EGAANEELJIK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGAANEELJIK_KGEBDLGBGNM_OFFSET))(this);
	}
};
