#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MonoUITableScrollV2_TableScrollPlugin.h"
#include "unitysdk/System/Nullable_1.h"

class MonoUITableScrollV2_ConfigItemAnim;
namespace MoleMole { class AnimationCurveEx; }
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace NAPScrollView::DataStruct { class IScrollViewLogicService; }
namespace NAPScrollView::DataStruct { class IScrollViewPluginServiceProvider; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_CLEARCOROUTINES_OFFSET UNITYSDK_OFFSET(0x1059BB00)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_FORCERESETFADEANIMSTATE_OFFSET UNITYSDK_OFFSET(0x1059BCB0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GETDATAINDEXBYITEMGO_INCLUDEDUMMY_OFFSET UNITYSDK_OFFSET(0x1059D280)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GETSCROLLITEM_OFFSET UNITYSDK_OFFSET(0x1059D3A0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GET_ANIMSHOWALL_OFFSET UNITYSDK_OFFSET(0x10598F10)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GET_CALFADEINTIME_OFFSET UNITYSDK_OFFSET(0x10598DF0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GET_CALFADEOUTTIME_OFFSET UNITYSDK_OFFSET(0x10599430)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GET_DATACONTENT_OFFSET UNITYSDK_OFFSET(0x10599AA0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GET_DONTPLAYFADEOUT_OFFSET UNITYSDK_OFFSET(0x10599110)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GET_FADEINANIMATIONNAME_OFFSET UNITYSDK_OFFSET(0x10598BB0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GET_FADEINCURVEV2_OFFSET UNITYSDK_OFFSET(0x10599710)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GET_FADEINTERVAL_OFFSET UNITYSDK_OFFSET(0x10598CD0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GET_FADEOUTANIMATIONNAME_OFFSET UNITYSDK_OFFSET(0x105991F0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GET_FADEOUTCURVEV2_OFFSET UNITYSDK_OFFSET(0x105997F0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GET_FADEOUTINTERVAL_OFFSET UNITYSDK_OFFSET(0x10599310)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x105999C0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GET_ISPLAYINGFADEINANIM_OFFSET UNITYSDK_OFFSET(0x10598A20)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GET_ISPLAYINGFADEOUT_OFFSET UNITYSDK_OFFSET(0x10598A00)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GET_ITEMCOUNTATOTHERAXIS_OFFSET UNITYSDK_OFFSET(0x105998D0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GET_ITEMFADEINDELAYTIME_OFFSET UNITYSDK_OFFSET(0x10598FF0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GET_LOGIC_OFFSET UNITYSDK_OFFSET(0x105999B0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GET_M_ISDESTROY_OFFSET UNITYSDK_OFFSET(0x1059E7C0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GET_RAWDATACOUNT_OFFSET UNITYSDK_OFFSET(0x10599C60)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GET_SIMPLEMODE_OFFSET UNITYSDK_OFFSET(0x10599550)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GET_SKIPFADEIN_OFFSET UNITYSDK_OFFSET(0x10598AD0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GET_USEEXPANDANIM_OFFSET UNITYSDK_OFFSET(0x10599630)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GET_VISIBLEITEMGAMEOBJECTS_OFFSET UNITYSDK_OFFSET(0x10599B80)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_ISBLOCKSCROLLSOUND_OFFSET UNITYSDK_OFFSET(0x1059E680)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_ISVISIABLEINVIEWRECT_OFFSET UNITYSDK_OFFSET(0x1059D160)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_LATEPLAYITEMANIM_OFFSET UNITYSDK_OFFSET(0x1059DA10)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_LATEPLAYPAGESHOWANIMATION_OFFSET UNITYSDK_OFFSET(0x1059A4E0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x10598A90)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_ONINITDATA_OFFSET UNITYSDK_OFFSET(0x10598A40)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_PLAYAPPEARSOUND_OFFSET UNITYSDK_OFFSET(0x1059E3F0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_PLAYCELLFADEOUTANIMATION_OFFSET UNITYSDK_OFFSET(0x1059DAD0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_PLAYFADEINANIMATIONWITHOUTEXPAND_OFFSET UNITYSDK_OFFSET(0x1059C6A0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_PLAYFADEINANIMATION_1_OFFSET UNITYSDK_OFFSET(0x1059A590)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_PLAYFADEINANIMATION_2_OFFSET UNITYSDK_OFFSET(0x1059A310)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_PLAYFADEINANIMATION_3_OFFSET UNITYSDK_OFFSET(0x1059D4C0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_PLAYFADEINANIMATION_OFFSET UNITYSDK_OFFSET(0x1059A0A0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_PLAYFADEOUTANIMATION_1_OFFSET UNITYSDK_OFFSET(0x1059BAA0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_PLAYFADEOUTANIMATION_OFFSET UNITYSDK_OFFSET(0x1059B000)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_PLAYFADEOUTWITHOUTEXPAND_OFFSET UNITYSDK_OFFSET(0x1059B2E0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_RESETUIANIMCELL_OFFSET UNITYSDK_OFFSET(0x1059BFC0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_SAMPLEALLCELLSTOFADEINENDFRAME_OFFSET UNITYSDK_OFFSET(0x1059BDE0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_SAMPLEANIMATIONTOSTART_1_OFFSET UNITYSDK_OFFSET(0x1059C110)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_SAMPLEANIMATIONTOSTART_OFFSET UNITYSDK_OFFSET(0x1059DFA0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_SETAPPEARSOUNDOVERRIDELIST_OFFSET UNITYSDK_OFFSET(0x1059E3A0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_SETFADEINANIMATIONTOFIRSTFRAMEWITHOUTEXPAND_OFFSET UNITYSDK_OFFSET(0x10599E70)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_SETFADEINANIMATIONTOFIRSTFRAME_OFFSET UNITYSDK_OFFSET(0x10599D40)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_SET_ISPLAYINGFADEINANIM_OFFSET UNITYSDK_OFFSET(0x10598A30)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_SET_ISPLAYINGFADEOUT_OFFSET UNITYSDK_OFFSET(0x10598A10)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_SET_M_ISDESTROY_OFFSET UNITYSDK_OFFSET(0x1059E7D0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_STOPANIMATION_OFFSET UNITYSDK_OFFSET(0x1059A5F0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE__CTOR_OFFSET UNITYSDK_OFFSET(0x10598940)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE__PLAYFADEINANIMATION_B__61_0_OFFSET UNITYSDK_OFFSET(0x1059E7E0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE__SHOWNEXTANIMATION_OFFSET UNITYSDK_OFFSET(0x1059D980)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1059E8D0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE___BASE_ONINITDATA_OFFSET UNITYSDK_OFFSET(0x1059E960)

inline static constexpr unsigned int MonoUITableScrollV2_TableScrollPluginItemFade_TypeDefinitionIndex = 40130;

class MonoUITableScrollV2_TableScrollPluginItemFade : public ::MonoUITableScrollV2_TableScrollPlugin
{
public:
	::MonoUITableScrollV2_ConfigItemAnim* _config; // 0x18
	::System::Collections::Generic::List_1<::Foundation::Coroutine::CoroutineHandle>* _coroutines; // 0x20
	::Il2CppArray<::System::String*>* _overriddenAppearSounds; // 0x28
	::System::Single _fadeOutAnimLength; // 0x30
	::System::Boolean _m_isDestroy_k__BackingField; // 0x34
	::System::Boolean _isPlayingFadeInAnim_k__BackingField; // 0x35
	::System::Boolean _isPlayingFadeOut_k__BackingField; // 0x36
	::System::Byte _padding0[0x1];
	::System::Single _fadeInAnimLength; // 0x38
	::System::Int32 _animOffset; // 0x3C

	::System::Void _ctor(::NAPScrollView::DataStruct::IScrollViewPluginServiceProvider* pluginServices)
	{
		return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::IScrollViewPluginServiceProvider*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE__CTOR_OFFSET))(this, pluginServices);
	}

	::System::Boolean get_isPlayingFadeOut()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GET_ISPLAYINGFADEOUT_OFFSET))(this);
	}

	::System::Void set_isPlayingFadeOut(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_SET_ISPLAYINGFADEOUT_OFFSET))(this, value);
	}

	::System::Boolean get_isPlayingFadeInAnim()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GET_ISPLAYINGFADEINANIM_OFFSET))(this);
	}

	::System::Void set_isPlayingFadeInAnim(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_SET_ISPLAYINGFADEINANIM_OFFSET))(this, value);
	}

	::System::Void OnInitData()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_ONINITDATA_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_ONDESTROY_OFFSET))(this);
	}

	::System::Boolean get_skipFadeIn()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GET_SKIPFADEIN_OFFSET))(this);
	}

	::System::String* get_FadeInAnimationName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GET_FADEINANIMATIONNAME_OFFSET))(this);
	}

	::System::Single get_FadeInterval()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GET_FADEINTERVAL_OFFSET))(this);
	}

	::System::Boolean get_CalFadeInTime()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GET_CALFADEINTIME_OFFSET))(this);
	}

	::System::Boolean get_AnimShowAll()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GET_ANIMSHOWALL_OFFSET))(this);
	}

	::System::Single get_ItemFadeInDelayTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GET_ITEMFADEINDELAYTIME_OFFSET))(this);
	}

	::System::Boolean get_dontPlayFadeOut()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GET_DONTPLAYFADEOUT_OFFSET))(this);
	}

	::System::String* get_fadeOutAnimationName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GET_FADEOUTANIMATIONNAME_OFFSET))(this);
	}

	::System::Single get_fadeOutInterval()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GET_FADEOUTINTERVAL_OFFSET))(this);
	}

	::System::Boolean get_calFadeOutTime()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GET_CALFADEOUTTIME_OFFSET))(this);
	}

	::System::Boolean get_SimpleMode()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GET_SIMPLEMODE_OFFSET))(this);
	}

	::System::Boolean get_UseExpandAnim()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GET_USEEXPANDANIM_OFFSET))(this);
	}

	::MoleMole::AnimationCurveEx* get_FadeInCurveV2()
	{
		return ((::MoleMole::AnimationCurveEx*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GET_FADEINCURVEV2_OFFSET))(this);
	}

	::MoleMole::AnimationCurveEx* get_FadeOutCurveV2()
	{
		return ((::MoleMole::AnimationCurveEx*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GET_FADEOUTCURVEV2_OFFSET))(this);
	}

	::System::Int32 get_ItemCountAtOtherAxis()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GET_ITEMCOUNTATOTHERAXIS_OFFSET))(this);
	}

	::NAPScrollView::DataStruct::IScrollViewLogicService* get_logic()
	{
		return ((::NAPScrollView::DataStruct::IScrollViewLogicService*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GET_LOGIC_OFFSET))(this);
	}

	::UnityEngine::GameObject* get_gameObject()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GET_GAMEOBJECT_OFFSET))(this);
	}

	::UnityEngine::RectTransform* get_DataContent()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GET_DATACONTENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::UnityEngine::GameObject*>* get_visibleItemGameObjects()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::GameObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GET_VISIBLEITEMGAMEOBJECTS_OFFSET))(this);
	}

	::System::Int32 get_rawDataCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GET_RAWDATACOUNT_OFFSET))(this);
	}

	::System::Void SetFadeInAnimationToFirstFrame()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_SETFADEINANIMATIONTOFIRSTFRAME_OFFSET))(this);
	}

	::System::Void PlayFadeInAnimation(::MonoUITableScrollV2_ConfigItemAnim* config, ::System::Nullable_1<::System::Single> normalizedTime)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2_ConfigItemAnim*, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_PLAYFADEINANIMATION_OFFSET))(this, config, normalizedTime);
	}

	::System::Void PlayFadeInAnimation_1(::System::Nullable_1<::System::Single> normalizedTime)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_PLAYFADEINANIMATION_1_OFFSET))(this, normalizedTime);
	}

	::System::Void StopAnimation()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_STOPANIMATION_OFFSET))(this);
	}

	::System::Single PlayFadeOutAnimation(::MonoUITableScrollV2_ConfigItemAnim* config, ::System::Action* fadeOutAction, ::System::Nullable_1<::System::Single> normalizedTime)
	{
		return ((::System::Single(*)(::PVOID, ::MonoUITableScrollV2_ConfigItemAnim*, ::System::Action*, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_PLAYFADEOUTANIMATION_OFFSET))(this, config, fadeOutAction, normalizedTime);
	}

	::System::Single PlayFadeOutAnimation_1(::System::Action* fadeOutAction, ::System::Nullable_1<::System::Single> normalizedTime)
	{
		return ((::System::Single(*)(::PVOID, ::System::Action*, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_PLAYFADEOUTANIMATION_1_OFFSET))(this, fadeOutAction, normalizedTime);
	}

	::System::Void ClearCoroutines()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_CLEARCOROUTINES_OFFSET))(this);
	}

	::System::Void ForceResetFadeAnimState()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_FORCERESETFADEANIMSTATE_OFFSET))(this);
	}

	::System::Void SampleAllCellsToFadeInEndFrame()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_SAMPLEALLCELLSTOFADEINENDFRAME_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* LatePlayPageShowAnimation(::System::Single delay, ::System::Boolean first, ::System::Nullable_1<::System::Single> normalizedTime)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::System::Single, ::System::Boolean, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_LATEPLAYPAGESHOWANIMATION_OFFSET))(this, delay, first, normalizedTime);
	}

	::System::Void PlayFadeInAnimation_2(::System::Boolean first, ::System::Nullable_1<::System::Single> normalizedTime)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_PLAYFADEINANIMATION_2_OFFSET))(this, first, normalizedTime);
	}

	::System::Void PlayFadeInAnimationWithoutExpand(::System::Boolean first)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_PLAYFADEINANIMATIONWITHOUTEXPAND_OFFSET))(this, first);
	}

	::System::Void SetFadeInAnimationToFirstFrameWithoutExpand()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_SETFADEINANIMATIONTOFIRSTFRAMEWITHOUTEXPAND_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* _ShowNextAnimation(::System::Int32 dataCount)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE__SHOWNEXTANIMATION_OFFSET))(this, dataCount);
	}

	::System::Void PlayFadeInAnimation_3(::UnityEngine::GameObject* go, ::System::Int32 animIndex, ::System::Int32 animGoCount, ::System::Int32 dataIndex, ::MoleMole::AnimationCurveEx* curve)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32, ::System::Int32, ::System::Int32, ::MoleMole::AnimationCurveEx*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_PLAYFADEINANIMATION_3_OFFSET))(this, go, animIndex, animGoCount, dataIndex, curve);
	}

	::System::Single PlayFadeOutWithoutExpand(::System::Action* fadeOutAction)
	{
		return ((::System::Single(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_PLAYFADEOUTWITHOUTEXPAND_OFFSET))(this, fadeOutAction);
	}

	::System::Void PlayCellFadeOutAnimation(::UnityEngine::GameObject* go, ::System::Int32 animIndex, ::System::Int32 animGoCount, ::System::Int32 dataIndex, ::MoleMole::AnimationCurveEx* curve)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32, ::System::Int32, ::System::Int32, ::MoleMole::AnimationCurveEx*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_PLAYCELLFADEOUTANIMATION_OFFSET))(this, go, animIndex, animGoCount, dataIndex, curve);
	}

	::System::Void SampleAnimationToStart(::System::Boolean start)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_SAMPLEANIMATIONTOSTART_OFFSET))(this, start);
	}

	::System::Void SampleAnimationToStart_1(::UnityEngine::GameObject* go, ::System::Boolean start)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_SAMPLEANIMATIONTOSTART_1_OFFSET))(this, go, start);
	}

	::System::Void ResetUIAnimCell(::UnityEngine::GameObject* go)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_RESETUIANIMCELL_OFFSET))(this, go);
	}

	::System::Boolean IsVisiableInViewRect(::UnityEngine::RectTransform* rectTransform)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_ISVISIABLEINVIEWRECT_OFFSET))(this, rectTransform);
	}

	::System::Int32 GetDataIndexByItemGO_IncludeDummy(::UnityEngine::GameObject* go)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GETDATAINDEXBYITEMGO_INCLUDEDUMMY_OFFSET))(this, go);
	}

	::MoleMole::ScrollViewItemWidgetController* GetScrollItem(::UnityEngine::GameObject* go)
	{
		return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GETSCROLLITEM_OFFSET))(this, go);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* LatePlayItemAnim(::UnityEngine::GameObject* go, ::System::Single delay, ::System::Boolean isFadeIn, ::System::Int32 offset)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Single, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_LATEPLAYITEMANIM_OFFSET))(this, go, delay, isFadeIn, offset);
	}

	::System::Void SetAppearSoundOverrideList(::Il2CppArray<::System::String*>* overrideSounds)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_SETAPPEARSOUNDOVERRIDELIST_OFFSET))(this, overrideSounds);
	}

	::System::Void PlayAppearSound(::System::Int32 index)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_PLAYAPPEARSOUND_OFFSET))(this, index);
	}

	static ::System::Boolean IsBlockScrollSound()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_ISBLOCKSCROLLSOUND_OFFSET))();
	}

	::System::Boolean get_m_isDestroy()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GET_M_ISDESTROY_OFFSET))(this);
	}

	::System::Void set_m_isDestroy(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_SET_M_ISDESTROY_OFFSET))(this, value);
	}

	::System::Void _PlayFadeInAnimation_b__61_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE__PLAYFADEINANIMATION_B__61_0_OFFSET))(this);
	}

	::System::Void __base_OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE___BASE_ONDESTROY_OFFSET))(this);
	}

	::System::Void __base_OnInitData()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE___BASE_ONINITDATA_OFFSET))(this);
	}
};
