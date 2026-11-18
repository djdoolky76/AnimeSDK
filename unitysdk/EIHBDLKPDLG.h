#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
class UIControllerExtensionData;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define EIHBDLKPDLG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1699D740)
#define EIHBDLKPDLG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1699D620)
#define EIHBDLKPDLG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1699D310)
#define EIHBDLKPDLG__CTOR_OFFSET UNITYSDK_OFFSET(0x1699D730)

inline static constexpr unsigned int EIHBDLKPDLG_TypeDefinitionIndex = 75356;

class EIHBDLKPDLG : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Text* NMMCKDHAHHH; // 0x18
	::UnityEngine::RectTransform* KJODNKPHIGL; // 0x20
	::GCIMMDDIFBJ* LPOAEPILCEI; // 0x28
	::UnityEngine::Transform* LBIHJNDFLOI; // 0x30
	::UnityEngine::GameObject* EBPAGMLFKFH; // 0x38
	::GCIMMDDIFBJ* EODPFKHDCFI; // 0x40
	::FGCOIBFFCHB* BAOBIBPKOEK; // 0x48
	::FGCOIBFFCHB* KAFEDIPPCFO; // 0x50
	::FGCOIBFFCHB* CIJAKOOOPNG; // 0x58
	::LGINJIKKBJA* KADDHBOOKAC; // 0x60
	::UIControllerExtensionData* GNHHKKAAJAA; // 0x68
	::UnityEngine::UI::Text* HBADNCJHEOJ; // 0x70
	::UnityEngine::Animator* KEMKOKGFIGM; // 0x78
	::FGCOIBFFCHB* LEIGOPHEFHC; // 0x80
	::UnityEngine::CanvasGroup* JMBBEHOMANA; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIHBDLKPDLG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EIHBDLKPDLG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIHBDLKPDLG_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EIHBDLKPDLG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
