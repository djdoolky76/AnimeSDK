#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define JFGPFNFKBAN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x18A11080)
#define JFGPFNFKBAN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x18A10FB0)
#define JFGPFNFKBAN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x18A10E60)
#define JFGPFNFKBAN__CTOR_OFFSET UNITYSDK_OFFSET(0x18A11070)

inline static constexpr unsigned int JFGPFNFKBAN_TypeDefinitionIndex = 49117;

class JFGPFNFKBAN : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x18
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFGPFNFKBAN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JFGPFNFKBAN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFGPFNFKBAN_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JFGPFNFKBAN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
