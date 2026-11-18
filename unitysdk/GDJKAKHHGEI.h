#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define GDJKAKHHGEI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x116E32D0)
#define GDJKAKHHGEI_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x116E3240)
#define GDJKAKHHGEI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x116E30C0)
#define GDJKAKHHGEI__CTOR_OFFSET UNITYSDK_OFFSET(0x116E32C0)

inline static constexpr unsigned int GDJKAKHHGEI_TypeDefinitionIndex = 58216;

class GDJKAKHHGEI : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* BJBGIMJKCDA; // 0x18
	::FGCOIBFFCHB* NLLGJOBIIEE; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* DOHOMIJBLLA; // 0x28
	::UnityEngine::RectTransform* KPCNHMMFCPN; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDJKAKHHGEI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GDJKAKHHGEI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GDJKAKHHGEI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDJKAKHHGEI_KGEBDLGBGNM_OFFSET))(this);
	}
};
