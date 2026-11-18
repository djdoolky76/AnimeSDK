#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define IHJFIOOEJFE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x141D8B50)
#define IHJFIOOEJFE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x141D8AA0)
#define IHJFIOOEJFE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x141D8870)
#define IHJFIOOEJFE__CTOR_OFFSET UNITYSDK_OFFSET(0x141D8B40)

inline static constexpr unsigned int IHJFIOOEJFE_TypeDefinitionIndex = 67568;

class IHJFIOOEJFE : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* DEIPJONPFNG; // 0x18
	::UnityEngine::GameObject* COEGDCPBBAB; // 0x20
	::UnityEngine::GameObject* FKKFDIACHKN; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* LONDMNEMFKN; // 0x30
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x38
	::UnityEngine::GameObject* JOBJDBBKHBM; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* IKOFJEHPPAN; // 0x48
	::MoleMole::NotificationBadgeEx* FLANDOHPICD; // 0x50
	::LGINJIKKBJA* NPHPKPAPBNF; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHJFIOOEJFE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IHJFIOOEJFE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IHJFIOOEJFE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHJFIOOEJFE_KGEBDLGBGNM_OFFSET))(this);
	}
};
