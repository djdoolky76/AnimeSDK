#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define FPLCAHKEBOL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1411A5A0)
#define FPLCAHKEBOL_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1411A4F0)
#define FPLCAHKEBOL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1411A360)
#define FPLCAHKEBOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1411A590)

inline static constexpr unsigned int FPLCAHKEBOL_TypeDefinitionIndex = 38469;

class FPLCAHKEBOL : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* BMLHGEJLNHK; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* IGMLLFPCOGE; // 0x20
	::FGCOIBFFCHB* POPGLGEDFFG; // 0x28
	::FGCOIBFFCHB* HIKHFOHLCIB; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPLCAHKEBOL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FPLCAHKEBOL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPLCAHKEBOL_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FPLCAHKEBOL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
