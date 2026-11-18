#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoUIExpandAndShrinkCell_ExpandState.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/RectTransform_Axis.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Bounds.h"

class MonoLayoutElementProcessor;
class MonoUIExpandAndShrinkCell_Conig;
class NLEADNBMGIE;
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }

#define MONOUIEXPANDANDSHRINKCELL_AWAKE_OFFSET UNITYSDK_OFFSET(0x13EBD640)
#define MONOUIEXPANDANDSHRINKCELL_EXPAND_OFFSET UNITYSDK_OFFSET(0x13EBD6F0)
#define MONOUIEXPANDANDSHRINKCELL_GETFADEINCURVE_OFFSET UNITYSDK_OFFSET(0x13EBDDD0)
#define MONOUIEXPANDANDSHRINKCELL_GETFADEOUTCURVE_OFFSET UNITYSDK_OFFSET(0x13EBE220)
#define MONOUIEXPANDANDSHRINKCELL_GET_CUREXPANDSTATE_OFFSET UNITYSDK_OFFSET(0x13EBE3F0)
#define MONOUIEXPANDANDSHRINKCELL_GET_SIZERATIO_OFFSET UNITYSDK_OFFSET(0x13EBDEE0)
#define MONOUIEXPANDANDSHRINKCELL_ISENDTHAN_OFFSET UNITYSDK_OFFSET(0x13EBEDA0)
#define MONOUIEXPANDANDSHRINKCELL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x13EBD6A0)
#define MONOUIEXPANDANDSHRINKCELL_ONRESET_OFFSET UNITYSDK_OFFSET(0x13EBE330)
#define MONOUIEXPANDANDSHRINKCELL_PLAYANIM_OFFSET UNITYSDK_OFFSET(0x13EBEE50)
#define MONOUIEXPANDANDSHRINKCELL_SAMPLEANIMATION_1_OFFSET UNITYSDK_OFFSET(0x13EBF1C0)
#define MONOUIEXPANDANDSHRINKCELL_SAMPLEANIMATION_OFFSET UNITYSDK_OFFSET(0x13EBD8E0)
#define MONOUIEXPANDANDSHRINKCELL_SET_SIZERATIO_OFFSET UNITYSDK_OFFSET(0x13EBEC30)
#define MONOUIEXPANDANDSHRINKCELL_SHRINK_OFFSET UNITYSDK_OFFSET(0x13EBDFC0)
#define MONOUIEXPANDANDSHRINKCELL_UPDATE_OFFSET UNITYSDK_OFFSET(0x13EBE400)
#define MONOUIEXPANDANDSHRINKCELL__CTOR_OFFSET UNITYSDK_OFFSET(0x13EBF570)

inline static constexpr unsigned int MonoUIExpandAndShrinkCell_TypeDefinitionIndex = 71867;

class MonoUIExpandAndShrinkCell : public ::UnityEngine::MonoBehaviour
{
public:
	::MonoLayoutElementProcessor* _layoutElementProcessor; // 0x18
	::UnityEngine::RectTransform_Axis _axis; // 0x20
	::System::Byte _padding0[0x4];
	::UnityEngine::GameObject* _childsRoot; // 0x28
	::MonoUIExpandAndShrinkCell_Conig* _config; // 0x30
	::UnityEngine::AnimationCurve* defaultCurve; // 0x38
	::NLEADNBMGIE* _sizeProcessor; // 0x40
	::System::Single _currentNormalizedTime; // 0x48
	::MonoUIExpandAndShrinkCell_ExpandState _curExpandState; // 0x4C
	::System::Int32 _lastFadeInChildIndex; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIEXPANDANDSHRINKCELL__CTOR_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIEXPANDANDSHRINKCELL_AWAKE_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIEXPANDANDSHRINKCELL_ONDESTROY_OFFSET))(this);
	}

	::System::Single Expand(::System::Nullable_1<::System::Single> normalizedTime)
	{
		return ((::System::Single(*)(::PVOID, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + MONOUIEXPANDANDSHRINKCELL_EXPAND_OFFSET))(this, normalizedTime);
	}

	::System::Single Shrink(::System::Nullable_1<::System::Single> normalizedTime)
	{
		return ((::System::Single(*)(::PVOID, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + MONOUIEXPANDANDSHRINKCELL_SHRINK_OFFSET))(this, normalizedTime);
	}

	::System::Void OnReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIEXPANDANDSHRINKCELL_ONRESET_OFFSET))(this);
	}

	::MonoUIExpandAndShrinkCell_ExpandState get_CurExpandState()
	{
		return ((::MonoUIExpandAndShrinkCell_ExpandState(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIEXPANDANDSHRINKCELL_GET_CUREXPANDSTATE_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIEXPANDANDSHRINKCELL_UPDATE_OFFSET))(this);
	}

	::System::Void SampleAnimation(::System::Single normalizedTime)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MONOUIEXPANDANDSHRINKCELL_SAMPLEANIMATION_OFFSET))(this, normalizedTime);
	}

	::UnityEngine::AnimationCurve* GetFadeInCurve()
	{
		return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIEXPANDANDSHRINKCELL_GETFADEINCURVE_OFFSET))(this);
	}

	::UnityEngine::AnimationCurve* GetFadeOutCurve()
	{
		return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIEXPANDANDSHRINKCELL_GETFADEOUTCURVE_OFFSET))(this);
	}

	::System::Boolean IsEndThan(::UnityEngine::Bounds a, ::UnityEngine::Bounds b)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Bounds, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + MONOUIEXPANDANDSHRINKCELL_ISENDTHAN_OFFSET))(this, a, b);
	}

	::System::Void PlayAnim(::UnityEngine::GameObject* child, ::System::String* animName)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + MONOUIEXPANDANDSHRINKCELL_PLAYANIM_OFFSET))(this, child, animName);
	}

	::System::Void SampleAnimation_1(::UnityEngine::GameObject* child, ::System::String* animName, ::System::Single normalizedTime)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MONOUIEXPANDANDSHRINKCELL_SAMPLEANIMATION_1_OFFSET))(this, child, animName, normalizedTime);
	}

	::System::Single get_SizeRatio()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIEXPANDANDSHRINKCELL_GET_SIZERATIO_OFFSET))(this);
	}

	::System::Void set_SizeRatio(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MONOUIEXPANDANDSHRINKCELL_SET_SIZERATIO_OFFSET))(this, value);
	}
};
