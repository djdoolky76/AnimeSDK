#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define JANNNECNKPK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x197F0BF0)
#define JANNNECNKPK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x197F0B60)
#define JANNNECNKPK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x197F09F0)
#define JANNNECNKPK__CTOR_OFFSET UNITYSDK_OFFSET(0x197F0BE0)

inline static constexpr unsigned int JANNNECNKPK_TypeDefinitionIndex = 65237;

class JANNNECNKPK : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* IGMLLFPCOGE; // 0x18
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x20
	::UnityEngine::RectTransform* LLNLKIKBBMF; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JANNNECNKPK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JANNNECNKPK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JANNNECNKPK_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JANNNECNKPK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
