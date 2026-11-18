#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define JBIKMKCONPG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13067BE0)
#define JBIKMKCONPG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13067AF0)
#define JBIKMKCONPG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13067960)
#define JBIKMKCONPG__CTOR_OFFSET UNITYSDK_OFFSET(0x13067BD0)

inline static constexpr unsigned int JBIKMKCONPG_TypeDefinitionIndex = 46493;

class JBIKMKCONPG : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* LCMFDNOPFCM; // 0x18
	::FGCOIBFFCHB* HIKIFHPALMH; // 0x20
	::FGCOIBFFCHB* JOKJCOIIBIO; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* LLNODEJFGMO; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBIKMKCONPG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JBIKMKCONPG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBIKMKCONPG_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JBIKMKCONPG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
