#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }

#define BGLCGNOCLPO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x186797E0)
#define BGLCGNOCLPO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x18679710)
#define BGLCGNOCLPO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x186795D0)
#define BGLCGNOCLPO__CTOR_OFFSET UNITYSDK_OFFSET(0x186797D0)

inline static constexpr unsigned int BGLCGNOCLPO_TypeDefinitionIndex = 60045;

class BGLCGNOCLPO : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* MCBLBOLNFPL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGLCGNOCLPO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BGLCGNOCLPO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BGLCGNOCLPO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGLCGNOCLPO_KGEBDLGBGNM_OFFSET))(this);
	}
};
