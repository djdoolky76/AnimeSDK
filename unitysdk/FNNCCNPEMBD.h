#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define FNNCCNPEMBD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x165C3940)
#define FNNCCNPEMBD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x165C3830)
#define FNNCCNPEMBD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x165C35B0)
#define FNNCCNPEMBD__CTOR_OFFSET UNITYSDK_OFFSET(0x165C3930)

inline static constexpr unsigned int FNNCCNPEMBD_TypeDefinitionIndex = 87656;

class FNNCCNPEMBD : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x18
	::UnityEngine::GameObject* EBGGJKEIFIO; // 0x20
	::LGINJIKKBJA* FEHGBHMCHMB; // 0x28
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* KKEHGHJDKGD; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* JFNOHHPPNOM; // 0x40
	::UnityEngine::Transform* OMIHDEJHFDB; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* COHKILAGMNP; // 0x50
	::UnityEngine::UI::Extension::UITimeWidget* CCDNKBONPLB; // 0x58
	::UnityEngine::GameObject* PHAKDMFIAHL; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* DCCCOOKHLIA; // 0x68
	::UnityEngine::UI::Extension::UILocalizationText* HBADNCJHEOJ; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNNCCNPEMBD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FNNCCNPEMBD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FNNCCNPEMBD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNNCCNPEMBD_KGEBDLGBGNM_OFFSET))(this);
	}
};
