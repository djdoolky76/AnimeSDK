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

#define JIADMNFOOCM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13085530)
#define JIADMNFOOCM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13085460)
#define JIADMNFOOCM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13085210)
#define JIADMNFOOCM__CTOR_OFFSET UNITYSDK_OFFSET(0x13085520)

inline static constexpr unsigned int JIADMNFOOCM_TypeDefinitionIndex = 38957;

class JIADMNFOOCM : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x18
	::FGCOIBFFCHB* KOCFIPHOBJI; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* NLFEHCFAKNK; // 0x28
	::MoleMole::NotificationBadgeEx* EDGECKDFLFC; // 0x30
	::UnityEngine::GameObject* DPDOFDHIBCP; // 0x38
	::UnityEngine::GameObject* IPCOIFBOEPA; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* BIGMAIMFEOB; // 0x48
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x50
	::UnityEngine::GameObject* DPNLLKMJMMB; // 0x58
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIADMNFOOCM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JIADMNFOOCM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIADMNFOOCM_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JIADMNFOOCM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
