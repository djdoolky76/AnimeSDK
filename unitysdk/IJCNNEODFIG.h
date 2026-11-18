#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define IJCNNEODFIG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xEBDFD70)
#define IJCNNEODFIG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xEBDFCA0)
#define IJCNNEODFIG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xEBDFA50)
#define IJCNNEODFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xEBDFD60)

inline static constexpr unsigned int IJCNNEODFIG_TypeDefinitionIndex = 88178;

class IJCNNEODFIG : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* ANAEFBINODG; // 0x18
	::UnityEngine::RectTransform* DPNLLKMJMMB; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* ECKHLEGLKPL; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* OEDOKBJLPJI; // 0x30
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x38
	::MoleMole::NotificationBadgeEx* IMDLHCPGEDN; // 0x40
	::UnityEngine::RectTransform* ODKGAHDFMAP; // 0x48
	::UnityEngine::CanvasGroup* CPGNEPMDANH; // 0x50
	::FGCOIBFFCHB* MPFDMAPAHOO; // 0x58
	::MoleMole::NotificationBadge* JFDOOELFAOA; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJCNNEODFIG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IJCNNEODFIG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJCNNEODFIG_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IJCNNEODFIG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
