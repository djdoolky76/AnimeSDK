#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define OEFECPDOICB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14F6E1B0)
#define OEFECPDOICB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14F6E120)
#define OEFECPDOICB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14F6DF70)
#define OEFECPDOICB__CTOR_OFFSET UNITYSDK_OFFSET(0x14F6E1A0)

inline static constexpr unsigned int OEFECPDOICB_TypeDefinitionIndex = 45108;

class OEFECPDOICB : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* FKILIGLNPCF; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* EDLKACKNNPO; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* EABHDJGJLLA; // 0x28
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* CINBBFLIGAH; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* MOEHDACJOGD; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEFECPDOICB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OEFECPDOICB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OEFECPDOICB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEFECPDOICB_KGEBDLGBGNM_OFFSET))(this);
	}
};
