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

#define LDFCKGEAFDJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x18656EE0)
#define LDFCKGEAFDJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x18656DC0)
#define LDFCKGEAFDJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x18656AB0)
#define LDFCKGEAFDJ__CTOR_OFFSET UNITYSDK_OFFSET(0x18656ED0)

inline static constexpr unsigned int LDFCKGEAFDJ_TypeDefinitionIndex = 69799;

class LDFCKGEAFDJ : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Text* HBADNCJHEOJ; // 0x18
	::FGCOIBFFCHB* LEIGOPHEFHC; // 0x20
	::UIControllerExtensionData* GNHHKKAAJAA; // 0x28
	::UnityEngine::CanvasGroup* JMBBEHOMANA; // 0x30
	::GCIMMDDIFBJ* LPOAEPILCEI; // 0x38
	::FGCOIBFFCHB* BAOBIBPKOEK; // 0x40
	::FGCOIBFFCHB* KAFEDIPPCFO; // 0x48
	::UnityEngine::RectTransform* KJODNKPHIGL; // 0x50
	::UnityEngine::Transform* LBIHJNDFLOI; // 0x58
	::UnityEngine::GameObject* EBPAGMLFKFH; // 0x60
	::UnityEngine::Animator* KEMKOKGFIGM; // 0x68
	::LGINJIKKBJA* KADDHBOOKAC; // 0x70
	::UnityEngine::UI::Text* NMMCKDHAHHH; // 0x78
	::FGCOIBFFCHB* CIJAKOOOPNG; // 0x80
	::GCIMMDDIFBJ* EODPFKHDCFI; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFCKGEAFDJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LDFCKGEAFDJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LDFCKGEAFDJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFCKGEAFDJ_KGEBDLGBGNM_OFFSET))(this);
	}
};
