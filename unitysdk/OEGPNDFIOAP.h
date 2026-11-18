#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
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

#define OEGPNDFIOAP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1B77BCA0)
#define OEGPNDFIOAP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1B77BB80)
#define OEGPNDFIOAP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1B77B8D0)
#define OEGPNDFIOAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B77BC90)

inline static constexpr unsigned int OEGPNDFIOAP_TypeDefinitionIndex = 90074;

class OEGPNDFIOAP : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* KJODNKPHIGL; // 0x18
	::UnityEngine::CanvasGroup* JMBBEHOMANA; // 0x20
	::FGCOIBFFCHB* CIJAKOOOPNG; // 0x28
	::UIControllerExtensionData* GNHHKKAAJAA; // 0x30
	::UnityEngine::UI::Text* NMMCKDHAHHH; // 0x38
	::UnityEngine::Transform* LBIHJNDFLOI; // 0x40
	::UnityEngine::Animator* KEMKOKGFIGM; // 0x48
	::UnityEngine::GameObject* EBPAGMLFKFH; // 0x50
	::UnityEngine::UI::Text* HBADNCJHEOJ; // 0x58
	::FGCOIBFFCHB* KAFEDIPPCFO; // 0x60
	::LGINJIKKBJA* KADDHBOOKAC; // 0x68
	::FGCOIBFFCHB* LEIGOPHEFHC; // 0x70
	::FGCOIBFFCHB* BAOBIBPKOEK; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEGPNDFIOAP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OEGPNDFIOAP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEGPNDFIOAP_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OEGPNDFIOAP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
