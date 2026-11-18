#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UIToggleButton; }

#define MPNDNHKIJMM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x11E4A790)
#define MPNDNHKIJMM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x11E4A700)
#define MPNDNHKIJMM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11E4A500)
#define MPNDNHKIJMM__CTOR_OFFSET UNITYSDK_OFFSET(0x11E4A780)

inline static constexpr unsigned int MPNDNHKIJMM_TypeDefinitionIndex = 65995;

class MPNDNHKIJMM : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* DPNLLKMJMMB; // 0x18
	::UnityEngine::UI::Extension::UIToggleButton* KHOJKFHFKIJ; // 0x20
	::FGCOIBFFCHB* JNHEEMDBPIC; // 0x28
	::UnityEngine::GameObject* AJIBHBJNOCE; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* NLFEHCFAKNK; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* BAHFPKPBFHP; // 0x40
	::MoleMole::NotificationBadgeEx* MAMKMHKDPCA; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* BIGMAIMFEOB; // 0x50
	::UnityEngine::GameObject* DGJFMEGHDBE; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPNDNHKIJMM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MPNDNHKIJMM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MPNDNHKIJMM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPNDNHKIJMM_KGEBDLGBGNM_OFFSET))(this);
	}
};
