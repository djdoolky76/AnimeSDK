#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }

#define NHOALEMEMKP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1375A450)
#define NHOALEMEMKP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1375A380)
#define NHOALEMEMKP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1375A240)
#define NHOALEMEMKP__CTOR_OFFSET UNITYSDK_OFFSET(0x1375A440)

inline static constexpr unsigned int NHOALEMEMKP_TypeDefinitionIndex = 56523;

class NHOALEMEMKP : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* BAOBIBPKOEK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHOALEMEMKP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NHOALEMEMKP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NHOALEMEMKP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHOALEMEMKP_KGEBDLGBGNM_OFFSET))(this);
	}
};
