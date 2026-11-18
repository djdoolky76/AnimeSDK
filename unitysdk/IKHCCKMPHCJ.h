#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }

#define IKHCCKMPHCJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1657DFC0)
#define IKHCCKMPHCJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1657DEF0)
#define IKHCCKMPHCJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1657DFB0)

inline static constexpr unsigned int IKHCCKMPHCJ_TypeDefinitionIndex = 87179;

class IKHCCKMPHCJ : public ::GIBMJLOJLKD
{
public:
	::GCIMMDDIFBJ* CMCAKLMEKMP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKHCCKMPHCJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IKHCCKMPHCJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IKHCCKMPHCJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
