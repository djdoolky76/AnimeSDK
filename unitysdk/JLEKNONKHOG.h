#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define JLEKNONKHOG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x18742BC0)
#define JLEKNONKHOG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x18742B30)
#define JLEKNONKHOG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x187429C0)
#define JLEKNONKHOG__CTOR_OFFSET UNITYSDK_OFFSET(0x18742BB0)

inline static constexpr unsigned int JLEKNONKHOG_TypeDefinitionIndex = 58592;

class JLEKNONKHOG : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* KBJFJEMKMFO; // 0x18
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x20
	::UnityEngine::RectTransform* EAPILIGGMKG; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLEKNONKHOG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JLEKNONKHOG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JLEKNONKHOG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLEKNONKHOG_KGEBDLGBGNM_OFFSET))(this);
	}
};
