#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }

#define CNIDIDOPCDJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x147AE810)
#define CNIDIDOPCDJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x147AE780)
#define CNIDIDOPCDJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x147AE600)
#define CNIDIDOPCDJ__CTOR_OFFSET UNITYSDK_OFFSET(0x147AE800)

inline static constexpr unsigned int CNIDIDOPCDJ_TypeDefinitionIndex = 88248;

class CNIDIDOPCDJ : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* EPFNAHDACLG; // 0x18
	::GCIMMDDIFBJ* CMCAKLMEKMP; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNIDIDOPCDJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CNIDIDOPCDJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNIDIDOPCDJ_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CNIDIDOPCDJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
