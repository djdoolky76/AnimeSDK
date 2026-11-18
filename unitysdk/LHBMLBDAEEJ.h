#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }

#define LHBMLBDAEEJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1684DEE0)
#define LHBMLBDAEEJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1684DE10)
#define LHBMLBDAEEJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1684DED0)

inline static constexpr unsigned int LHBMLBDAEEJ_TypeDefinitionIndex = 70334;

class LHBMLBDAEEJ : public ::GIBMJLOJLKD
{
public:
	::GCIMMDDIFBJ* JGCLHCNHKJE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHBMLBDAEEJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LHBMLBDAEEJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LHBMLBDAEEJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
