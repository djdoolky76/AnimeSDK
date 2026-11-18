#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define EMAJDCNMNAH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1615FEE0)
#define EMAJDCNMNAH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1615FE10)
#define EMAJDCNMNAH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1615FC40)
#define EMAJDCNMNAH__CTOR_OFFSET UNITYSDK_OFFSET(0x1615FED0)

inline static constexpr unsigned int EMAJDCNMNAH_TypeDefinitionIndex = 87806;

class EMAJDCNMNAH : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* FGEBBICFENI; // 0x18
	::FGCOIBFFCHB* LGNLIBPJLEF; // 0x20
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* OAKNODKILCN; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* EAOFGEPFHKA; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* OAKAIIJLMIL; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMAJDCNMNAH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EMAJDCNMNAH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMAJDCNMNAH_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EMAJDCNMNAH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
