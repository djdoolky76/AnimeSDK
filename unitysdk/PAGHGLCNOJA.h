#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define PAGHGLCNOJA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1AFCCB70)
#define PAGHGLCNOJA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1AFCCAE0)
#define PAGHGLCNOJA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1AFCC8E0)
#define PAGHGLCNOJA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFCCB60)

inline static constexpr unsigned int PAGHGLCNOJA_TypeDefinitionIndex = 86691;

class PAGHGLCNOJA : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* EJHNNMBHAPK; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* JDJKPGMLGDN; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* EPMEILNJMFF; // 0x28
	::UnityEngine::RectTransform* OMIIGJEECOC; // 0x30
	::UnityEngine::RectTransform* FDJHEBHLJLD; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x40
	::FGCOIBFFCHB* FNNFFOGGJJK; // 0x48
	::UnityEngine::RectTransform* CJPLBOHFJBA; // 0x50
	::UnityEngine::RectTransform* DEIPJONPFNG; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAGHGLCNOJA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PAGHGLCNOJA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAGHGLCNOJA_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PAGHGLCNOJA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
