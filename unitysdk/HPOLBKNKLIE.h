#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }

#define HPOLBKNKLIE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x140D2BA0)
#define HPOLBKNKLIE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x140D2B00)
#define HPOLBKNKLIE__CTOR_OFFSET UNITYSDK_OFFSET(0x140D2B90)

inline static constexpr unsigned int HPOLBKNKLIE_TypeDefinitionIndex = 42294;

class HPOLBKNKLIE : public ::GIBMJLOJLKD
{
public:
	::MonoUITableScrollV2* LOLFHMJCHNC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPOLBKNKLIE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HPOLBKNKLIE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HPOLBKNKLIE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
