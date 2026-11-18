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

#define KNAHFOEDCJE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xD409DD0)
#define KNAHFOEDCJE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xD409C60)
#define KNAHFOEDCJE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xD4099C0)
#define KNAHFOEDCJE__CTOR_OFFSET UNITYSDK_OFFSET(0xD409DC0)

inline static constexpr unsigned int KNAHFOEDCJE_TypeDefinitionIndex = 73961;

class KNAHFOEDCJE : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* KKMCLPDAJKJ; // 0x18
	::FGCOIBFFCHB* EMNBNMAJGNM; // 0x20
	::UnityEngine::GameObject* DPDOFDHIBCP; // 0x28
	::FGCOIBFFCHB* KBLFDLBHCBG; // 0x30
	::UnityEngine::RectTransform* OKLLFEIJKHN; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* ODALDIOFMPH; // 0x40
	::LGINJIKKBJA* EADDCKNAFGG; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x50
	::MoleMole::NotificationBadge* IMDLHCPGEDN; // 0x58
	::FGCOIBFFCHB* FDJHEBHLJLD; // 0x60
	::FGCOIBFFCHB* KIHGNGKBADE; // 0x68
	::FGCOIBFFCHB* IDIKHBOADLP; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNAHFOEDCJE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KNAHFOEDCJE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KNAHFOEDCJE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNAHFOEDCJE_KGEBDLGBGNM_OFFSET))(this);
	}
};
