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

#define EKBAIOAHLFG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x10F3B960)
#define EKBAIOAHLFG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x10F3B840)
#define EKBAIOAHLFG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x10F3B590)
#define EKBAIOAHLFG__CTOR_OFFSET UNITYSDK_OFFSET(0x10F3B950)

inline static constexpr unsigned int EKBAIOAHLFG_TypeDefinitionIndex = 88694;

class EKBAIOAHLFG : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Text* HBADNCJHEOJ; // 0x18
	::UnityEngine::CanvasGroup* JMBBEHOMANA; // 0x20
	::UIControllerExtensionData* GNHHKKAAJAA; // 0x28
	::UnityEngine::UI::Text* NMMCKDHAHHH; // 0x30
	::UnityEngine::RectTransform* KJODNKPHIGL; // 0x38
	::UnityEngine::GameObject* EBPAGMLFKFH; // 0x40
	::FGCOIBFFCHB* CIJAKOOOPNG; // 0x48
	::FGCOIBFFCHB* BAOBIBPKOEK; // 0x50
	::UnityEngine::Transform* LBIHJNDFLOI; // 0x58
	::FGCOIBFFCHB* KAFEDIPPCFO; // 0x60
	::LGINJIKKBJA* KADDHBOOKAC; // 0x68
	::UnityEngine::Animator* KEMKOKGFIGM; // 0x70
	::FGCOIBFFCHB* LEIGOPHEFHC; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKBAIOAHLFG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EKBAIOAHLFG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKBAIOAHLFG_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EKBAIOAHLFG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
