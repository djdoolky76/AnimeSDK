#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MICHFMJIKKC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x156AF2D0)
#define MICHFMJIKKC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x156AF1C0)
#define MICHFMJIKKC__CTOR_OFFSET UNITYSDK_OFFSET(0x156AF2C0)

inline static constexpr unsigned int MICHFMJIKKC_TypeDefinitionIndex = 82528;

class MICHFMJIKKC : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* KELCOMKDLCL; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* JHGGHHOJDPF; // 0x20
	::UnityEngine::RectTransform* AOCLGOEJDAJ; // 0x28
	::UnityEngine::RectTransform* APPJCOHJEFL; // 0x30
	::UnityEngine::RectTransform* EBGGJKEIFIO; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICHFMJIKKC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MICHFMJIKKC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MICHFMJIKKC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
