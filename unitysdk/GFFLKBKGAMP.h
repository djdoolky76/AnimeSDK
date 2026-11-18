#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define GFFLKBKGAMP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14CE2450)
#define GFFLKBKGAMP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14CE2350)
#define GFFLKBKGAMP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14CE2190)
#define GFFLKBKGAMP__CTOR_OFFSET UNITYSDK_OFFSET(0x14CE2440)

inline static constexpr unsigned int GFFLKBKGAMP_TypeDefinitionIndex = 55826;

class GFFLKBKGAMP : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* BBGCCMMOKFP; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* HBADNCJHEOJ; // 0x20
	::FGCOIBFFCHB* LFPIAMKMOFN; // 0x28
	::FGCOIBFFCHB* ANEEEIBEEPJ; // 0x30
	::FGCOIBFFCHB* GFIPBLEEAIP; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFFLKBKGAMP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GFFLKBKGAMP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GFFLKBKGAMP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFFLKBKGAMP_KGEBDLGBGNM_OFFSET))(this);
	}
};
