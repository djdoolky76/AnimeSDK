#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define EADIKDCOOHA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15889DB0)
#define EADIKDCOOHA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15889CC0)
#define EADIKDCOOHA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15889B10)
#define EADIKDCOOHA__CTOR_OFFSET UNITYSDK_OFFSET(0x15889DA0)

inline static constexpr unsigned int EADIKDCOOHA_TypeDefinitionIndex = 61906;

class EADIKDCOOHA : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x18
	::MoleMole::MonoGamepadSelectable* NCJLJGGCOJK; // 0x20
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EADIKDCOOHA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EADIKDCOOHA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EADIKDCOOHA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EADIKDCOOHA_KGEBDLGBGNM_OFFSET))(this);
	}
};
