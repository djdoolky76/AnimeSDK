#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIButtonPosHandler; }
namespace MoleMole { class UIButtonSizeHandler; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define EEIIKCAOMKF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16992880)
#define EEIIKCAOMKF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16992730)
#define EEIIKCAOMKF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x169923D0)
#define EEIIKCAOMKF__CTOR_OFFSET UNITYSDK_OFFSET(0x16992870)

inline static constexpr unsigned int EEIIKCAOMKF_TypeDefinitionIndex = 67770;

class EEIIKCAOMKF : public ::GIBMJLOJLKD
{
public:
	::GCIMMDDIFBJ* EAKCNMHGKHL; // 0x18
	::UnityEngine::RectTransform* KJODNKPHIGL; // 0x20
	::FGCOIBFFCHB* CIJAKOOOPNG; // 0x28
	::UnityEngine::RectTransform* FOGDENONBHP; // 0x30
	::FGCOIBFFCHB* LEIGOPHEFHC; // 0x38
	::UnityEngine::GameObject* KDGDNBGJDHN; // 0x40
	::UnityEngine::UI::Text* NMMCKDHAHHH; // 0x48
	::FGCOIBFFCHB* BAOBIBPKOEK; // 0x50
	::GCIMMDDIFBJ* ODAKHLNHMCD; // 0x58
	::UnityEngine::Transform* LBIHJNDFLOI; // 0x60
	::FGCOIBFFCHB* KAFEDIPPCFO; // 0x68
	::FGCOIBFFCHB* CHCCPCCKJBG; // 0x70
	::MoleMole::UIButtonSizeHandler* KCBCFJFEJFG; // 0x78
	::MoleMole::UIButtonPosHandler* IHJNFOCOFOA; // 0x80
	::LGINJIKKBJA* JDBDAFFFOJK; // 0x88
	::UnityEngine::CanvasGroup* JMBBEHOMANA; // 0x90
	::GCIMMDDIFBJ* DOEKEKKIPOO; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEIIKCAOMKF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EEIIKCAOMKF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEIIKCAOMKF_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EEIIKCAOMKF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
