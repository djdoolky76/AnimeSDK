#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/B51Racing/B51RacingHUDProgressBarView_RotationAxis.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class SmoothMask; }

#define RPG_CLIENT_B51RACING_B51RACINGHUDPROGRESSBARVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0xC7AC770)
#define RPG_CLIENT_B51RACING_B51RACINGHUDPROGRESSBARVIEW_IHFBDJPHCHE_OFFSET UNITYSDK_OFFSET(0xC7AC190)
#define RPG_CLIENT_B51RACING_B51RACINGHUDPROGRESSBARVIEW_OCGLOFNKBBD_OFFSET UNITYSDK_OFFSET(0xC7AC490)
#define RPG_CLIENT_B51RACING_B51RACINGHUDPROGRESSBARVIEW_OLMLJOICEFL_OFFSET UNITYSDK_OFFSET(0xC7AC620)
#define RPG_CLIENT_B51RACING_B51RACINGHUDPROGRESSBARVIEW_PCPJBFMLKEP_OFFSET UNITYSDK_OFFSET(0xC7AC690)
#define RPG_CLIENT_B51RACING_B51RACINGHUDPROGRESSBARVIEW_SETPROGRESS_OFFSET UNITYSDK_OFFSET(0xC7AC0E0)

namespace RPG::Client::B51Racing
{
	class B51RacingHUDProgressBarView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* _Rotator; // 0x18
		::UnityEngine::Vector2 _RotationRange; // 0x20
		::RPG::Client::B51Racing::B51RacingHUDProgressBarView_RotationAxis _RotationAxis; // 0x28
		::System::Byte _padding0[0x4];
		::UnityEngine::AnimationCurve* _Curve; // 0x30
		::UnityEngine::Vector2 _FillRange; // 0x38
		::UnityEngine::UI::SmoothMask* _SmoothMask; // 0x40
		::UnityEngine::UI::Image* _Image; // 0x48
		::System::Single _Progress; // 0x50
		::System::Byte _padding1[0x4];
		::System::String* LIDGNAHIDBI; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGHUDPROGRESSBARVIEW_CTOR_OFFSET))(this);
		}

		::System::Void SetProgress(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGHUDPROGRESSBARVIEW_SETPROGRESS_OFFSET))(this, a1);
		}

		::System::Void IHFBDJPHCHE(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGHUDPROGRESSBARVIEW_IHFBDJPHCHE_OFFSET))(this, a1);
		}

		::System::Void OCGLOFNKBBD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGHUDPROGRESSBARVIEW_OCGLOFNKBBD_OFFSET))(this, a1);
		}

		::System::Void PCPJBFMLKEP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGHUDPROGRESSBARVIEW_PCPJBFMLKEP_OFFSET))(this);
		}

		::System::Void OLMLJOICEFL(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGHUDPROGRESSBARVIEW_OLMLJOICEFL_OFFSET))(this, a1);
		}

	};
}
