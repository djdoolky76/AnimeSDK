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

#define OCKGKPBMEHG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1842EB90)
#define OCKGKPBMEHG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1842EA80)
#define OCKGKPBMEHG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1842E7F0)
#define OCKGKPBMEHG__CTOR_OFFSET UNITYSDK_OFFSET(0x1842EB80)

inline static constexpr unsigned int OCKGKPBMEHG_TypeDefinitionIndex = 78005;

class OCKGKPBMEHG : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Animation* DGPEMCELHKN; // 0x18
	::UnityEngine::CanvasGroup* IHHECBDFOAO; // 0x20
	::FGCOIBFFCHB* CHCCPCCKJBG; // 0x28
	::UnityEngine::CanvasGroup* CGLEMIGJJLI; // 0x30
	::UnityEngine::Animator* KEMKOKGFIGM; // 0x38
	::UnityEngine::Transform* LBIHJNDFLOI; // 0x40
	::UnityEngine::RectTransform* KJODNKPHIGL; // 0x48
	::FGCOIBFFCHB* LAHDPGLIHND; // 0x50
	::UnityEngine::RectTransform* EHMLMJKEJMM; // 0x58
	::LGINJIKKBJA* KADDHBOOKAC; // 0x60
	::UnityEngine::Transform* KEHPAOOHNOI; // 0x68
	::UnityEngine::GameObject* DPNLLKMJMMB; // 0x70
	::UnityEngine::RectTransform* NDOIOKDGBFD; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCKGKPBMEHG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OCKGKPBMEHG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCKGKPBMEHG_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OCKGKPBMEHG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
