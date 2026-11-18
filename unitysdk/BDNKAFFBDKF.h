#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define BDNKAFFBDKF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1424B930)
#define BDNKAFFBDKF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1424B8A0)
#define BDNKAFFBDKF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1424B690)
#define BDNKAFFBDKF__CTOR_OFFSET UNITYSDK_OFFSET(0x1424B920)

inline static constexpr unsigned int BDNKAFFBDKF_TypeDefinitionIndex = 86254;

class BDNKAFFBDKF : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* DHHBPALIBAA; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* IOIHKNNEMEC; // 0x20
	::MoleMole::UIGeneralButtonController* PMBLECALCKB; // 0x28
	::FGCOIBFFCHB* KKIEAHAKFKM; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* LNOFBHNKBAM; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* EHBECAHPDAO; // 0x40
	::UnityEngine::GameObject* COPKFNAFGME; // 0x48
	::UnityEngine::GameObject* PIOGOCIGGCE; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* BJBGIMJKCDA; // 0x58
	::MoleMole::UIGeneralButtonController* IIAPIPEOJCO; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDNKAFFBDKF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BDNKAFFBDKF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BDNKAFFBDKF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDNKAFFBDKF_KGEBDLGBGNM_OFFSET))(this);
	}
};
