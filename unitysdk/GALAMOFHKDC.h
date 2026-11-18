#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define GALAMOFHKDC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13DABD60)
#define GALAMOFHKDC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13DABCA0)
#define GALAMOFHKDC__CTOR_OFFSET UNITYSDK_OFFSET(0x13DABD50)

inline static constexpr unsigned int GALAMOFHKDC_TypeDefinitionIndex = 65532;

class GALAMOFHKDC : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* BMLHGEJLNHK; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* IGMLLFPCOGE; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GALAMOFHKDC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GALAMOFHKDC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GALAMOFHKDC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
