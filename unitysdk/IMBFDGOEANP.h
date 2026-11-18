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

#define IMBFDGOEANP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16589430)
#define IMBFDGOEANP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x165892D0)
#define IMBFDGOEANP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16589020)
#define IMBFDGOEANP__CTOR_OFFSET UNITYSDK_OFFSET(0x16589420)

inline static constexpr unsigned int IMBFDGOEANP_TypeDefinitionIndex = 44077;

class IMBFDGOEANP : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* KAFEDIPPCFO; // 0x18
	::UIControllerExtensionData* GNHHKKAAJAA; // 0x20
	::UnityEngine::Animator* KEMKOKGFIGM; // 0x28
	::FGCOIBFFCHB* BAOBIBPKOEK; // 0x30
	::UnityEngine::UI::Text* HBADNCJHEOJ; // 0x38
	::UnityEngine::RectTransform* KJODNKPHIGL; // 0x40
	::UnityEngine::GameObject* EBPAGMLFKFH; // 0x48
	::UnityEngine::UI::Text* NMMCKDHAHHH; // 0x50
	::LGINJIKKBJA* KADDHBOOKAC; // 0x58
	::FGCOIBFFCHB* CIJAKOOOPNG; // 0x60
	::UnityEngine::Transform* LBIHJNDFLOI; // 0x68
	::UnityEngine::CanvasGroup* JMBBEHOMANA; // 0x70
	::FGCOIBFFCHB* LEIGOPHEFHC; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMBFDGOEANP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IMBFDGOEANP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IMBFDGOEANP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMBFDGOEANP_KGEBDLGBGNM_OFFSET))(this);
	}
};
