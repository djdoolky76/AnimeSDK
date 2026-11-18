#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define GOFGIDGINKJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16CD91D0)
#define GOFGIDGINKJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16CD9100)
#define GOFGIDGINKJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16CD8E70)
#define GOFGIDGINKJ__CTOR_OFFSET UNITYSDK_OFFSET(0x16CD91C0)

inline static constexpr unsigned int GOFGIDGINKJ_TypeDefinitionIndex = 76207;

class GOFGIDGINKJ : public ::GIBMJLOJLKD
{
public:
	::MonoUITableScrollV2* CFDDJINKOCB; // 0x18
	::MoleMole::MonoGamepadSelectable* JKGFAGMDLHL; // 0x20
	::MoleMole::UIGeneralButtonController* DDPMCFOFMFA; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* OAKAIIJLMIL; // 0x30
	::UnityEngine::GameObject* FDJHEBHLJLD; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* ECJCMIGKCDL; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* FOLJALJLEAG; // 0x48
	::UnityEngine::GameObject* IEMPKFNGAOB; // 0x50
	::UnityEngine::Transform* OOENDNEIFDO; // 0x58
	::UnityEngine::GameObject* FIOPMNMJBCG; // 0x60
	::FGCOIBFFCHB* GBAENOMACIG; // 0x68
	::UnityEngine::UI::Extension::UILocalizationText* JGAMKHLLKMP; // 0x70
	::UnityEngine::GameObject* DPNLLKMJMMB; // 0x78
	::UnityEngine::UI::Extension::UILocalizationText* MFKBCHAJOGK; // 0x80
	::UnityEngine::GameObject* NBIPABGBOOD; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOFGIDGINKJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GOFGIDGINKJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GOFGIDGINKJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOFGIDGINKJ_KGEBDLGBGNM_OFFSET))(this);
	}
};
