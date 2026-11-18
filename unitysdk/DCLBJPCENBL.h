#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }

#define DCLBJPCENBL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14993FE0)
#define DCLBJPCENBL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14993F10)
#define DCLBJPCENBL__CTOR_OFFSET UNITYSDK_OFFSET(0x14993FD0)

inline static constexpr unsigned int DCLBJPCENBL_TypeDefinitionIndex = 61521;

class DCLBJPCENBL : public ::GIBMJLOJLKD
{
public:
	::GCIMMDDIFBJ* CMCAKLMEKMP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCLBJPCENBL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DCLBJPCENBL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DCLBJPCENBL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
