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

#define IGPEOIDNDCM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x160A2E20)
#define IGPEOIDNDCM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x160A2CD0)
#define IGPEOIDNDCM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x160A2990)
#define IGPEOIDNDCM__CTOR_OFFSET UNITYSDK_OFFSET(0x160A2E10)

inline static constexpr unsigned int IGPEOIDNDCM_TypeDefinitionIndex = 62654;

class IGPEOIDNDCM : public ::GIBMJLOJLKD
{
public:
	::UIControllerExtensionData* GNHHKKAAJAA; // 0x18
	::FGCOIBFFCHB* CIJAKOOOPNG; // 0x20
	::GCIMMDDIFBJ* ELGFKCLJGOP; // 0x28
	::UnityEngine::UI::Text* NMMCKDHAHHH; // 0x30
	::UnityEngine::CanvasGroup* JMBBEHOMANA; // 0x38
	::FGCOIBFFCHB* LEIGOPHEFHC; // 0x40
	::UnityEngine::UI::Text* HBADNCJHEOJ; // 0x48
	::UnityEngine::GameObject* EBPAGMLFKFH; // 0x50
	::FGCOIBFFCHB* KAFEDIPPCFO; // 0x58
	::GCIMMDDIFBJ* OFGHCKPPHCF; // 0x60
	::UnityEngine::RectTransform* KJODNKPHIGL; // 0x68
	::FGCOIBFFCHB* BAOBIBPKOEK; // 0x70
	::LGINJIKKBJA* KADDHBOOKAC; // 0x78
	::FGCOIBFFCHB* LAHDPGLIHND; // 0x80
	::UnityEngine::Transform* LBIHJNDFLOI; // 0x88
	::UnityEngine::Animator* KEMKOKGFIGM; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGPEOIDNDCM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IGPEOIDNDCM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGPEOIDNDCM_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IGPEOIDNDCM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
