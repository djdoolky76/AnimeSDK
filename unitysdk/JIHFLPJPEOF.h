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

#define JIHFLPJPEOF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1528C870)
#define JIHFLPJPEOF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1528C710)
#define JIHFLPJPEOF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1528C460)
#define JIHFLPJPEOF__CTOR_OFFSET UNITYSDK_OFFSET(0x1528C860)

inline static constexpr unsigned int JIHFLPJPEOF_TypeDefinitionIndex = 46738;

class JIHFLPJPEOF : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* CIJAKOOOPNG; // 0x18
	::FGCOIBFFCHB* BAOBIBPKOEK; // 0x20
	::UnityEngine::Transform* LBIHJNDFLOI; // 0x28
	::FGCOIBFFCHB* LEIGOPHEFHC; // 0x30
	::UnityEngine::RectTransform* KJODNKPHIGL; // 0x38
	::UIControllerExtensionData* GNHHKKAAJAA; // 0x40
	::FGCOIBFFCHB* KAFEDIPPCFO; // 0x48
	::UnityEngine::UI::Text* NMMCKDHAHHH; // 0x50
	::UnityEngine::CanvasGroup* JMBBEHOMANA; // 0x58
	::UnityEngine::GameObject* EBPAGMLFKFH; // 0x60
	::LGINJIKKBJA* KADDHBOOKAC; // 0x68
	::UnityEngine::Animator* KEMKOKGFIGM; // 0x70
	::UnityEngine::UI::Text* HBADNCJHEOJ; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIHFLPJPEOF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JIHFLPJPEOF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JIHFLPJPEOF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIHFLPJPEOF_KGEBDLGBGNM_OFFSET))(this);
	}
};
