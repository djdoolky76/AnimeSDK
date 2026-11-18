#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define IOGPFDNFPEF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13AB1CE0)
#define IOGPFDNFPEF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13AB1BD0)
#define IOGPFDNFPEF__CTOR_OFFSET UNITYSDK_OFFSET(0x13AB1CD0)

inline static constexpr unsigned int IOGPFDNFPEF_TypeDefinitionIndex = 84690;

class IOGPFDNFPEF : public ::GIBMJLOJLKD
{
public:
	::MoleMole::UIGeneralButtonController* NBFCNDIFJHF; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* HCOHONOBCEF; // 0x20
	::UnityEngine::RectTransform* FDJHEBHLJLD; // 0x28
	::UnityEngine::RectTransform* DEIPJONPFNG; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOGPFDNFPEF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IOGPFDNFPEF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IOGPFDNFPEF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
