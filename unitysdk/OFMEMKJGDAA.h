#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define OFMEMKJGDAA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xE14A510)
#define OFMEMKJGDAA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xE14A440)
#define OFMEMKJGDAA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xE14A2C0)
#define OFMEMKJGDAA__CTOR_OFFSET UNITYSDK_OFFSET(0xE14A500)

inline static constexpr unsigned int OFMEMKJGDAA_TypeDefinitionIndex = 68506;

class OFMEMKJGDAA : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* EHMFOJCMDJP; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* ENIBKHLDKNG; // 0x20
	::LGINJIKKBJA* FBIHFNOOPBG; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* HCCHAIIICAD; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFMEMKJGDAA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OFMEMKJGDAA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFMEMKJGDAA_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OFMEMKJGDAA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
