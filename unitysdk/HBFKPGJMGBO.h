#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OFGBAENJIFM.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class OMGNFKFCNCD;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole::Config { class UIAchievementAnimConfig; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define HBFKPGJMGBO_CPLNCDIFJAE_OFFSET UNITYSDK_OFFSET(0x17E2B650)
#define HBFKPGJMGBO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x17E2B780)
#define HBFKPGJMGBO_KDGMEFEJMGJ_1_OFFSET UNITYSDK_OFFSET(0x17E2B910)
#define HBFKPGJMGBO_KDGMEFEJMGJ_OFFSET UNITYSDK_OFFSET(0x17E2B820)
#define HBFKPGJMGBO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x17E2B560)
#define HBFKPGJMGBO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17E2B320)
#define HBFKPGJMGBO__CTOR_OFFSET UNITYSDK_OFFSET(0x17E2B640)

inline static constexpr unsigned int HBFKPGJMGBO_TypeDefinitionIndex = 84267;

class HBFKPGJMGBO : public ::OFGBAENJIFM
{
public:
	// static const ::System::String* JANJOJNAKDI; // 0x0
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x18
	::UnityEngine::RectTransform* ODALDIOFMPH; // 0x20
	::LGINJIKKBJA* BLADAPNLFKM; // 0x28
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* GKBPKMLBHLB; // 0x38
	::UnityEngine::GameObject* KKNNBNKPFHH; // 0x40
	::UnityEngine::RectTransform* IODBDPOLPKA; // 0x48
	::MoleMole::Config::UIAchievementAnimConfig* OMGHGIMNICJ; // 0x50
	::UnityEngine::RectTransform* ANDFIBAKEAE; // 0x58
	::UnityEngine::RectTransform* KEHPAOOHNOI; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFKPGJMGBO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HBFKPGJMGBO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	static ::System::Boolean CPLNCDIFJAE(::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Boolean(*)(::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HBFKPGJMGBO_CPLNCDIFJAE_OFFSET))(FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFKPGJMGBO_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HBFKPGJMGBO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	static ::HBFKPGJMGBO* KDGMEFEJMGJ(::OMGNFKFCNCD* AEJAMJDBHAM, ::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::HBFKPGJMGBO*(*)(::OMGNFKFCNCD*, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HBFKPGJMGBO_KDGMEFEJMGJ_OFFSET))(AEJAMJDBHAM, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KDGMEFEJMGJ_1(::OMGNFKFCNCD* AEJAMJDBHAM)
	{
		return ((::System::Void(*)(::PVOID, ::OMGNFKFCNCD*))((::PBYTE)hIl2Cpp + HBFKPGJMGBO_KDGMEFEJMGJ_1_OFFSET))(this, AEJAMJDBHAM);
	}
};
