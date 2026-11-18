#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define PHOOEMBHAGP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15541320)
#define PHOOEMBHAGP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15541260)
#define PHOOEMBHAGP__CTOR_OFFSET UNITYSDK_OFFSET(0x15541310)

inline static constexpr unsigned int PHOOEMBHAGP_TypeDefinitionIndex = 91080;

class PHOOEMBHAGP : public ::GIBMJLOJLKD
{
public:
	::MoleMole::UIGeneralButtonController* FBIHFNOOPBG; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* JJBCJGPICJO; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHOOEMBHAGP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PHOOEMBHAGP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PHOOEMBHAGP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
