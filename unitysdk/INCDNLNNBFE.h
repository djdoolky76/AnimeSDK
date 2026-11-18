#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define INCDNLNNBFE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1ACC2060)
#define INCDNLNNBFE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1ACC1FD0)
#define INCDNLNNBFE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1ACC1DD0)
#define INCDNLNNBFE__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACC2050)

inline static constexpr unsigned int INCDNLNNBFE_TypeDefinitionIndex = 89002;

class INCDNLNNBFE : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* BIGMAIMFEOB; // 0x18
	::UnityEngine::UI::Extension::UITabButton* HJDAMCBKNEI; // 0x20
	::MoleMole::NotificationBadgeEx* MAMKMHKDPCA; // 0x28
	::UnityEngine::GameObject* DPNLLKMJMMB; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* BAHFPKPBFHP; // 0x38
	::FGCOIBFFCHB* JNHEEMDBPIC; // 0x40
	::UnityEngine::GameObject* AJIBHBJNOCE; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* NLFEHCFAKNK; // 0x50
	::UnityEngine::GameObject* DGJFMEGHDBE; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCDNLNNBFE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + INCDNLNNBFE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + INCDNLNNBFE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCDNLNNBFE_KGEBDLGBGNM_OFFSET))(this);
	}
};
