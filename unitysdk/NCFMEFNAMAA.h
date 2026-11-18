#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }

#define NCFMEFNAMAA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xE570270)
#define NCFMEFNAMAA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xE5701A0)
#define NCFMEFNAMAA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xE570050)
#define NCFMEFNAMAA__CTOR_OFFSET UNITYSDK_OFFSET(0xE570260)

inline static constexpr unsigned int NCFMEFNAMAA_TypeDefinitionIndex = 64329;

class NCFMEFNAMAA : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x18
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCFMEFNAMAA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NCFMEFNAMAA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NCFMEFNAMAA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCFMEFNAMAA_KGEBDLGBGNM_OFFSET))(this);
	}
};
