#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define JBIDNNGGPKB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14A3FFD0)
#define JBIDNNGGPKB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14A3FE90)
#define JBIDNNGGPKB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14A3FB80)
#define JBIDNNGGPKB__CTOR_OFFSET UNITYSDK_OFFSET(0x14A3FFC0)

inline static constexpr unsigned int JBIDNNGGPKB_TypeDefinitionIndex = 84553;

class JBIDNNGGPKB : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* CIJAKOOOPNG; // 0x18
	::UnityEngine::GameObject* KDGDNBGJDHN; // 0x20
	::FGCOIBFFCHB* LEIGOPHEFHC; // 0x28
	::LGINJIKKBJA* JDBDAFFFOJK; // 0x30
	::UnityEngine::RectTransform* KJODNKPHIGL; // 0x38
	::FGCOIBFFCHB* CHCCPCCKJBG; // 0x40
	::FGCOIBFFCHB* BAOBIBPKOEK; // 0x48
	::UnityEngine::CanvasGroup* JMBBEHOMANA; // 0x50
	::GCIMMDDIFBJ* DOEKEKKIPOO; // 0x58
	::GCIMMDDIFBJ* EAKCNMHGKHL; // 0x60
	::FGCOIBFFCHB* KAFEDIPPCFO; // 0x68
	::UnityEngine::Transform* LBIHJNDFLOI; // 0x70
	::UnityEngine::UI::Text* NMMCKDHAHHH; // 0x78
	::GCIMMDDIFBJ* ODAKHLNHMCD; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBIDNNGGPKB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JBIDNNGGPKB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBIDNNGGPKB_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JBIDNNGGPKB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
