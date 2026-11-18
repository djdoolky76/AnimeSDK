#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define AMDLPNPLKNI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1550B630)
#define AMDLPNPLKNI_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1550B5A0)
#define AMDLPNPLKNI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1550B420)
#define AMDLPNPLKNI__CTOR_OFFSET UNITYSDK_OFFSET(0x1550B620)

inline static constexpr unsigned int AMDLPNPLKNI_TypeDefinitionIndex = 86742;

class AMDLPNPLKNI : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* AFDBICIGLCI; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* PDMIIBMMKIP; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* BJGCPONFECO; // 0x28
	::FGCOIBFFCHB* FDJHEBHLJLD; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMDLPNPLKNI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AMDLPNPLKNI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AMDLPNPLKNI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMDLPNPLKNI_KGEBDLGBGNM_OFFSET))(this);
	}
};
