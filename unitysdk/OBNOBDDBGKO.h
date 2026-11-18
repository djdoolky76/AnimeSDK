#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }

#define OBNOBDDBGKO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xFD61450)
#define OBNOBDDBGKO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xFD61370)
#define OBNOBDDBGKO__CTOR_OFFSET UNITYSDK_OFFSET(0xFD61440)

inline static constexpr unsigned int OBNOBDDBGKO_TypeDefinitionIndex = 75360;

class OBNOBDDBGKO : public ::GIBMJLOJLKD
{
public:
	::MonoUITableScrollV2* KIBLHKKKNCB; // 0x18
	::MonoUITableScrollV2* PGGPACGPJBF; // 0x20
	::MonoUITableScrollV2* ADIHEDCMBHA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBNOBDDBGKO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OBNOBDDBGKO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OBNOBDDBGKO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
