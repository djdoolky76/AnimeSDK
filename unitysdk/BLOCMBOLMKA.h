#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define BLOCMBOLMKA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x169FA780)
#define BLOCMBOLMKA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x169FA6D0)
#define BLOCMBOLMKA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x169FA4B0)
#define BLOCMBOLMKA__CTOR_OFFSET UNITYSDK_OFFSET(0x169FA770)

inline static constexpr unsigned int BLOCMBOLMKA_TypeDefinitionIndex = 51161;

class BLOCMBOLMKA : public ::GIBMJLOJLKD
{
public:
	::MoleMole::MonoGamepadCustomList* GGJDBMNCFBH; // 0x18
	::MoleMole::NotificationBadgeEx* JFDOOELFAOA; // 0x20
	::GCIMMDDIFBJ* ODALDIOFMPH; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* DBBDKLENOKD; // 0x30
	::FGCOIBFFCHB* CHCCPCCKJBG; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* PLHFEEBKFJF; // 0x40
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x48
	::GCIMMDDIFBJ* KDOFOMOEMFH; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLOCMBOLMKA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BLOCMBOLMKA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BLOCMBOLMKA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLOCMBOLMKA_KGEBDLGBGNM_OFFSET))(this);
	}
};
