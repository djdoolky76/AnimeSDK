#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }

#define DCEPLPGDOPE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x193F8890)
#define DCEPLPGDOPE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x193F87F0)
#define DCEPLPGDOPE__CTOR_OFFSET UNITYSDK_OFFSET(0x193F8880)

inline static constexpr unsigned int DCEPLPGDOPE_TypeDefinitionIndex = 85466;

class DCEPLPGDOPE : public ::GIBMJLOJLKD
{
public:
	::MonoUITableScrollV2* FCFOMDJBFMP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCEPLPGDOPE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DCEPLPGDOPE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DCEPLPGDOPE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
