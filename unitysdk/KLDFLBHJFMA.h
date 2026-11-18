#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KLDFLBHJFMA_ENIEKFELHBG.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Config { class UIAnimationCurveConfig; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define KLDFLBHJFMA_ANAGDHBGNDF_OFFSET UNITYSDK_OFFSET(0x18636120)
#define KLDFLBHJFMA_CDIPBMMDICL_OFFSET UNITYSDK_OFFSET(0x18635A00)
#define KLDFLBHJFMA_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0x186362B0)
#define KLDFLBHJFMA_HLJPINPGIJN_OFFSET UNITYSDK_OFFSET(0x186360D0)
#define KLDFLBHJFMA_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x18635A50)
#define KLDFLBHJFMA_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x18635AA0)
#define KLDFLBHJFMA_OLMJCDCDGJB_OFFSET UNITYSDK_OFFSET(0x18635120)
#define KLDFLBHJFMA__CTOR_OFFSET UNITYSDK_OFFSET(0x18635110)

inline static constexpr unsigned int KLDFLBHJFMA_TypeDefinitionIndex = 78708;

class KLDFLBHJFMA : public ::System::Object
{
public:
	// static const ::System::Single FBACGMIFBJH; // 0x0
	// static const ::System::Single BJANNAMEBGJ; // 0x0
	::UnityEngine::RectTransform* FJHOHFJIGGA; // 0x10
	::System::Collections::Generic::List_1<::System::Single>* CPINNJMMJNA; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::AnimationCurve*>* LNIOJLHBIHO; // 0x20
	::UnityEngine::Animation* AOKJEGNBALI; // 0x28
	::System::Action* BLGLCJDINCL; // 0x30
	::System::Action* NOHAMNDLOCF; // 0x38
	::UnityEngine::RectTransform* NEDOIIKCEGA; // 0x40
	::UnityEngine::RectTransform* ODGJACJHJPP; // 0x48
	::System::Boolean IEKBNOENFNB; // 0x50
	::System::Boolean JGJJFPCOOOC; // 0x51
	::System::Boolean EKFBECGLNAC; // 0x52
	::System::Boolean EDEJENOFBMP; // 0x53
	::System::Single ALMEMIAJNBG; // 0x54
	::System::Single IEAJHIAMLGA; // 0x58
	::UnityEngine::Vector2 HFIMBHOHPBE; // 0x5C
	::UnityEngine::Vector2 LKOCCBDANMP; // 0x64
	::System::Single ONEKILKHMDK; // 0x6C
	::UnityEngine::Vector2 HNCCDHDGONI; // 0x70
	::System::Single EEODALLOKMF; // 0x78
	::System::Boolean ECLFJGOMMAD; // 0x7C
	::System::Boolean EOKPBKLLEDH; // 0x7D
	::System::Byte _padding0[0x2];
	::System::Single EIAOFPNAJJA; // 0x80
	::KLDFLBHJFMA_ENIEKFELHBG EECMDPPHLAM; // 0x84
	::UnityEngine::Vector2 HMDGKKHKEAN; // 0x88
	::UnityEngine::Vector2 CLMAIMOLMOL; // 0x90
	::System::Boolean CGFLLPOCDJM; // 0x98
	::System::Boolean FEIJCFMOHNL; // 0x99
	::System::Boolean HGCNJGPGOAM; // 0x9A
	::System::Boolean HPINBCPMHJE; // 0x9B
	::System::Single FKJDFGENKPH; // 0x9C
	::System::Single MPJLEPFAHHM; // 0xA0
	::System::Single HACJFKBLODH; // 0xA4
	::UnityEngine::Vector2 EHCEHPABKMJ; // 0xA8
	::UnityEngine::Rect MELPBPOPDMB; // 0xB0
	::System::Single HOCBIBNDNJH; // 0xC0
	::UnityEngine::Vector2 EIIBKLICFKL; // 0xC4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLDFLBHJFMA__CTOR_OFFSET))(this);
	}

	::System::Void OLMJCDCDGJB(::UnityEngine::Canvas* FAKJDBJMJCH, ::UnityEngine::RectTransform* KKPODILMOFL, ::UnityEngine::RectTransform* PFEGKBNKIHG, ::UnityEngine::RectTransform* IJHLAFFINGM, ::UnityEngine::Transform* JDNKBOCFONH)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Canvas*, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + KLDFLBHJFMA_OLMJCDCDGJB_OFFSET))(this, FAKJDBJMJCH, KKPODILMOFL, PFEGKBNKIHG, IJHLAFFINGM, JDNKBOCFONH);
	}

	::System::Boolean CDIPBMMDICL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KLDFLBHJFMA_CDIPBMMDICL_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLDFLBHJFMA_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Void OKJCHFGIKBH(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KLDFLBHJFMA_OKJCHFGIKBH_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Boolean HLJPINPGIJN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KLDFLBHJFMA_HLJPINPGIJN_OFFSET))(this);
	}

	::System::Void ANAGDHBGNDF(::MoleMole::Config::UIAnimationCurveConfig* MGNBEBOMBAF, ::KLDFLBHJFMA_ENIEKFELHBG DAAEHEHLLLD)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::UIAnimationCurveConfig*, ::KLDFLBHJFMA_ENIEKFELHBG))((::PBYTE)hIl2Cpp + KLDFLBHJFMA_ANAGDHBGNDF_OFFSET))(this, MGNBEBOMBAF, DAAEHEHLLLD);
	}

	::System::Void EDEFLFIKNFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLDFLBHJFMA_EDEFLFIKNFK_OFFSET))(this);
	}
};
