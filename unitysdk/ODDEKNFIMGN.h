#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define ODDEKNFIMGN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1005DB20)
#define ODDEKNFIMGN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1005DA60)
#define ODDEKNFIMGN__CTOR_OFFSET UNITYSDK_OFFSET(0x1005DB10)

inline static constexpr unsigned int ODDEKNFIMGN_TypeDefinitionIndex = 92073;

class ODDEKNFIMGN : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* EICJEGMKLJJ; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* BFHDHAPPEJM; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODDEKNFIMGN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ODDEKNFIMGN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ODDEKNFIMGN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
