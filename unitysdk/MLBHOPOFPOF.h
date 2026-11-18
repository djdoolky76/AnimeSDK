#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }

#define MLBHOPOFPOF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x151E9C80)
#define MLBHOPOFPOF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x151E9BB0)
#define MLBHOPOFPOF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x151E9A70)
#define MLBHOPOFPOF__CTOR_OFFSET UNITYSDK_OFFSET(0x151E9C70)

inline static constexpr unsigned int MLBHOPOFPOF_TypeDefinitionIndex = 64689;

class MLBHOPOFPOF : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* BAOBIBPKOEK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLBHOPOFPOF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MLBHOPOFPOF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLBHOPOFPOF_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MLBHOPOFPOF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
