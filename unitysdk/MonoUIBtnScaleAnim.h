#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BtnScaleType.h"
#include "unitysdk/MonoUIBtnScaleAnim_AnimState.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace DG::Tweening { class Sequence; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }

#define MONOUIBTNSCALEANIM_AWAKE_OFFSET UNITYSDK_OFFSET(0x18C40540)
#define MONOUIBTNSCALEANIM_GETFIXSCALE_OFFSET UNITYSDK_OFFSET(0x18C41090)
#define MONOUIBTNSCALEANIM_INIT_OFFSET UNITYSDK_OFFSET(0x18C41B20)
#define MONOUIBTNSCALEANIM_KILLANIM_OFFSET UNITYSDK_OFFSET(0x18C418A0)
#define MONOUIBTNSCALEANIM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x18C41CC0)
#define MONOUIBTNSCALEANIM_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x18C402E0)
#define MONOUIBTNSCALEANIM_ONENABLE_OFFSET UNITYSDK_OFFSET(0x18C40160)
#define MONOUIBTNSCALEANIM_ONLIGHTWEIGHTACTIVE_OFFSET UNITYSDK_OFFSET(0x18C40430)
#define MONOUIBTNSCALEANIM_ONLIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0x18C404C0)
#define MONOUIBTNSCALEANIM_ONREALDISABLE_OFFSET UNITYSDK_OFFSET(0x18C403E0)
#define MONOUIBTNSCALEANIM_ONREALENABLE_OFFSET UNITYSDK_OFFSET(0x18C40280)
#define MONOUIBTNSCALEANIM_RELOADCONFIG_OFFSET UNITYSDK_OFFSET(0x18C40690)
#define MONOUIBTNSCALEANIM_RESETSTATE_OFFSET UNITYSDK_OFFSET(0x18C41250)
#define MONOUIBTNSCALEANIM_STARTANIM_OFFSET UNITYSDK_OFFSET(0x18C410F0)
#define MONOUIBTNSCALEANIM_STOPANIM_OFFSET UNITYSDK_OFFSET(0x18C41860)
#define MONOUIBTNSCALEANIM_UPDATE_OFFSET UNITYSDK_OFFSET(0x18C41AD0)
#define MONOUIBTNSCALEANIM__CTOR_OFFSET UNITYSDK_OFFSET(0x18C41D10)
#define MONOUIBTNSCALEANIM__STARTANIM_OFFSET UNITYSDK_OFFSET(0x18C412A0)
#define MONOUIBTNSCALEANIM___STARTANIM_B__46_0_OFFSET UNITYSDK_OFFSET(0x18C41DA0)
#define MONOUIBTNSCALEANIM___STARTANIM_B__46_1_OFFSET UNITYSDK_OFFSET(0x18C42030)

inline static constexpr unsigned int MonoUIBtnScaleAnim_TypeDefinitionIndex = 55355;

class MonoUIBtnScaleAnim : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Boolean PlayOnStart; // 0x18
	::System::Byte _padding0[0x3];
	::BtnScaleType ScaleType; // 0x1C
	::System::Boolean UseScriptMaxDelta; // 0x20
	::System::Byte _padding1[0x3];
	::System::Single MaxDelta; // 0x24
	::System::Boolean UseScriptMinDelta; // 0x28
	::System::Byte _padding2[0x3];
	::System::Single MinDelta; // 0x2C
	::System::Boolean UseScriptAnimTime; // 0x30
	::System::Byte _padding3[0x3];
	::System::Single AnimTime; // 0x34
	::System::Boolean UseScriptBiggerCurve; // 0x38
	::System::Byte _padding4[0x7];
	::UnityEngine::AnimationCurve* BiggerCurve; // 0x40
	::System::Boolean UseScriptSmallerCurve; // 0x48
	::System::Byte _padding5[0x7];
	::UnityEngine::AnimationCurve* SmallerCurve; // 0x50
	::System::Boolean UseScriptColor; // 0x58
	::System::Byte _padding6[0x7];
	::UnityEngine::RectTransform* rectTransform; // 0x60
	::DG::Tweening::Sequence* seq; // 0x68
	::MonoUIBtnScaleAnim_AnimState CurState; // 0x70
	::MonoUIBtnScaleAnim_AnimState TargetState; // 0x74
	::System::Boolean large; // 0x78
	::System::Boolean isAnim; // 0x79
	::System::Byte _padding7[0x2];
	::UnityEngine::Vector2 oriScale; // 0x7C
	::UnityEngine::Vector2 oriSizeDelta; // 0x84
	::System::Boolean init; // 0x8C
	::System::Byte _padding8[0x3];
	::System::Int32 tickCount; // 0x90
	::System::Single _MaxDelta; // 0x94
	::System::Single _MinDelta; // 0x98
	::System::Single _AnimTime; // 0x9C
	::UnityEngine::AnimationCurve* _BiggerCurve; // 0xA0
	::UnityEngine::AnimationCurve* _SmallerCurve; // 0xA8
	::UnityEngine::UI::Image* img; // 0xB0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIBTNSCALEANIM__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIBTNSCALEANIM_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIBTNSCALEANIM_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnLightweightActive()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIBTNSCALEANIM_ONLIGHTWEIGHTACTIVE_OFFSET))(this);
	}

	::System::Void OnLightweightDeactive()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIBTNSCALEANIM_ONLIGHTWEIGHTDEACTIVE_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIBTNSCALEANIM_AWAKE_OFFSET))(this);
	}

	::System::Void ReloadConfig()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIBTNSCALEANIM_RELOADCONFIG_OFFSET))(this);
	}

	::System::Single GetFixScale()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIBTNSCALEANIM_GETFIXSCALE_OFFSET))(this);
	}

	::System::Void StartAnim()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIBTNSCALEANIM_STARTANIM_OFFSET))(this);
	}

	::System::Void ResetState()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIBTNSCALEANIM_RESETSTATE_OFFSET))(this);
	}

	::System::Void StopAnim()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIBTNSCALEANIM_STOPANIM_OFFSET))(this);
	}

	::System::Void KillAnim()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIBTNSCALEANIM_KILLANIM_OFFSET))(this);
	}

	::System::Void OnRealEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIBTNSCALEANIM_ONREALENABLE_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIBTNSCALEANIM_UPDATE_OFFSET))(this);
	}

	::System::Void Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIBTNSCALEANIM_INIT_OFFSET))(this);
	}

	::System::Void OnRealDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIBTNSCALEANIM_ONREALDISABLE_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIBTNSCALEANIM_ONDESTROY_OFFSET))(this);
	}

	::System::Void _StartAnim()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIBTNSCALEANIM__STARTANIM_OFFSET))(this);
	}

	::System::Void __StartAnim_b__46_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIBTNSCALEANIM___STARTANIM_B__46_0_OFFSET))(this);
	}

	::System::Void __StartAnim_b__46_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIBTNSCALEANIM___STARTANIM_B__46_1_OFFSET))(this);
	}
};
