#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole::Config { class UIAchievementAnimConfig; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define KMLFHEOEFNI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x17727A70)
#define KMLFHEOEFNI_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x177279A0)
#define KMLFHEOEFNI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17727800)
#define KMLFHEOEFNI__CTOR_OFFSET UNITYSDK_OFFSET(0x17727A60)

inline static constexpr unsigned int KMLFHEOEFNI_TypeDefinitionIndex = 45602;

class KMLFHEOEFNI : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Animation* NNKNFFDKLOA; // 0x18
	::FGCOIBFFCHB* GMKDPPJJILC; // 0x20
	::UnityEngine::RectTransform* JIHAIOKCCFD; // 0x28
	::MoleMole::Config::UIAchievementAnimConfig* EPDDOBLIFEC; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* KHGAMMIOCMB; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMLFHEOEFNI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KMLFHEOEFNI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KMLFHEOEFNI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMLFHEOEFNI_KGEBDLGBGNM_OFFSET))(this);
	}
};
