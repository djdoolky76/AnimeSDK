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

#define AMPDJDFBLOJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15510390)
#define AMPDJDFBLOJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15510270)
#define AMPDJDFBLOJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1550FFC0)
#define AMPDJDFBLOJ__CTOR_OFFSET UNITYSDK_OFFSET(0x15510380)

inline static constexpr unsigned int AMPDJDFBLOJ_TypeDefinitionIndex = 91842;

class AMPDJDFBLOJ : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* KJODNKPHIGL; // 0x18
	::FGCOIBFFCHB* LEIGOPHEFHC; // 0x20
	::UnityEngine::UI::Text* NMMCKDHAHHH; // 0x28
	::LGINJIKKBJA* KADDHBOOKAC; // 0x30
	::UnityEngine::Animator* KEMKOKGFIGM; // 0x38
	::UIControllerExtensionData* GNHHKKAAJAA; // 0x40
	::FGCOIBFFCHB* CIJAKOOOPNG; // 0x48
	::UnityEngine::GameObject* EBPAGMLFKFH; // 0x50
	::FGCOIBFFCHB* KAFEDIPPCFO; // 0x58
	::FGCOIBFFCHB* BAOBIBPKOEK; // 0x60
	::UnityEngine::UI::Text* HBADNCJHEOJ; // 0x68
	::UnityEngine::CanvasGroup* JMBBEHOMANA; // 0x70
	::UnityEngine::Transform* LBIHJNDFLOI; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMPDJDFBLOJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AMPDJDFBLOJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AMPDJDFBLOJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMPDJDFBLOJ_KGEBDLGBGNM_OFFSET))(this);
	}
};
