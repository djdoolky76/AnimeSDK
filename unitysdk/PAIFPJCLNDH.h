#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define PAIFPJCLNDH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16F9A8D0)
#define PAIFPJCLNDH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16F9A840)
#define PAIFPJCLNDH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16F9A690)
#define PAIFPJCLNDH__CTOR_OFFSET UNITYSDK_OFFSET(0x16F9A8C0)

inline static constexpr unsigned int PAIFPJCLNDH_TypeDefinitionIndex = 87485;

class PAIFPJCLNDH : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* PNDHOGLJAHH; // 0x18
	::MonoUITableScrollV2* CFDDJINKOCB; // 0x20
	::MoleMole::UIGeneralButtonController* PMBLECALCKB; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* BJBGIMJKCDA; // 0x30
	::MoleMole::UIGeneralButtonController* IIAPIPEOJCO; // 0x38
	::FGCOIBFFCHB* KKIEAHAKFKM; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAIFPJCLNDH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PAIFPJCLNDH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PAIFPJCLNDH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAIFPJCLNDH_KGEBDLGBGNM_OFFSET))(this);
	}
};
