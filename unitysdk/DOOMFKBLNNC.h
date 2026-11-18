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

#define DOOMFKBLNNC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1545E570)
#define DOOMFKBLNNC_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1545E450)
#define DOOMFKBLNNC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1545E1A0)
#define DOOMFKBLNNC__CTOR_OFFSET UNITYSDK_OFFSET(0x1545E560)

inline static constexpr unsigned int DOOMFKBLNNC_TypeDefinitionIndex = 44317;

class DOOMFKBLNNC : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::CanvasGroup* JMBBEHOMANA; // 0x18
	::LGINJIKKBJA* KADDHBOOKAC; // 0x20
	::UnityEngine::RectTransform* KJODNKPHIGL; // 0x28
	::UIControllerExtensionData* GNHHKKAAJAA; // 0x30
	::FGCOIBFFCHB* KAFEDIPPCFO; // 0x38
	::UnityEngine::GameObject* EBPAGMLFKFH; // 0x40
	::UnityEngine::Animator* KEMKOKGFIGM; // 0x48
	::FGCOIBFFCHB* CIJAKOOOPNG; // 0x50
	::UnityEngine::Transform* LBIHJNDFLOI; // 0x58
	::FGCOIBFFCHB* LEIGOPHEFHC; // 0x60
	::FGCOIBFFCHB* BAOBIBPKOEK; // 0x68
	::UnityEngine::UI::Text* HBADNCJHEOJ; // 0x70
	::UnityEngine::UI::Text* NMMCKDHAHHH; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOOMFKBLNNC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DOOMFKBLNNC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOOMFKBLNNC_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DOOMFKBLNNC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
