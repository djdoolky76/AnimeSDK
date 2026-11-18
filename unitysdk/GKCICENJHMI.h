#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define GKCICENJHMI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15D72450)
#define GKCICENJHMI_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15D722F0)
#define GKCICENJHMI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15D72060)
#define GKCICENJHMI__CTOR_OFFSET UNITYSDK_OFFSET(0x15D72440)

inline static constexpr unsigned int GKCICENJHMI_TypeDefinitionIndex = 64529;

class GKCICENJHMI : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* COPKFNAFGME; // 0x18
	::UnityEngine::Animation* OJOKGLKKNLI; // 0x20
	::UnityEngine::GameObject* HKJPDMOJPGM; // 0x28
	::UnityEngine::Animation* KPKHFIABBPA; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* DEBFJDFPLCO; // 0x38
	::FGCOIBFFCHB* IJLPINMIKFP; // 0x40
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* NAKOOKMAJHG; // 0x50
	::FGCOIBFFCHB* ABFNNDEIJOK; // 0x58
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x60
	::FGCOIBFFCHB* FEIKPEDMENE; // 0x68
	::UnityEngine::GameObject* DPNLLKMJMMB; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCICENJHMI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GKCICENJHMI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GKCICENJHMI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCICENJHMI_KGEBDLGBGNM_OFFSET))(this);
	}
};
