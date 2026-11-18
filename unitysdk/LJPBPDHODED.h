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

#define LJPBPDHODED_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x11F1E820)
#define LJPBPDHODED_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x11F1E6E0)
#define LJPBPDHODED_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11F1E3D0)
#define LJPBPDHODED__CTOR_OFFSET UNITYSDK_OFFSET(0x11F1E810)

inline static constexpr unsigned int LJPBPDHODED_TypeDefinitionIndex = 83456;

class LJPBPDHODED : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* LBIHJNDFLOI; // 0x18
	::UnityEngine::CanvasGroup* JMBBEHOMANA; // 0x20
	::FGCOIBFFCHB* BAOBIBPKOEK; // 0x28
	::FGCOIBFFCHB* CHCCPCCKJBG; // 0x30
	::UnityEngine::RectTransform* KJODNKPHIGL; // 0x38
	::FGCOIBFFCHB* CIJAKOOOPNG; // 0x40
	::FGCOIBFFCHB* KAFEDIPPCFO; // 0x48
	::UnityEngine::UI::Text* NMMCKDHAHHH; // 0x50
	::UnityEngine::GameObject* KDGDNBGJDHN; // 0x58
	::GCIMMDDIFBJ* ODAKHLNHMCD; // 0x60
	::FGCOIBFFCHB* LEIGOPHEFHC; // 0x68
	::LGINJIKKBJA* JDBDAFFFOJK; // 0x70
	::GCIMMDDIFBJ* DOEKEKKIPOO; // 0x78
	::GCIMMDDIFBJ* EAKCNMHGKHL; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPBPDHODED__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LJPBPDHODED_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LJPBPDHODED_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPBPDHODED_KGEBDLGBGNM_OFFSET))(this);
	}
};
