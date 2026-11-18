#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UISlider; }

#define HEBGMMILGAP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15B41C90)
#define HEBGMMILGAP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15B41B90)
#define HEBGMMILGAP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15B41940)
#define HEBGMMILGAP__CTOR_OFFSET UNITYSDK_OFFSET(0x15B41C80)

inline static constexpr unsigned int HEBGMMILGAP_TypeDefinitionIndex = 56831;

class HEBGMMILGAP : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* CHFEDONOMMG; // 0x18
	::UnityEngine::UI::Extension::UISlider* EGAGEFLKHHA; // 0x20
	::LGINJIKKBJA* CCLPLBPBAOD; // 0x28
	::UnityEngine::GameObject* LAPCLEIGDHK; // 0x30
	::UnityEngine::GameObject* OGDHHANGGIG; // 0x38
	::LGINJIKKBJA* MCLFJENEBBA; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* POPKLIGLDPO; // 0x48
	::LGINJIKKBJA* BKBMFOJCMOJ; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* BOKMJMOAONH; // 0x58
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEBGMMILGAP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HEBGMMILGAP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HEBGMMILGAP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEBGMMILGAP_KGEBDLGBGNM_OFFSET))(this);
	}
};
