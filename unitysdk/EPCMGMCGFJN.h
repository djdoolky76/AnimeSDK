#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class UIControllerExtensionData;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define EPCMGMCGFJN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x17132350)
#define EPCMGMCGFJN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x171321F0)
#define EPCMGMCGFJN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17131F10)
#define EPCMGMCGFJN__CTOR_OFFSET UNITYSDK_OFFSET(0x17132340)

inline static constexpr unsigned int EPCMGMCGFJN_TypeDefinitionIndex = 49669;

class EPCMGMCGFJN : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Animator* KEMKOKGFIGM; // 0x18
	::FGCOIBFFCHB* KAFEDIPPCFO; // 0x20
	::FGCOIBFFCHB* BAOBIBPKOEK; // 0x28
	::LGINJIKKBJA* KADDHBOOKAC; // 0x30
	::UnityEngine::UI::Text* NMMCKDHAHHH; // 0x38
	::UIControllerExtensionData* GNHHKKAAJAA; // 0x40
	::UnityEngine::Animation* LPOAEPILCEI; // 0x48
	::FGCOIBFFCHB* CIJAKOOOPNG; // 0x50
	::UnityEngine::UI::Text* HBADNCJHEOJ; // 0x58
	::UnityEngine::CanvasGroup* JMBBEHOMANA; // 0x60
	::UnityEngine::Animation* EODPFKHDCFI; // 0x68
	::UnityEngine::Transform* LBIHJNDFLOI; // 0x70
	::UnityEngine::RectTransform* KJODNKPHIGL; // 0x78
	::UnityEngine::GameObject* EBPAGMLFKFH; // 0x80
	::FGCOIBFFCHB* LEIGOPHEFHC; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPCMGMCGFJN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EPCMGMCGFJN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EPCMGMCGFJN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPCMGMCGFJN_KGEBDLGBGNM_OFFSET))(this);
	}
};
