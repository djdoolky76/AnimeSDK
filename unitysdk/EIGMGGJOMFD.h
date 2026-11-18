#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class UIControllerExtensionData;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define EIGMGGJOMFD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16BEA730)
#define EIGMGGJOMFD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16BEA660)
#define EIGMGGJOMFD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16BEA480)
#define EIGMGGJOMFD__CTOR_OFFSET UNITYSDK_OFFSET(0x16BEA720)

inline static constexpr unsigned int EIGMGGJOMFD_TypeDefinitionIndex = 54514;

class EIGMGGJOMFD : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* HBADNCJHEOJ; // 0x20
	::UIControllerExtensionData* GNHHKKAAJAA; // 0x28
	::FGCOIBFFCHB* JLLJPNMPKJA; // 0x30
	::FGCOIBFFCHB* AJDEFGLEGMP; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* MGEDBKBHJPM; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIGMGGJOMFD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EIGMGGJOMFD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIGMGGJOMFD_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EIGMGGJOMFD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
