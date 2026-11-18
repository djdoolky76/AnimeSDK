#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILinearProgressBar; }

#define FJFICIANMKB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1429B810)
#define FJFICIANMKB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1429B770)
#define FJFICIANMKB__CTOR_OFFSET UNITYSDK_OFFSET(0x1429B800)

inline static constexpr unsigned int FJFICIANMKB_TypeDefinitionIndex = 75151;

class FJFICIANMKB : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILinearProgressBar* KKOJIGEFPBM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJFICIANMKB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FJFICIANMKB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FJFICIANMKB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
