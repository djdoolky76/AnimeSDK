#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MHBFBEDNKAO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1853A600)
#define MHBFBEDNKAO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1853A540)
#define MHBFBEDNKAO__CTOR_OFFSET UNITYSDK_OFFSET(0x1853A5F0)

inline static constexpr unsigned int MHBFBEDNKAO_TypeDefinitionIndex = 80241;

class MHBFBEDNKAO : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* KONECGFJLBC; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* EKBJMKEFHEG; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHBFBEDNKAO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MHBFBEDNKAO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MHBFBEDNKAO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
