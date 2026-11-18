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

#define JNGGFMMOFAH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13C3B670)
#define JNGGFMMOFAH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13C3B550)
#define JNGGFMMOFAH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13C3B240)
#define JNGGFMMOFAH__CTOR_OFFSET UNITYSDK_OFFSET(0x13C3B660)

inline static constexpr unsigned int JNGGFMMOFAH_TypeDefinitionIndex = 56875;

class JNGGFMMOFAH : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* KJODNKPHIGL; // 0x18
	::UnityEngine::CanvasGroup* JMBBEHOMANA; // 0x20
	::UnityEngine::Transform* LBIHJNDFLOI; // 0x28
	::UnityEngine::Animator* KEMKOKGFIGM; // 0x30
	::UnityEngine::UI::Text* HBADNCJHEOJ; // 0x38
	::FGCOIBFFCHB* CIJAKOOOPNG; // 0x40
	::LGINJIKKBJA* KADDHBOOKAC; // 0x48
	::UnityEngine::UI::Text* NMMCKDHAHHH; // 0x50
	::UnityEngine::GameObject* EBPAGMLFKFH; // 0x58
	::GCIMMDDIFBJ* EODPFKHDCFI; // 0x60
	::GCIMMDDIFBJ* LPOAEPILCEI; // 0x68
	::FGCOIBFFCHB* KAFEDIPPCFO; // 0x70
	::FGCOIBFFCHB* BAOBIBPKOEK; // 0x78
	::FGCOIBFFCHB* LEIGOPHEFHC; // 0x80
	::UIControllerExtensionData* GNHHKKAAJAA; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNGGFMMOFAH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JNGGFMMOFAH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JNGGFMMOFAH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNGGFMMOFAH_KGEBDLGBGNM_OFFSET))(this);
	}
};
