#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define MOBIKGIHCIC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xFA7A400)
#define MOBIKGIHCIC_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xFA7A2C0)
#define MOBIKGIHCIC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xFA7A0D0)
#define MOBIKGIHCIC__CTOR_OFFSET UNITYSDK_OFFSET(0xFA7A3F0)

inline static constexpr unsigned int MOBIKGIHCIC_TypeDefinitionIndex = 78197;

class MOBIKGIHCIC : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UITimeWidget* EAFAECECFFH; // 0x18
	::LGINJIKKBJA* BKDDKDMILCA; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* KKDJOFFBOFK; // 0x28
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x30
	::LGINJIKKBJA* DNGFGABBHEG; // 0x38
	::FGCOIBFFCHB* IAOCBIHABLH; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOBIKGIHCIC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MOBIKGIHCIC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MOBIKGIHCIC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOBIKGIHCIC_KGEBDLGBGNM_OFFSET))(this);
	}
};
