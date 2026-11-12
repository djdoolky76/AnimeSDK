#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityFeverTimeToastHintItem_Status.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class HMLFAPGFDLB;
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_AWAKE_OFFSET UNITYSDK_OFFSET(0xCD2E0C0)
#define RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_CTOR_OFFSET UNITYSDK_OFFSET(0xCD2E2D0)
#define RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_EJEILFGHCNG_OFFSET UNITYSDK_OFFSET(0xCD2DFC0)
#define RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_FADEIN_OFFSET UNITYSDK_OFFSET(0xCD2D5F0)
#define RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_FADEOUT_OFFSET UNITYSDK_OFFSET(0xCD2D780)
#define RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_GET_ANIMATING_OFFSET UNITYSDK_OFFSET(0xCD2E2B0)
#define RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_GET_CURSTATUS_OFFSET UNITYSDK_OFFSET(0xCD2E270)
#define RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0xCD2D210)
#define RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_GET_LIFETIME_OFFSET UNITYSDK_OFFSET(0xCD2E230)
#define RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_GET_POSITIONINDEX_OFFSET UNITYSDK_OFFSET(0xCD2E250)
#define RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_GET_TIMEPOINT_OFFSET UNITYSDK_OFFSET(0xCD2E290)
#define RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_HIDE_OFFSET UNITYSDK_OFFSET(0xCD2D6C0)
#define RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xCD2D910)
#define RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xCD2DF70)
#define RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_SETPOSITIONY_OFFSET UNITYSDK_OFFSET(0xCD2D260)
#define RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_SET_ANIMATING_OFFSET UNITYSDK_OFFSET(0xCD2E2C0)
#define RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_SET_CURSTATUS_OFFSET UNITYSDK_OFFSET(0xCD2E280)
#define RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_SET_LIFETIME_OFFSET UNITYSDK_OFFSET(0xCD2E240)
#define RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_SET_POSITIONINDEX_OFFSET UNITYSDK_OFFSET(0xCD2E260)
#define RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_SET_TIMEPOINT_OFFSET UNITYSDK_OFFSET(0xCD2E2A0)
#define RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_SHOW_OFFSET UNITYSDK_OFFSET(0xCD2D590)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityFeverTimeToastHintItem_TypeDefinitionIndex = 73357;

	class ActivityFeverTimeToastHintItem : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single _LifeTime_k__BackingField; // 0x18
		::System::UInt32 _PositionIndex_k__BackingField; // 0x1C
		::RPG::Client::ActivityFeverTimeToastHintItem_Status _CurStatus_k__BackingField; // 0x20
		::System::Single _TimePoint_k__BackingField; // 0x24
		::System::Boolean _Animating_k__BackingField; // 0x28
		::System::Byte _padding0[0x7];
		::UnityEngine::Animation* PMOJILOJEPE; // 0x30
		::UnityEngine::Animation* BKFCKCKHMCB; // 0x38
		::UnityEngine::UI::Text* GEPFFDDHPAI; // 0x40
		::UnityEngine::UI::Text* KOOOBCDMEIP; // 0x48
		::UnityEngine::UI::Text* HCPKJEKHAPF; // 0x50
		// static const ::System::Object JNEEFIAEGOF; // 0x0
		// static const ::System::String* KDODNCFEJFD; // 0x0
		// static const ::System::String* NMHICHPNEHN; // 0x0
		// static const ::System::String* LGBOBLDBAHK; // 0x0
		// static const ::System::String* AFGIIIJDPKJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_CTOR_OFFSET))(this);
		}

		::System::Void Initialize(::HMLFAPGFDLB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HMLFAPGFDLB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_INITIALIZE_OFFSET))(this, a1);
		}

		::System::Void KANMCJHEFJJ(::HMLFAPGFDLB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HMLFAPGFDLB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_KANMCJHEFJJ_OFFSET))(this, a1);
		}

		::System::Void SetPositionY(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_SETPOSITIONY_OFFSET))(this, a1);
		}

		::System::Void FadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_FADEIN_OFFSET))(this);
		}

		::System::Void FadeOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_FADEOUT_OFFSET))(this);
		}

		::System::Void Show()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_SHOW_OFFSET))(this);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_HIDE_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_AWAKE_OFFSET))(this);
		}

		::System::Void EJEILFGHCNG(::HMLFAPGFDLB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HMLFAPGFDLB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_EJEILFGHCNG_OFFSET))(this, a1);
		}

		::System::Single get_Height()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_GET_HEIGHT_OFFSET))(this);
		}

		::System::Single get_LifeTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_GET_LIFETIME_OFFSET))(this);
		}

		::System::Void set_LifeTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_SET_LIFETIME_OFFSET))(this, a1);
		}

		::System::UInt32 get_PositionIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_GET_POSITIONINDEX_OFFSET))(this);
		}

		::System::Void set_PositionIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_SET_POSITIONINDEX_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityFeverTimeToastHintItem_Status get_CurStatus()
		{
			return ((::RPG::Client::ActivityFeverTimeToastHintItem_Status(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_GET_CURSTATUS_OFFSET))(this);
		}

		::System::Void set_CurStatus(::RPG::Client::ActivityFeverTimeToastHintItem_Status a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityFeverTimeToastHintItem_Status))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_SET_CURSTATUS_OFFSET))(this, a1);
		}

		::System::Single get_TimePoint()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_GET_TIMEPOINT_OFFSET))(this);
		}

		::System::Void set_TimePoint(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_SET_TIMEPOINT_OFFSET))(this, a1);
		}

		::System::Boolean get_Animating()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_GET_ANIMATING_OFFSET))(this);
		}

		::System::Void set_Animating(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_SET_ANIMATING_OFFSET))(this, a1);
		}

	};
}
