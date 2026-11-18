#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define OFCPDPEGDEL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14F73F30)
#define OFCPDPEGDEL_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14F73E80)
#define OFCPDPEGDEL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14F73CC0)
#define OFCPDPEGDEL__CTOR_OFFSET UNITYSDK_OFFSET(0x14F73F20)

inline static constexpr unsigned int OFCPDPEGDEL_TypeDefinitionIndex = 70310;

class OFCPDPEGDEL : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* AAJIHFCEABI; // 0x18
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* NKADAPNGKAI; // 0x28
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x30
	::LGINJIKKBJA* ACAAAJMHIFH; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFCPDPEGDEL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OFCPDPEGDEL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OFCPDPEGDEL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFCPDPEGDEL_KGEBDLGBGNM_OFFSET))(this);
	}
};
