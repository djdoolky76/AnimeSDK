#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI { class Slider; }

#define JCDFANNCOEB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1872E170)
#define JCDFANNCOEB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1872E0D0)
#define JCDFANNCOEB__CTOR_OFFSET UNITYSDK_OFFSET(0x1872E160)

inline static constexpr unsigned int JCDFANNCOEB_TypeDefinitionIndex = 63453;

class JCDFANNCOEB : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Slider* LEKGFHLLKCC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDFANNCOEB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JCDFANNCOEB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JCDFANNCOEB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
