#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }

#define AGBFEINKAIA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x144D8BD0)
#define AGBFEINKAIA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x144D8B00)
#define AGBFEINKAIA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x144D8980)
#define AGBFEINKAIA__CTOR_OFFSET UNITYSDK_OFFSET(0x144D8BC0)

inline static constexpr unsigned int AGBFEINKAIA_TypeDefinitionIndex = 39796;

class AGBFEINKAIA : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* PJGLNHAAGOD; // 0x18
	::LGINJIKKBJA* DDPMCFOFMFA; // 0x20
	::LGINJIKKBJA* IANGJEEIJCP; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBFEINKAIA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AGBFEINKAIA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AGBFEINKAIA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBFEINKAIA_KGEBDLGBGNM_OFFSET))(this);
	}
};
