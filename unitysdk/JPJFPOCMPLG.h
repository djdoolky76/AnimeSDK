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

#define JPJFPOCMPLG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15B767E0)
#define JPJFPOCMPLG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15B766A0)
#define JPJFPOCMPLG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15B76390)
#define JPJFPOCMPLG__CTOR_OFFSET UNITYSDK_OFFSET(0x15B767D0)

inline static constexpr unsigned int JPJFPOCMPLG_TypeDefinitionIndex = 40984;

class JPJFPOCMPLG : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* LBIHJNDFLOI; // 0x18
	::GCIMMDDIFBJ* DOEKEKKIPOO; // 0x20
	::FGCOIBFFCHB* LEIGOPHEFHC; // 0x28
	::FGCOIBFFCHB* KAFEDIPPCFO; // 0x30
	::FGCOIBFFCHB* CIJAKOOOPNG; // 0x38
	::FGCOIBFFCHB* CHCCPCCKJBG; // 0x40
	::UnityEngine::RectTransform* KJODNKPHIGL; // 0x48
	::UnityEngine::GameObject* KDGDNBGJDHN; // 0x50
	::GCIMMDDIFBJ* ODAKHLNHMCD; // 0x58
	::LGINJIKKBJA* JDBDAFFFOJK; // 0x60
	::GCIMMDDIFBJ* EAKCNMHGKHL; // 0x68
	::FGCOIBFFCHB* BAOBIBPKOEK; // 0x70
	::UnityEngine::CanvasGroup* JMBBEHOMANA; // 0x78
	::UnityEngine::UI::Text* NMMCKDHAHHH; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPJFPOCMPLG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JPJFPOCMPLG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPJFPOCMPLG_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JPJFPOCMPLG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
