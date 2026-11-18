#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }

#define HFHNMNEIBHD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13D8B8D0)
#define HFHNMNEIBHD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13D8B800)
#define HFHNMNEIBHD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13D8B660)
#define HFHNMNEIBHD__CTOR_OFFSET UNITYSDK_OFFSET(0x13D8B8C0)

inline static constexpr unsigned int HFHNMNEIBHD_TypeDefinitionIndex = 85014;

class HFHNMNEIBHD : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x18
	::FGCOIBFFCHB* HELAMPHDBEH; // 0x20
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFHNMNEIBHD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HFHNMNEIBHD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFHNMNEIBHD_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HFHNMNEIBHD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
