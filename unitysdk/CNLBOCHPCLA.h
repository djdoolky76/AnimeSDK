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

#define CNLBOCHPCLA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1A1BE830)
#define CNLBOCHPCLA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1A1BE720)
#define CNLBOCHPCLA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1A1BE490)
#define CNLBOCHPCLA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1BE820)

inline static constexpr unsigned int CNLBOCHPCLA_TypeDefinitionIndex = 58833;

class CNLBOCHPCLA : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* KEHPAOOHNOI; // 0x18
	::UnityEngine::Transform* LBIHJNDFLOI; // 0x20
	::UnityEngine::Animator* KEMKOKGFIGM; // 0x28
	::LGINJIKKBJA* KADDHBOOKAC; // 0x30
	::UnityEngine::GameObject* DPNLLKMJMMB; // 0x38
	::UnityEngine::Animation* DGPEMCELHKN; // 0x40
	::UnityEngine::RectTransform* NDOIOKDGBFD; // 0x48
	::FGCOIBFFCHB* LAHDPGLIHND; // 0x50
	::UnityEngine::CanvasGroup* IHHECBDFOAO; // 0x58
	::UnityEngine::CanvasGroup* CGLEMIGJJLI; // 0x60
	::UnityEngine::RectTransform* EHMLMJKEJMM; // 0x68
	::UnityEngine::RectTransform* KJODNKPHIGL; // 0x70
	::FGCOIBFFCHB* CHCCPCCKJBG; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNLBOCHPCLA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CNLBOCHPCLA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNLBOCHPCLA_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CNLBOCHPCLA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
