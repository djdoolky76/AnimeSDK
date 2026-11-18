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

#define LGHLKDJFIGM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1684AF00)
#define LGHLKDJFIGM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1684AE50)
#define LGHLKDJFIGM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1684ABE0)
#define LGHLKDJFIGM__CTOR_OFFSET UNITYSDK_OFFSET(0x1684AEF0)

inline static constexpr unsigned int LGHLKDJFIGM_TypeDefinitionIndex = 76711;

class LGHLKDJFIGM : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* DGKCHLBENFH; // 0x18
	::UnityEngine::GameObject* DPNLLKMJMMB; // 0x20
	::LGINJIKKBJA* EHHEECFPKOF; // 0x28
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* IGMLLFPCOGE; // 0x38
	::UnityEngine::GameObject* DPDOFDHIBCP; // 0x40
	::UnityEngine::GameObject* GDLCCFGKNBD; // 0x48
	::UnityEngine::GameObject* JFDHDGDAJDH; // 0x50
	::MoleMole::NotificationBadgeEx* FLANDOHPICD; // 0x58
	::UnityEngine::GameObject* ANEHJFKOPPC; // 0x60
	::UnityEngine::GameObject* NDPFKBKABLI; // 0x68
	::UnityEngine::GameObject* LPCFFMINPFF; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGHLKDJFIGM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LGHLKDJFIGM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LGHLKDJFIGM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGHLKDJFIGM_KGEBDLGBGNM_OFFSET))(this);
	}
};
