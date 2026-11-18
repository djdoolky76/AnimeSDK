#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define JFMIGHLHHPO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1A474780)
#define JFMIGHLHHPO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1A474620)
#define JFMIGHLHHPO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1A4743C0)
#define JFMIGHLHHPO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A474770)

inline static constexpr unsigned int JFMIGHLHHPO_TypeDefinitionIndex = 56947;

class JFMIGHLHHPO : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* KKMCLPDAJKJ; // 0x18
	::FGCOIBFFCHB* KBLFDLBHCBG; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* ODALDIOFMPH; // 0x28
	::UnityEngine::GameObject* DPDOFDHIBCP; // 0x30
	::MoleMole::NotificationBadge* IMDLHCPGEDN; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x40
	::LGINJIKKBJA* EADDCKNAFGG; // 0x48
	::UnityEngine::RectTransform* OKLLFEIJKHN; // 0x50
	::FGCOIBFFCHB* FDJHEBHLJLD; // 0x58
	::FGCOIBFFCHB* EMNBNMAJGNM; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFMIGHLHHPO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JFMIGHLHHPO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JFMIGHLHHPO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFMIGHLHHPO_KGEBDLGBGNM_OFFSET))(this);
	}
};
