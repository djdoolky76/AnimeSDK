#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define NOBFPLOLBIA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xE777AC0)
#define NOBFPLOLBIA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xE7779D0)
#define NOBFPLOLBIA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xE777830)
#define NOBFPLOLBIA__CTOR_OFFSET UNITYSDK_OFFSET(0xE777AB0)

inline static constexpr unsigned int NOBFPLOLBIA_TypeDefinitionIndex = 66751;

class NOBFPLOLBIA : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x18
	::FGCOIBFFCHB* NBJLOGHOFLN; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* IODBDPOLPKA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOBFPLOLBIA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NOBFPLOLBIA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NOBFPLOLBIA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOBFPLOLBIA_KGEBDLGBGNM_OFFSET))(this);
	}
};
