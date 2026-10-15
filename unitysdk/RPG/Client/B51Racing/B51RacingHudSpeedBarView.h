#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::Client { class UILineRenderer; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine::UI { class Slider; }

#define RPG_CLIENT_B51RACING_B51RACINGHUDSPEEDBARVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0xC7ACCE0)
#define RPG_CLIENT_B51RACING_B51RACINGHUDSPEEDBARVIEW_EDPJFHGEGLO_OFFSET UNITYSDK_OFFSET(0xC7ACC90)
#define RPG_CLIENT_B51RACING_B51RACINGHUDSPEEDBARVIEW_EHMHPMLNKBI_OFFSET UNITYSDK_OFFSET(0xC7AC940)
#define RPG_CLIENT_B51RACING_B51RACINGHUDSPEEDBARVIEW_GET_GEARTRANSITIONDURATION_OFFSET UNITYSDK_OFFSET(0xC7A5C70)
#define RPG_CLIENT_B51RACING_B51RACINGHUDSPEEDBARVIEW_KPGBMOACEGB_OFFSET UNITYSDK_OFFSET(0xC7AC8A0)
#define RPG_CLIENT_B51RACING_B51RACINGHUDSPEEDBARVIEW_OLMLJOICEFL_OFFSET UNITYSDK_OFFSET(0xC7AC830)
#define RPG_CLIENT_B51RACING_B51RACINGHUDSPEEDBARVIEW_ONENABLE_OFFSET UNITYSDK_OFFSET(0xC7ACC50)
#define RPG_CLIENT_B51RACING_B51RACINGHUDSPEEDBARVIEW_SETSPEEDBARPROGRESS_OFFSET UNITYSDK_OFFSET(0xC7A5300)

namespace RPG::Client::B51Racing
{
	class B51RacingHudSpeedBarView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::UI::Slider* _slider; // 0x18
		::RPG::Client::UILineRenderer* _lineRenderer; // 0x20
		::UnityEngine::AnimationCurve* _Curve; // 0x28
		::System::Single _gearTransitionDuration; // 0x30
		::System::Single _previewProgress; // 0x34
		::System::String* KPGJFKPALOL; // 0x38
		::System::Boolean HEKAAFPGJIL; // 0x40
		// static const ::System::Object NABKLKBJGMN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGHUDSPEEDBARVIEW_CTOR_OFFSET))(this);
		}

		::System::Void SetSpeedBarProgress(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGHUDSPEEDBARVIEW_SETSPEEDBARPROGRESS_OFFSET))(this, a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGHUDSPEEDBARVIEW_ONENABLE_OFFSET))(this);
		}

		::System::Void KPGBMOACEGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGHUDSPEEDBARVIEW_KPGBMOACEGB_OFFSET))(this);
		}

		::System::Void EHMHPMLNKBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGHUDSPEEDBARVIEW_EHMHPMLNKBI_OFFSET))(this);
		}

		::System::Void OLMLJOICEFL(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGHUDSPEEDBARVIEW_OLMLJOICEFL_OFFSET))(this, a1);
		}

		::System::Void EDPJFHGEGLO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGHUDSPEEDBARVIEW_EDPJFHGEGLO_OFFSET))(this);
		}

		::System::Single get_GearTransitionDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGHUDSPEEDBARVIEW_GET_GEARTRANSITIONDURATION_OFFSET))(this);
		}

	};
}
