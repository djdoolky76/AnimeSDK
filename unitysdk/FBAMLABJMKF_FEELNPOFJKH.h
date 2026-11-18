#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class DGDNKBFMHME;
class FBAMLABJMKF;
namespace DG::Tweening { class TweenCallback; }
namespace System { class Action; }
namespace UnityEngine { class AnimationCurve; }

#define FBAMLABJMKF_FEELNPOFJKH_BJGGADFIOBB_OFFSET UNITYSDK_OFFSET(0x10F53D10)
#define FBAMLABJMKF_FEELNPOFJKH_DCJKCIMDLNJ_OFFSET UNITYSDK_OFFSET(0x10F537C0)
#define FBAMLABJMKF_FEELNPOFJKH_ELOMNEGNBFO_OFFSET UNITYSDK_OFFSET(0x10F538E0)
#define FBAMLABJMKF_FEELNPOFJKH_JGEIFBHPAGH_OFFSET UNITYSDK_OFFSET(0x10F537B0)
#define FBAMLABJMKF_FEELNPOFJKH__CTOR_OFFSET UNITYSDK_OFFSET(0x10F537A0)

inline static constexpr unsigned int FBAMLABJMKF_FEELNPOFJKH_TypeDefinitionIndex = 78134;

class FBAMLABJMKF_FEELNPOFJKH : public ::System::Object
{
public:
	::DG::Tweening::TweenCallback* KGGAGONKKFH; // 0x10
	::System::Action* MGAKJHJAGJI; // 0x18
	::FBAMLABJMKF* KLHPEBKNIFB; // 0x20
	::System::Nullable_1<::System::ValueTuple_2<::System::Single, ::UnityEngine::AnimationCurve*>> KGMOABMKBKG; // 0x28
	::System::Byte _padding0[0x10];
	::System::Single EFOFHKIOBJH; // 0x40
	::System::Boolean FEEGLLNIBKB; // 0x44
	::System::Byte _padding1[0x3];
	::System::Nullable_1<::MoleMole::Vector2Int> LIEOKCFGKCA; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAMLABJMKF_FEELNPOFJKH__CTOR_OFFSET))(this);
	}

	::System::Void JGEIFBHPAGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAMLABJMKF_FEELNPOFJKH_JGEIFBHPAGH_OFFSET))(this);
	}

	::System::Void ELOMNEGNBFO(::DGDNKBFMHME* HFMHOELKCAJ)
	{
		return ((::System::Void(*)(::PVOID, ::DGDNKBFMHME*))((::PBYTE)hIl2Cpp + FBAMLABJMKF_FEELNPOFJKH_ELOMNEGNBFO_OFFSET))(this, HFMHOELKCAJ);
	}

	::System::Void DCJKCIMDLNJ(::System::Single FAMGNIDIBPM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FBAMLABJMKF_FEELNPOFJKH_DCJKCIMDLNJ_OFFSET))(this, FAMGNIDIBPM);
	}

	::System::Void BJGGADFIOBB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAMLABJMKF_FEELNPOFJKH_BJGGADFIOBB_OFFSET))(this);
	}
};
