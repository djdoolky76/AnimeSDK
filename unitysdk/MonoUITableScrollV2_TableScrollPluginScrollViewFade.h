#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoUITableScrollV2_TableScrollPlugin.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/System/Nullable_1.h"

class GCIMMDDIFBJ;
namespace NAPScrollView::DataStruct { class IScrollViewPluginServiceProvider; }
namespace System { class String; }
namespace System::Threading { class CancellationTokenSource; }

#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLVIEWFADE_GET_FADEINANIMATIONNAME_OFFSET UNITYSDK_OFFSET(0x13EC3250)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLVIEWFADE_GET_ISPLAYINGFADEIN_OFFSET UNITYSDK_OFFSET(0x13EC3230)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLVIEWFADE_GET_ISPLAYINGFADEOUT_OFFSET UNITYSDK_OFFSET(0x13EC3210)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLVIEWFADE_PLAYFADEINANIMATIONINNER_OFFSET UNITYSDK_OFFSET(0x13EC33D0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLVIEWFADE_PLAYFADEINANIMATION_OFFSET UNITYSDK_OFFSET(0x13EC3330)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLVIEWFADE_SETFADEINANIMATIONTOFIRSTFRAMEINNER_OFFSET UNITYSDK_OFFSET(0x13EC34D0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLVIEWFADE_SETFADEINANIMATIONTOFIRSTFRAME_OFFSET UNITYSDK_OFFSET(0x13EC3440)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLVIEWFADE_SET_ISPLAYINGFADEIN_OFFSET UNITYSDK_OFFSET(0x13EC3240)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLVIEWFADE_SET_ISPLAYINGFADEOUT_OFFSET UNITYSDK_OFFSET(0x13EC3220)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLVIEWFADE_STOPANIMATION_OFFSET UNITYSDK_OFFSET(0x13EC3540)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLVIEWFADE__CTOR_OFFSET UNITYSDK_OFFSET(0x13EC2EC0)

inline static constexpr unsigned int MonoUITableScrollV2_TableScrollPluginScrollViewFade_TypeDefinitionIndex = 40096;

class MonoUITableScrollV2_TableScrollPluginScrollViewFade : public ::MonoUITableScrollV2_TableScrollPlugin
{
public:
	::System::Threading::CancellationTokenSource* cts; // 0x18
	::GCIMMDDIFBJ* _scrollViewAnimation; // 0x20
	::System::Boolean _isPlayingFadeOut_k__BackingField; // 0x28
	::System::Boolean _isPlayingFadeIn_k__BackingField; // 0x29

	::System::Void _ctor(::NAPScrollView::DataStruct::IScrollViewPluginServiceProvider* pluginServices)
	{
		return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::IScrollViewPluginServiceProvider*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLVIEWFADE__CTOR_OFFSET))(this, pluginServices);
	}

	::System::Boolean get_isPlayingFadeOut()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLVIEWFADE_GET_ISPLAYINGFADEOUT_OFFSET))(this);
	}

	::System::Void set_isPlayingFadeOut(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLVIEWFADE_SET_ISPLAYINGFADEOUT_OFFSET))(this, value);
	}

	::System::Boolean get_isPlayingFadeIn()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLVIEWFADE_GET_ISPLAYINGFADEIN_OFFSET))(this);
	}

	::System::Void set_isPlayingFadeIn(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLVIEWFADE_SET_ISPLAYINGFADEIN_OFFSET))(this, value);
	}

	::System::String* get_FadeInAnimationName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLVIEWFADE_GET_FADEINANIMATIONNAME_OFFSET))(this);
	}

	::System::Void PlayFadeInAnimation(::System::Nullable_1<::System::Single> normalizedTime)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLVIEWFADE_PLAYFADEINANIMATION_OFFSET))(this, normalizedTime);
	}

	::System::Void SetFadeInAnimationToFirstFrame()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLVIEWFADE_SETFADEINANIMATIONTOFIRSTFRAME_OFFSET))(this);
	}

	::System::Void StopAnimation()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLVIEWFADE_STOPANIMATION_OFFSET))(this);
	}

	::System::Void SetFadeInAnimationToFirstFrameInner()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLVIEWFADE_SETFADEINANIMATIONTOFIRSTFRAMEINNER_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid PlayFadeInAnimationInner(::System::Nullable_1<::System::Single> normalizedTime)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLVIEWFADE_PLAYFADEINANIMATIONINNER_OFFSET))(this, normalizedTime);
	}
};
