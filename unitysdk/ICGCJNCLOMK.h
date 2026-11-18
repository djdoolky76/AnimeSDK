#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define ICGCJNCLOMK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15BF82A0)
#define ICGCJNCLOMK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15BF8190)
#define ICGCJNCLOMK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15BF7F00)
#define ICGCJNCLOMK__CTOR_OFFSET UNITYSDK_OFFSET(0x15BF8290)

inline static constexpr unsigned int ICGCJNCLOMK_TypeDefinitionIndex = 39133;

class ICGCJNCLOMK : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* CHCCPCCKJBG; // 0x18
	::UnityEngine::Transform* LBIHJNDFLOI; // 0x20
	::UnityEngine::Animator* KEMKOKGFIGM; // 0x28
	::LGINJIKKBJA* KADDHBOOKAC; // 0x30
	::UnityEngine::RectTransform* KJODNKPHIGL; // 0x38
	::UnityEngine::Transform* KEHPAOOHNOI; // 0x40
	::UnityEngine::GameObject* DPNLLKMJMMB; // 0x48
	::UnityEngine::RectTransform* NDOIOKDGBFD; // 0x50
	::UnityEngine::CanvasGroup* IHHECBDFOAO; // 0x58
	::FGCOIBFFCHB* LAHDPGLIHND; // 0x60
	::UnityEngine::RectTransform* EHMLMJKEJMM; // 0x68
	::UnityEngine::Animation* DGPEMCELHKN; // 0x70
	::UnityEngine::CanvasGroup* CGLEMIGJJLI; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICGCJNCLOMK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ICGCJNCLOMK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICGCJNCLOMK_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ICGCJNCLOMK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
