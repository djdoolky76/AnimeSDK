#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
class UIControllerExtensionData;
namespace MoleMole { class UIButtonPosHandler; }
namespace MoleMole { class UIButtonSizeHandler; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define IJGMKLGEJPE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1657AC00)
#define IJGMKLGEJPE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1657AAE0)
#define IJGMKLGEJPE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1657A790)
#define IJGMKLGEJPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1657ABF0)

inline static constexpr unsigned int IJGMKLGEJPE_TypeDefinitionIndex = 72573;

class IJGMKLGEJPE : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* BAOBIBPKOEK; // 0x18
	::FGCOIBFFCHB* LEIGOPHEFHC; // 0x20
	::UnityEngine::Transform* LBIHJNDFLOI; // 0x28
	::UnityEngine::UI::Text* HBADNCJHEOJ; // 0x30
	::GCIMMDDIFBJ* LPOAEPILCEI; // 0x38
	::FGCOIBFFCHB* KAFEDIPPCFO; // 0x40
	::UnityEngine::CanvasGroup* JMBBEHOMANA; // 0x48
	::UnityEngine::GameObject* EBPAGMLFKFH; // 0x50
	::LGINJIKKBJA* KADDHBOOKAC; // 0x58
	::MoleMole::UIButtonSizeHandler* KCBCFJFEJFG; // 0x60
	::UnityEngine::UI::Text* NMMCKDHAHHH; // 0x68
	::UnityEngine::RectTransform* KJODNKPHIGL; // 0x70
	::UIControllerExtensionData* GNHHKKAAJAA; // 0x78
	::GCIMMDDIFBJ* EODPFKHDCFI; // 0x80
	::UnityEngine::Animator* KEMKOKGFIGM; // 0x88
	::MoleMole::UIButtonPosHandler* IHJNFOCOFOA; // 0x90
	::FGCOIBFFCHB* CIJAKOOOPNG; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJGMKLGEJPE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IJGMKLGEJPE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJGMKLGEJPE_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IJGMKLGEJPE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
