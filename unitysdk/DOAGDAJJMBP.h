#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define DOAGDAJJMBP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12428600)
#define DOAGDAJJMBP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x12428570)
#define DOAGDAJJMBP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x124283F0)
#define DOAGDAJJMBP__CTOR_OFFSET UNITYSDK_OFFSET(0x124285F0)

inline static constexpr unsigned int DOAGDAJJMBP_TypeDefinitionIndex = 62002;

class DOAGDAJJMBP : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* BAOBIBPKOEK; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* BJBGIMJKCDA; // 0x20
	::MoleMole::UIGeneralButtonController* HEOACLIFDNO; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* PNDHOGLJAHH; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOAGDAJJMBP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DOAGDAJJMBP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOAGDAJJMBP_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DOAGDAJJMBP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
