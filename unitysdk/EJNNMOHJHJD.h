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

#define EJNNMOHJHJD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x154B5430)
#define EJNNMOHJHJD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x154B5310)
#define EJNNMOHJHJD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x154B5000)
#define EJNNMOHJHJD__CTOR_OFFSET UNITYSDK_OFFSET(0x154B5420)

inline static constexpr unsigned int EJNNMOHJHJD_TypeDefinitionIndex = 65709;

class EJNNMOHJHJD : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Text* HBADNCJHEOJ; // 0x18
	::UnityEngine::RectTransform* KJODNKPHIGL; // 0x20
	::UIControllerExtensionData* GNHHKKAAJAA; // 0x28
	::GCIMMDDIFBJ* EODPFKHDCFI; // 0x30
	::FGCOIBFFCHB* LEIGOPHEFHC; // 0x38
	::GCIMMDDIFBJ* LPOAEPILCEI; // 0x40
	::FGCOIBFFCHB* KAFEDIPPCFO; // 0x48
	::LGINJIKKBJA* KADDHBOOKAC; // 0x50
	::FGCOIBFFCHB* CIJAKOOOPNG; // 0x58
	::UnityEngine::UI::Text* NMMCKDHAHHH; // 0x60
	::UnityEngine::GameObject* EBPAGMLFKFH; // 0x68
	::FGCOIBFFCHB* BAOBIBPKOEK; // 0x70
	::UnityEngine::Animator* KEMKOKGFIGM; // 0x78
	::UnityEngine::Transform* LBIHJNDFLOI; // 0x80
	::UnityEngine::CanvasGroup* JMBBEHOMANA; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJNNMOHJHJD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EJNNMOHJHJD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EJNNMOHJHJD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJNNMOHJHJD_KGEBDLGBGNM_OFFSET))(this);
	}
};
