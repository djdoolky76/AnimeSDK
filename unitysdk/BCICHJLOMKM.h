#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }

#define BCICHJLOMKM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1701C840)
#define BCICHJLOMKM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1701C770)
#define BCICHJLOMKM__CTOR_OFFSET UNITYSDK_OFFSET(0x1701C830)

inline static constexpr unsigned int BCICHJLOMKM_TypeDefinitionIndex = 59996;

class BCICHJLOMKM : public ::GIBMJLOJLKD
{
public:
	::GCIMMDDIFBJ* OIKFFMHNCHB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCICHJLOMKM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BCICHJLOMKM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BCICHJLOMKM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
