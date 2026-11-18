#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define EDFEOHHOENF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x141471B0)
#define EDFEOHHOENF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14147120)
#define EDFEOHHOENF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14146E80)
#define EDFEOHHOENF__CTOR_OFFSET UNITYSDK_OFFSET(0x141471A0)

inline static constexpr unsigned int EDFEOHHOENF_TypeDefinitionIndex = 40445;

class EDFEOHHOENF : public ::GIBMJLOJLKD
{
public:
	::MoleMole::UIGeneralButtonController* PMBLECALCKB; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* BJBGIMJKCDA; // 0x20
	::FGCOIBFFCHB* KKIEAHAKFKM; // 0x28
	::MoleMole::UIGeneralButtonController* IIAPIPEOJCO; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* PNDHOGLJAHH; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDFEOHHOENF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EDFEOHHOENF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDFEOHHOENF_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EDFEOHHOENF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
