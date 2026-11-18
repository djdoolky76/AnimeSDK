#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }

#define OEJJDFNEPCH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1B77BF90)
#define OEJJDFNEPCH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1B77BF00)
#define OEJJDFNEPCH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1B77BDC0)
#define OEJJDFNEPCH__CTOR_OFFSET UNITYSDK_OFFSET(0x1B77BF80)

inline static constexpr unsigned int OEJJDFNEPCH_TypeDefinitionIndex = 86460;

class OEJJDFNEPCH : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* OBEMLOACGAF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEJJDFNEPCH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OEJJDFNEPCH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OEJJDFNEPCH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEJJDFNEPCH_KGEBDLGBGNM_OFFSET))(this);
	}
};
