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

#define AAPNLMFIOMP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x143372F0)
#define AAPNLMFIOMP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x143371D0)
#define AAPNLMFIOMP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14336EC0)
#define AAPNLMFIOMP__CTOR_OFFSET UNITYSDK_OFFSET(0x143372E0)

inline static constexpr unsigned int AAPNLMFIOMP_TypeDefinitionIndex = 84166;

class AAPNLMFIOMP : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::CanvasGroup* JMBBEHOMANA; // 0x18
	::UnityEngine::Transform* LBIHJNDFLOI; // 0x20
	::UnityEngine::RectTransform* KJODNKPHIGL; // 0x28
	::LGINJIKKBJA* KADDHBOOKAC; // 0x30
	::UnityEngine::GameObject* EBPAGMLFKFH; // 0x38
	::UIControllerExtensionData* GNHHKKAAJAA; // 0x40
	::FGCOIBFFCHB* CIJAKOOOPNG; // 0x48
	::UnityEngine::UI::Text* NMMCKDHAHHH; // 0x50
	::GCIMMDDIFBJ* LPOAEPILCEI; // 0x58
	::FGCOIBFFCHB* BAOBIBPKOEK; // 0x60
	::FGCOIBFFCHB* KAFEDIPPCFO; // 0x68
	::UnityEngine::UI::Text* HBADNCJHEOJ; // 0x70
	::UnityEngine::RectTransform* EODPFKHDCFI; // 0x78
	::FGCOIBFFCHB* LEIGOPHEFHC; // 0x80
	::UnityEngine::Animator* KEMKOKGFIGM; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPNLMFIOMP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AAPNLMFIOMP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AAPNLMFIOMP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPNLMFIOMP_KGEBDLGBGNM_OFFSET))(this);
	}
};
