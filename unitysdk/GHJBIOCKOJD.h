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

#define GHJBIOCKOJD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15CE7D60)
#define GHJBIOCKOJD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15CE7C40)
#define GHJBIOCKOJD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15CE7950)
#define GHJBIOCKOJD__CTOR_OFFSET UNITYSDK_OFFSET(0x15CE7D50)

inline static constexpr unsigned int GHJBIOCKOJD_TypeDefinitionIndex = 91889;

class GHJBIOCKOJD : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Text* NMMCKDHAHHH; // 0x18
	::UnityEngine::GameObject* EBPAGMLFKFH; // 0x20
	::UnityEngine::UI::Text* HBADNCJHEOJ; // 0x28
	::UIControllerExtensionData* GNHHKKAAJAA; // 0x30
	::FGCOIBFFCHB* BAOBIBPKOEK; // 0x38
	::FGCOIBFFCHB* CIJAKOOOPNG; // 0x40
	::UnityEngine::Animator* KEMKOKGFIGM; // 0x48
	::UnityEngine::CanvasGroup* JMBBEHOMANA; // 0x50
	::FGCOIBFFCHB* KAFEDIPPCFO; // 0x58
	::FGCOIBFFCHB* LEIGOPHEFHC; // 0x60
	::GCIMMDDIFBJ* KPFMBFCGJAD; // 0x68
	::LGINJIKKBJA* KADDHBOOKAC; // 0x70
	::UnityEngine::Transform* LBIHJNDFLOI; // 0x78
	::UnityEngine::RectTransform* KJODNKPHIGL; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJBIOCKOJD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GHJBIOCKOJD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GHJBIOCKOJD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJBIOCKOJD_KGEBDLGBGNM_OFFSET))(this);
	}
};
