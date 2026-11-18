#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define PMKAGNPHHLP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x150E04F0)
#define PMKAGNPHHLP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x150E03F0)
#define PMKAGNPHHLP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x150E0180)
#define PMKAGNPHHLP__CTOR_OFFSET UNITYSDK_OFFSET(0x150E04E0)

inline static constexpr unsigned int PMKAGNPHHLP_TypeDefinitionIndex = 40591;

class PMKAGNPHHLP : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* MAMNIGKOFLN; // 0x18
	::UnityEngine::RectTransform* AEOJPANIHMK; // 0x20
	::UnityEngine::Transform* HHBCKGFEABN; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* MGEDBKBHJPM; // 0x30
	::FGCOIBFFCHB* ILGMKMLAHKF; // 0x38
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x40
	::UnityEngine::Transform* FPPFGJFILII; // 0x48
	::UnityEngine::Transform* DOIGGLOKNML; // 0x50
	::UnityEngine::GameObject* FDJHEBHLJLD; // 0x58
	::UnityEngine::Transform* JBDPBBICFMF; // 0x60
	::FGCOIBFFCHB* PMNEIGANGCE; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMKAGNPHHLP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PMKAGNPHHLP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMKAGNPHHLP_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PMKAGNPHHLP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
