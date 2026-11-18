#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define KDHHLHDFOHJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x130B3100)
#define KDHHLHDFOHJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x130B3050)
#define KDHHLHDFOHJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x130B2DD0)
#define KDHHLHDFOHJ__CTOR_OFFSET UNITYSDK_OFFSET(0x130B30F0)

inline static constexpr unsigned int KDHHLHDFOHJ_TypeDefinitionIndex = 91895;

class KDHHLHDFOHJ : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* OKLLFEIJKHN; // 0x18
	::UnityEngine::GameObject* AJIBHBJNOCE; // 0x20
	::UnityEngine::GameObject* IODBDPOLPKA; // 0x28
	::MoleMole::NotificationBadgeEx* LHOADKMDIDG; // 0x30
	::UnityEngine::CanvasGroup* GKAAELPADBJ; // 0x38
	::UnityEngine::GameObject* KKMCLPDAJKJ; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* IGMLLFPCOGE; // 0x48
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x50
	::UnityEngine::GameObject* FDJHEBHLJLD; // 0x58
	::GCIMMDDIFBJ* OBNLBMABFPF; // 0x60
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDHHLHDFOHJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KDHHLHDFOHJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDHHLHDFOHJ_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KDHHLHDFOHJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
