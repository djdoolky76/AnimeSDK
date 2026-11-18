#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }

#define GIHBEMGBHPL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x10EF70C0)
#define GIHBEMGBHPL_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x10EF6FF0)
#define GIHBEMGBHPL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x10EF6EB0)
#define GIHBEMGBHPL__CTOR_OFFSET UNITYSDK_OFFSET(0x10EF70B0)

inline static constexpr unsigned int GIHBEMGBHPL_TypeDefinitionIndex = 45107;

class GIHBEMGBHPL : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* KOFDFMEEENM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIHBEMGBHPL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GIHBEMGBHPL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIHBEMGBHPL_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GIHBEMGBHPL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
