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

#define ILODEKJJPPK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x141F8780)
#define ILODEKJJPPK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x141F8660)
#define ILODEKJJPPK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x141F83B0)
#define ILODEKJJPPK__CTOR_OFFSET UNITYSDK_OFFSET(0x141F8770)

inline static constexpr unsigned int ILODEKJJPPK_TypeDefinitionIndex = 48365;

class ILODEKJJPPK : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* CIJAKOOOPNG; // 0x18
	::FGCOIBFFCHB* BAOBIBPKOEK; // 0x20
	::UnityEngine::Transform* LBIHJNDFLOI; // 0x28
	::UIControllerExtensionData* GNHHKKAAJAA; // 0x30
	::FGCOIBFFCHB* KAFEDIPPCFO; // 0x38
	::UnityEngine::Animator* KEMKOKGFIGM; // 0x40
	::UnityEngine::GameObject* EBPAGMLFKFH; // 0x48
	::LGINJIKKBJA* KADDHBOOKAC; // 0x50
	::UnityEngine::UI::Text* NMMCKDHAHHH; // 0x58
	::UnityEngine::RectTransform* KJODNKPHIGL; // 0x60
	::UnityEngine::UI::Text* HBADNCJHEOJ; // 0x68
	::FGCOIBFFCHB* LEIGOPHEFHC; // 0x70
	::UnityEngine::CanvasGroup* JMBBEHOMANA; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILODEKJJPPK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ILODEKJJPPK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILODEKJJPPK_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ILODEKJJPPK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
