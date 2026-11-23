#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BDAD7F45EA9CF9E9/EE285593635B9C51.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Timeline/TimelineClip_BD6D400ECFAE572A.h"
#include "unitysdk/UnityEngine/Timeline/TimelineClip_E92605C767E7EBD3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class FAED0374422E783A; }
namespace UnityEngine { class Object; }
namespace UnityEngine::Timeline { class TrackAsset; }

#define UNITYENGINE_TIMELINE_TIMELINECLIP_EVALUATEMIXIN_OFFSET UNITYSDK_OFFSET(0x40DDA10)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_EVALUATEMIXOUT_OFFSET UNITYSDK_OFFSET(0x40DDB70)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GETDEFAULTMIXINCURVE_OFFSET UNITYSDK_OFFSET(0x40DDCF0)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GETDEFAULTMIXOUTCURVE_OFFSET UNITYSDK_OFFSET(0x40DDD20)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GETEXTRAPOLATEDTIME_OFFSET UNITYSDK_OFFSET(0x40DDD50)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GETPARENTTRACK_OFFSET UNITYSDK_OFFSET(0x18249B0)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_ASSET_OFFSET UNITYSDK_OFFSET(0x169C070)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_BLENDINDURATION_OFFSET UNITYSDK_OFFSET(0x40DEA50)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_BLENDOUTDURATION_OFFSET UNITYSDK_OFFSET(0x40DEA80)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x40DEAB0)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_CLIPIN_OFFSET UNITYSDK_OFFSET(0x40DEB40)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_CURVES_OFFSET UNITYSDK_OFFSET(0x18347C0)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x17F7030)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x2997D20)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_EASEINDURATION_OFFSET UNITYSDK_OFFSET(0x40DEB70)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_EASEOUTDURATION_OFFSET UNITYSDK_OFFSET(0x40DEC40)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_END_OFFSET UNITYSDK_OFFSET(0x40DED10)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_EXTRAPOLATEDDURATION_OFFSET UNITYSDK_OFFSET(0x40DED20)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_EXTRAPOLATEDSTART_OFFSET UNITYSDK_OFFSET(0x40DEE00)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_HASBLENDIN_OFFSET UNITYSDK_OFFSET(0x40DEE20)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_HASBLENDOUT_OFFSET UNITYSDK_OFFSET(0x40DEE60)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_MIXINCURVE_OFFSET UNITYSDK_OFFSET(0x40DEEA0)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_MIXINDURATION_OFFSET UNITYSDK_OFFSET(0x40DEF30)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_MIXOUTCURVE_OFFSET UNITYSDK_OFFSET(0x40DF030)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_MIXOUTDURATION_OFFSET UNITYSDK_OFFSET(0x40DF0C0)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_MIXOUTTIME_OFFSET UNITYSDK_OFFSET(0x40DF1C0)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_POSTEXTRAPOLATIONMODE_OFFSET UNITYSDK_OFFSET(0x40DF200)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_PREEXTRAPOLATIONMODE_OFFSET UNITYSDK_OFFSET(0x40DF230)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_RECORDABLE_OFFSET UNITYSDK_OFFSET(0x1A83D80)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_START_OFFSET UNITYSDK_OFFSET(0x3FFEF40)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x40DF260)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_HASH_OFFSET UNITYSDK_OFFSET(0x40DDE90)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_ISPOSTEXTRAPOLATEDTIME_OFFSET UNITYSDK_OFFSET(0x40DDFF0)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_ISPREEXTRAPOLATEDTIME_OFFSET UNITYSDK_OFFSET(0x40DE060)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_SANITIZETIMEVALUE_OFFSET UNITYSDK_OFFSET(0x40DE0C0)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_SETPARENTTRACK_INTERNAL_OFFSET UNITYSDK_OFFSET(0x40DE200)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_SETPOSTEXTRAPOLATIONTIME_OFFSET UNITYSDK_OFFSET(0x40DE310)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_SETPREEXTRAPOLATIONTIME_OFFSET UNITYSDK_OFFSET(0x40DE320)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_SET_ASSET_OFFSET UNITYSDK_OFFSET(0x1962CA0)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_SET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x180F000)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_SET_DURATION_OFFSET UNITYSDK_OFFSET(0x40DF340)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_SET_MIXINCURVE_OFFSET UNITYSDK_OFFSET(0x17F4BD0)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_SET_MIXOUTCURVE_OFFSET UNITYSDK_OFFSET(0x17395F0)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_SET_POSTEXTRAPOLATIONMODE_OFFSET UNITYSDK_OFFSET(0x40DF3F0)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_SET_PREEXTRAPOLATIONMODE_OFFSET UNITYSDK_OFFSET(0x40DF430)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_SET_RECORDABLE_OFFSET UNITYSDK_OFFSET(0x1A83DE0)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_SET_START_OFFSET UNITYSDK_OFFSET(0x40DF470)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_TOLOCALTIME_OFFSET UNITYSDK_OFFSET(0x40DE330)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x40DE500)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x40DE7B0)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x389A450)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_UNITYENGINE_TIMELINE_ICURVESOWNER_GET_ASSETOWNER_OFFSET UNITYSDK_OFFSET(0x18249B0)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_UNITYENGINE_TIMELINE_ICURVESOWNER_GET_DEFAULTCURVESNAME_OFFSET UNITYSDK_OFFSET(0x40DE7E0)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_UNITYENGINE_TIMELINE_ICURVESOWNER_GET_TARGETTRACK_OFFSET UNITYSDK_OFFSET(0x18249B0)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_UPDATEDIRTY_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_UPGRADETOLATESTVERSION_OFFSET UNITYSDK_OFFSET(0x40DE7B0)
#define UNITYENGINE_TIMELINE_TIMELINECLIP__CCTOR_OFFSET UNITYSDK_OFFSET(0x40DE830)
#define UNITYENGINE_TIMELINE_TIMELINECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x40DE920)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TimelineClip_TypeDefinitionIndex = 20231;

	class TimelineClip : public ::System::Object
	{
	public:
		static ::BDAD7F45EA9CF9E9::EE285593635B9C51* StaticGet_kDefaultClipCaps()
		{
			return (::BDAD7F45EA9CF9E9::EE285593635B9C51*)Il2CppClass::FromTypeDefinitionIndex(TimelineClip_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Single* StaticGet_kDefaultClipDurationInSeconds()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(TimelineClip_TypeDefinitionIndex)->GetStaticField(0x4);
		}
		static ::System::Double* StaticGet_kTimeScaleMin()
		{
			return (::System::Double*)Il2CppClass::FromTypeDefinitionIndex(TimelineClip_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		static ::System::Double* StaticGet_kTimeScaleMax()
		{
			return (::System::Double*)Il2CppClass::FromTypeDefinitionIndex(TimelineClip_TypeDefinitionIndex)->GetStaticField(0x10);
		}
		static ::System::String** StaticGet_kDefaultCurvesName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TimelineClip_TypeDefinitionIndex)->GetStaticField(0x18);
		}
		static ::System::Double* StaticGet_kMinDuration()
		{
			return (::System::Double*)Il2CppClass::FromTypeDefinitionIndex(TimelineClip_TypeDefinitionIndex)->GetStaticField(0x20);
		}
		static ::System::Double* StaticGet_kMaxTimeValue()
		{
			return (::System::Double*)Il2CppClass::FromTypeDefinitionIndex(TimelineClip_TypeDefinitionIndex)->GetStaticField(0x28);
		}
		::System::Int32 m_Version; // 0x10
		::System::Byte _padding0[0x4];
		::System::Double m_Start; // 0x18
		::System::Double m_ClipIn; // 0x20
		::UnityEngine::Object* m_Asset; // 0x28
		::System::Double m_Duration; // 0x30
		::System::Double m_TimeScale; // 0x38
		::UnityEngine::Timeline::TrackAsset* m_ParentTrack; // 0x40
		::System::Double m_EaseInDuration; // 0x48
		::System::Double m_EaseOutDuration; // 0x50
		::System::Double m_BlendInDuration; // 0x58
		::System::Double m_BlendOutDuration; // 0x60
		::UnityEngine::FAED0374422E783A* m_MixInCurve; // 0x68
		::UnityEngine::FAED0374422E783A* m_MixOutCurve; // 0x70
		::UnityEngine::Timeline::TimelineClip_BD6D400ECFAE572A m_BlendInCurveMode; // 0x78
		::UnityEngine::Timeline::TimelineClip_BD6D400ECFAE572A m_BlendOutCurveMode; // 0x7C
		::System::Collections::Generic::List_1<::System::String*>* m_ExposedParameterNames; // 0x80
		::UnityEngine::AnimationClip* m_AnimationCurves; // 0x88
		::System::Boolean m_Recordable; // 0x90
		::System::Byte _padding1[0x3];
		::UnityEngine::Timeline::TimelineClip_E92605C767E7EBD3 m_PostExtrapolationMode; // 0x94
		::UnityEngine::Timeline::TimelineClip_E92605C767E7EBD3 m_PreExtrapolationMode; // 0x98
		::System::Byte _padding2[0x4];
		::System::Double m_PostExtrapolationTime; // 0xA0
		::System::Double m_PreExtrapolationTime; // 0xA8
		::System::String* m_DisplayName; // 0xB0

		::System::Single EvaluateMixIn(::System::Double FF0A37159A523E06)
		{
			return ((::System::Single(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_EVALUATEMIXIN_OFFSET))(this, FF0A37159A523E06);
		}

		::System::Double get_blendOutDuration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GET_BLENDOUTDURATION_OFFSET))(this);
		}

		::System::Boolean IsPreExtrapolatedTime(::System::Double B97A7AB6703AEFCE)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_ISPREEXTRAPOLATEDTIME_OFFSET))(this, B97A7AB6703AEFCE);
		}

		::System::Void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void set_displayName(::System::String* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_SET_DISPLAYNAME_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Single EvaluateMixOut(::System::Double FF0A37159A523E06)
		{
			return ((::System::Single(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_EVALUATEMIXOUT_OFFSET))(this, FF0A37159A523E06);
		}

		::System::Int32 Hash()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_HASH_OFFSET))(this);
		}

		::System::Double get_blendInDuration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GET_BLENDINDURATION_OFFSET))(this);
		}

		::System::Double get_easeInDuration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GET_EASEINDURATION_OFFSET))(this);
		}

		::BDAD7F45EA9CF9E9::EE285593635B9C51 get_clipCaps()
		{
			return ((::BDAD7F45EA9CF9E9::EE285593635B9C51(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::AnimationClip* get_curves()
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GET_CURVES_OFFSET))(this);
		}

		::System::Double get_timeScale()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GET_TIMESCALE_OFFSET))(this);
		}

		::System::String* get_displayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GET_DISPLAYNAME_OFFSET))(this);
		}

		::System::Void set_duration(::System::Double E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_SET_DURATION_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void SetPostExtrapolationTime(::System::Double FF0A37159A523E06)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_SETPOSTEXTRAPOLATIONTIME_OFFSET))(this, FF0A37159A523E06);
		}

		::UnityEngine::Timeline::TimelineClip_E92605C767E7EBD3 get_preExtrapolationMode()
		{
			return ((::UnityEngine::Timeline::TimelineClip_E92605C767E7EBD3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GET_PREEXTRAPOLATIONMODE_OFFSET))(this);
		}

		::System::Void SetPreExtrapolationTime(::System::Double FF0A37159A523E06)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_SETPREEXTRAPOLATIONTIME_OFFSET))(this, FF0A37159A523E06);
		}

		::System::Boolean get_recordable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GET_RECORDABLE_OFFSET))(this);
		}

		::System::Double get_start()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GET_START_OFFSET))(this);
		}

		::UnityEngine::FAED0374422E783A* get_mixOutCurve()
		{
			return ((::UnityEngine::FAED0374422E783A*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GET_MIXOUTCURVE_OFFSET))(this);
		}

		::System::Double get_extrapolatedDuration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GET_EXTRAPOLATEDDURATION_OFFSET))(this);
		}

		::System::Void set_postExtrapolationMode(::UnityEngine::Timeline::TimelineClip_E92605C767E7EBD3 E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip_E92605C767E7EBD3))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_SET_POSTEXTRAPOLATIONMODE_OFFSET))(this, E937D4885DAA1AE8);
		}

		static ::UnityEngine::FAED0374422E783A* GetDefaultMixInCurve()
		{
			return ((::UnityEngine::FAED0374422E783A*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GETDEFAULTMIXINCURVE_OFFSET))();
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_TOSTRING_OFFSET))(this);
		}

		::System::Double ToLocalTime(::System::Double FF0A37159A523E06)
		{
			return ((::System::Double(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_TOLOCALTIME_OFFSET))(this, FF0A37159A523E06);
		}

		::System::Void set_start(::System::Double E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_SET_START_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Double get_duration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GET_DURATION_OFFSET))(this);
		}

		::System::Boolean IsPostExtrapolatedTime(::System::Double B97A7AB6703AEFCE)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_ISPOSTEXTRAPOLATEDTIME_OFFSET))(this, B97A7AB6703AEFCE);
		}

		::System::Void _ctor(::UnityEngine::Timeline::TrackAsset* EFE497ABF6BF98D8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TrackAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP__CTOR_OFFSET))(this, EFE497ABF6BF98D8);
		}

		::System::Void UpgradeToLatestVersion()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_UPGRADETOLATESTVERSION_OFFSET))(this);
		}

		::System::Void set_asset(::UnityEngine::Object* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_SET_ASSET_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Double get_clipIn()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GET_CLIPIN_OFFSET))(this);
		}

		::UnityEngine::Timeline::TimelineClip_E92605C767E7EBD3 get_postExtrapolationMode()
		{
			return ((::UnityEngine::Timeline::TimelineClip_E92605C767E7EBD3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GET_POSTEXTRAPOLATIONMODE_OFFSET))(this);
		}

		::UnityEngine::Object* UnityEngine_Timeline_ICurvesOwner_get_assetOwner()
		{
			return ((::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_UNITYENGINE_TIMELINE_ICURVESOWNER_GET_ASSETOWNER_OFFSET))(this);
		}

		static ::UnityEngine::FAED0374422E783A* GetDefaultMixOutCurve()
		{
			return ((::UnityEngine::FAED0374422E783A*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GETDEFAULTMIXOUTCURVE_OFFSET))();
		}

		::System::Void set_preExtrapolationMode(::UnityEngine::Timeline::TimelineClip_E92605C767E7EBD3 E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip_E92605C767E7EBD3))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_SET_PREEXTRAPOLATIONMODE_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Double get_extrapolatedStart()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GET_EXTRAPOLATEDSTART_OFFSET))(this);
		}

		::UnityEngine::Timeline::TrackAsset* GetParentTrack()
		{
			return ((::UnityEngine::Timeline::TrackAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GETPARENTTRACK_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP__CCTOR_OFFSET))();
		}

		::System::Void set_mixInCurve(::UnityEngine::FAED0374422E783A* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::FAED0374422E783A*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_SET_MIXINCURVE_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_recordable(::System::Boolean E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_SET_RECORDABLE_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void SetParentTrack_Internal(::UnityEngine::Timeline::TrackAsset* F050B76DB8FE2157)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TrackAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_SETPARENTTRACK_INTERNAL_OFFSET))(this, F050B76DB8FE2157);
		}

		::System::Void set_mixOutCurve(::UnityEngine::FAED0374422E783A* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::FAED0374422E783A*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_SET_MIXOUTCURVE_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::Object* get_asset()
		{
			return ((::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GET_ASSET_OFFSET))(this);
		}

		::System::String* UnityEngine_Timeline_ICurvesOwner_get_defaultCurvesName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_UNITYENGINE_TIMELINE_ICURVESOWNER_GET_DEFAULTCURVESNAME_OFFSET))(this);
		}

		::System::Boolean get_hasBlendOut()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GET_HASBLENDOUT_OFFSET))(this);
		}

		::UnityEngine::Timeline::TrackAsset* UnityEngine_Timeline_ICurvesOwner_get_targetTrack()
		{
			return ((::UnityEngine::Timeline::TrackAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_UNITYENGINE_TIMELINE_ICURVESOWNER_GET_TARGETTRACK_OFFSET))(this);
		}

		::System::Void UpdateDirty(::System::Double B2F77B2E7464CA23, ::System::Double E77E6A79A5AC143F)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_UPDATEDIRTY_OFFSET))(this, B2F77B2E7464CA23, E77E6A79A5AC143F);
		}

		::System::Double get_end()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GET_END_OFFSET))(this);
		}

		::UnityEngine::FAED0374422E783A* get_mixInCurve()
		{
			return ((::UnityEngine::FAED0374422E783A*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GET_MIXINCURVE_OFFSET))(this);
		}

		static ::System::Double SanitizeTimeValue(::System::Double E937D4885DAA1AE8, ::System::Double E068F60C6205B02D)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_SANITIZETIMEVALUE_OFFSET))(E937D4885DAA1AE8, E068F60C6205B02D);
		}

		::System::Double get_easeOutDuration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GET_EASEOUTDURATION_OFFSET))(this);
		}

		::System::Boolean get_hasBlendIn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GET_HASBLENDIN_OFFSET))(this);
		}

		::System::Double get_mixInDuration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GET_MIXINDURATION_OFFSET))(this);
		}

		::System::Double get_mixOutTime()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GET_MIXOUTTIME_OFFSET))(this);
		}

		::System::Double get_mixOutDuration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GET_MIXOUTDURATION_OFFSET))(this);
		}

		static ::System::Double GetExtrapolatedTime(::System::Double FF0A37159A523E06, ::UnityEngine::Timeline::TimelineClip_E92605C767E7EBD3 A84D57260767D5BD, ::System::Double BD3B33D72884EDA1)
		{
			return ((::System::Double(*)(::System::Double, ::UnityEngine::Timeline::TimelineClip_E92605C767E7EBD3, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GETEXTRAPOLATEDTIME_OFFSET))(FF0A37159A523E06, A84D57260767D5BD, BD3B33D72884EDA1);
		}
	};
}
