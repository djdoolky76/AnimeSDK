#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define NACABNNPCAI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1287C4D0)
#define NACABNNPCAI_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1287C400)
#define NACABNNPCAI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1287C200)
#define NACABNNPCAI__CTOR_OFFSET UNITYSDK_OFFSET(0x1287C4C0)

inline static constexpr unsigned int NACABNNPCAI_TypeDefinitionIndex = 81594;

class NACABNNPCAI : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* NLFEHCFAKNK; // 0x20
	::MoleMole::NotificationBadgeEx* MAMKMHKDPCA; // 0x28
	::UnityEngine::RectTransform* JFDOOELFAOA; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* BIGMAIMFEOB; // 0x38
	::UnityEngine::GameObject* DPNLLKMJMMB; // 0x40
	::UnityEngine::GameObject* DGJFMEGHDBE; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* BAHFPKPBFHP; // 0x50
	::UnityEngine::GameObject* AJIBHBJNOCE; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NACABNNPCAI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NACABNNPCAI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NACABNNPCAI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NACABNNPCAI_KGEBDLGBGNM_OFFSET))(this);
	}
};
