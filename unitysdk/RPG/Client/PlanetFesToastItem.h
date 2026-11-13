#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PlanetFesToastItem_Status.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace System { class Object; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationClip; }

#define RPG_CLIENT_PLANETFESTOASTITEM_AWAKE_OFFSET UNITYSDK_OFFSET(0x1E29A410)
#define RPG_CLIENT_PLANETFESTOASTITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E29A580)
#define RPG_CLIENT_PLANETFESTOASTITEM_FADEIN_OFFSET UNITYSDK_OFFSET(0x1E29A270)
#define RPG_CLIENT_PLANETFESTOASTITEM_FADEOUT_OFFSET UNITYSDK_OFFSET(0x1E29A2E0)
#define RPG_CLIENT_PLANETFESTOASTITEM_GET_CURSTATUS_OFFSET UNITYSDK_OFFSET(0x1E29A540)
#define RPG_CLIENT_PLANETFESTOASTITEM_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x1E29A4E0)
#define RPG_CLIENT_PLANETFESTOASTITEM_GET_LIFETIME_OFFSET UNITYSDK_OFFSET(0x1E29A500)
#define RPG_CLIENT_PLANETFESTOASTITEM_GET_POSITIONINDEX_OFFSET UNITYSDK_OFFSET(0x1E29A520)
#define RPG_CLIENT_PLANETFESTOASTITEM_GET_TIMEPOINT_OFFSET UNITYSDK_OFFSET(0x1E29A560)
#define RPG_CLIENT_PLANETFESTOASTITEM_GET_USEROBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1E29A4C0)
#define RPG_CLIENT_PLANETFESTOASTITEM_HIDE_OFFSET UNITYSDK_OFFSET(0x1E29A350)
#define RPG_CLIENT_PLANETFESTOASTITEM_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E299FB0)
#define RPG_CLIENT_PLANETFESTOASTITEM_ISANIMATING_OFFSET UNITYSDK_OFFSET(0x1E29A3B0)
#define RPG_CLIENT_PLANETFESTOASTITEM_SETPOSITIONY_OFFSET UNITYSDK_OFFSET(0x1E29A130)
#define RPG_CLIENT_PLANETFESTOASTITEM_SET_CURSTATUS_OFFSET UNITYSDK_OFFSET(0x1E29A550)
#define RPG_CLIENT_PLANETFESTOASTITEM_SET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x1E29A4F0)
#define RPG_CLIENT_PLANETFESTOASTITEM_SET_LIFETIME_OFFSET UNITYSDK_OFFSET(0x1E29A510)
#define RPG_CLIENT_PLANETFESTOASTITEM_SET_POSITIONINDEX_OFFSET UNITYSDK_OFFSET(0x1E29A530)
#define RPG_CLIENT_PLANETFESTOASTITEM_SET_TIMEPOINT_OFFSET UNITYSDK_OFFSET(0x1E29A570)
#define RPG_CLIENT_PLANETFESTOASTITEM_SET_USEROBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1E29A4D0)
#define RPG_CLIENT_PLANETFESTOASTITEM_SHOWING_OFFSET UNITYSDK_OFFSET(0x1E29A220)
#define RPG_CLIENT_PLANETFESTOASTITEM_STOPANIMATION_OFFSET UNITYSDK_OFFSET(0x1E29A1C0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesToastItem_TypeDefinitionIndex = 68440;

	class PlanetFesToastItem : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single Padding; // 0x18
		::System::Byte _padding0[0x4];
		::UnityEngine::AnimationClip* FadeOutAnimationClip; // 0x20
		::UnityEngine::AnimationClip* FadeInAnimationClip; // 0x28
		::System::Object* _UserObjectData_k__BackingField; // 0x30
		::System::Single _Height_k__BackingField; // 0x38
		::System::Single _LifeTime_k__BackingField; // 0x3C
		::System::UInt32 _PositionIndex_k__BackingField; // 0x40
		::RPG::Client::PlanetFesToastItem_Status _CurStatus_k__BackingField; // 0x44
		::System::Single _TimePoint_k__BackingField; // 0x48
		::System::Byte _padding1[0x4];
		::UnityEngine::Animation* _Animation; // 0x50
		// static const ::System::Object STAY_TIME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTOASTITEM_CTOR_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTOASTITEM_INITIALIZE_OFFSET))(this);
		}

		::System::Void SetPositionY(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTOASTITEM_SETPOSITIONY_OFFSET))(this, a1);
		}

		::System::Void Showing()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTOASTITEM_SHOWING_OFFSET))(this);
		}

		::System::Void FadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTOASTITEM_FADEIN_OFFSET))(this);
		}

		::System::Void FadeOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTOASTITEM_FADEOUT_OFFSET))(this);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTOASTITEM_HIDE_OFFSET))(this);
		}

		::System::Boolean IsAnimating()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTOASTITEM_ISANIMATING_OFFSET))(this);
		}

		::System::Void StopAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTOASTITEM_STOPANIMATION_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTOASTITEM_AWAKE_OFFSET))(this);
		}

		::System::Object* get_UserObjectData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTOASTITEM_GET_USEROBJECTDATA_OFFSET))(this);
		}

		::System::Void set_UserObjectData(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTOASTITEM_SET_USEROBJECTDATA_OFFSET))(this, a1);
		}

		::System::Single get_Height()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTOASTITEM_GET_HEIGHT_OFFSET))(this);
		}

		::System::Void set_Height(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTOASTITEM_SET_HEIGHT_OFFSET))(this, a1);
		}

		::System::Single get_LifeTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTOASTITEM_GET_LIFETIME_OFFSET))(this);
		}

		::System::Void set_LifeTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTOASTITEM_SET_LIFETIME_OFFSET))(this, a1);
		}

		::System::UInt32 get_PositionIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTOASTITEM_GET_POSITIONINDEX_OFFSET))(this);
		}

		::System::Void set_PositionIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTOASTITEM_SET_POSITIONINDEX_OFFSET))(this, a1);
		}

		::RPG::Client::PlanetFesToastItem_Status get_CurStatus()
		{
			return ((::RPG::Client::PlanetFesToastItem_Status(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTOASTITEM_GET_CURSTATUS_OFFSET))(this);
		}

		::System::Void set_CurStatus(::RPG::Client::PlanetFesToastItem_Status a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesToastItem_Status))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTOASTITEM_SET_CURSTATUS_OFFSET))(this, a1);
		}

		::System::Single get_TimePoint()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTOASTITEM_GET_TIMEPOINT_OFFSET))(this);
		}

		::System::Void set_TimePoint(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTOASTITEM_SET_TIMEPOINT_OFFSET))(this, a1);
		}

	};
}
