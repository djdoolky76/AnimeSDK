#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define HCCKPMPNFOB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16CE0A70)
#define HCCKPMPNFOB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16CE09A0)
#define HCCKPMPNFOB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16CE0850)
#define HCCKPMPNFOB__CTOR_OFFSET UNITYSDK_OFFSET(0x16CE0A60)

inline static constexpr unsigned int HCCKPMPNFOB_TypeDefinitionIndex = 85095;

class HCCKPMPNFOB : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* IODBDPOLPKA; // 0x18
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCCKPMPNFOB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HCCKPMPNFOB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCCKPMPNFOB_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HCCKPMPNFOB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
