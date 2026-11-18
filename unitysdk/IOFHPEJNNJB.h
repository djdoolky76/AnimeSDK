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

#define IOFHPEJNNJB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1658E980)
#define IOFHPEJNNJB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1658E860)
#define IOFHPEJNNJB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1658E5B0)
#define IOFHPEJNNJB__CTOR_OFFSET UNITYSDK_OFFSET(0x1658E970)

inline static constexpr unsigned int IOFHPEJNNJB_TypeDefinitionIndex = 48554;

class IOFHPEJNNJB : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* LBIHJNDFLOI; // 0x18
	::UnityEngine::RectTransform* KJODNKPHIGL; // 0x20
	::UnityEngine::CanvasGroup* JMBBEHOMANA; // 0x28
	::UnityEngine::Animator* KEMKOKGFIGM; // 0x30
	::UnityEngine::UI::Text* HBADNCJHEOJ; // 0x38
	::UnityEngine::GameObject* EBPAGMLFKFH; // 0x40
	::FGCOIBFFCHB* CIJAKOOOPNG; // 0x48
	::FGCOIBFFCHB* BAOBIBPKOEK; // 0x50
	::UIControllerExtensionData* GNHHKKAAJAA; // 0x58
	::LGINJIKKBJA* KADDHBOOKAC; // 0x60
	::UnityEngine::UI::Text* NMMCKDHAHHH; // 0x68
	::FGCOIBFFCHB* KAFEDIPPCFO; // 0x70
	::FGCOIBFFCHB* LEIGOPHEFHC; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOFHPEJNNJB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IOFHPEJNNJB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IOFHPEJNNJB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOFHPEJNNJB_KGEBDLGBGNM_OFFSET))(this);
	}
};
