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

#define CHMFJLCDADJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x196FB420)
#define CHMFJLCDADJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x196FB4C0)
#define CHMFJLCDADJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x10E3C7F0)
#define CHMFJLCDADJ__CTOR_OFFSET UNITYSDK_OFFSET(0x196FB410)

inline static constexpr unsigned int CHMFJLCDADJ_TypeDefinitionIndex = 43899;

class CHMFJLCDADJ : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* LEIGOPHEFHC; // 0x18
	::UnityEngine::Animator* KEMKOKGFIGM; // 0x20
	::FGCOIBFFCHB* BAOBIBPKOEK; // 0x28
	::UnityEngine::RectTransform* KJODNKPHIGL; // 0x30
	::UnityEngine::UI::Text* NMMCKDHAHHH; // 0x38
	::UnityEngine::UI::Text* HBADNCJHEOJ; // 0x40
	::UIControllerExtensionData* GNHHKKAAJAA; // 0x48
	::FGCOIBFFCHB* CIJAKOOOPNG; // 0x50
	::UnityEngine::Transform* LBIHJNDFLOI; // 0x58
	::UnityEngine::GameObject* EBPAGMLFKFH; // 0x60
	::FGCOIBFFCHB* KAFEDIPPCFO; // 0x68
	::UnityEngine::CanvasGroup* JMBBEHOMANA; // 0x70
	::LGINJIKKBJA* KADDHBOOKAC; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHMFJLCDADJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CHMFJLCDADJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CHMFJLCDADJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHMFJLCDADJ_KGEBDLGBGNM_OFFSET))(this);
	}
};
