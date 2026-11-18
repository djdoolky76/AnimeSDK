#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define FJMNEIDAPLL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x11C56DE0)
#define FJMNEIDAPLL_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x11C56CE0)
#define FJMNEIDAPLL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11C56AF0)
#define FJMNEIDAPLL__CTOR_OFFSET UNITYSDK_OFFSET(0x11C56DD0)

inline static constexpr unsigned int FJMNEIDAPLL_TypeDefinitionIndex = 86591;

class FJMNEIDAPLL : public ::GIBMJLOJLKD
{
public:
	::MoleMole::MonoGamepadModule* CIJBDBJMJOK; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* BHMBBMMBPIN; // 0x20
	::FGCOIBFFCHB* GBAENOMACIG; // 0x28
	::LGINJIKKBJA* FKCDCPIJHDH; // 0x30
	::FGCOIBFFCHB* BOIPPCMBGPI; // 0x38
	::FGCOIBFFCHB* HBPKENOFMAC; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJMNEIDAPLL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FJMNEIDAPLL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJMNEIDAPLL_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FJMNEIDAPLL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
