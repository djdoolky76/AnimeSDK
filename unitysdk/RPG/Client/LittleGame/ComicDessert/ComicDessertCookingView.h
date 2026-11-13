#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/ComicDessertView.h"
namespace RPG::Client::Feedback { class TaiyakiCookedFeedback; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCOOKINGVIEW_APPLYDRAGPROXYTILT_OFFSET UNITYSDK_OFFSET(0x1E142620)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCOOKINGVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1427A0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCOOKINGVIEW_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x1E142450)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCOOKINGVIEW_DIFDIAPHJAP_OFFSET UNITYSDK_OFFSET(0x1E1422F0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCOOKINGVIEW_JIEHJHJHPPL_OFFSET UNITYSDK_OFFSET(0x1E142550)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCOOKINGVIEW_PLAYCLICKBOUNCE_OFFSET UNITYSDK_OFFSET(0x1E142220)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCOOKINGVIEW_PLAYCOOKEDFLOP_OFFSET UNITYSDK_OFFSET(0x1E142380)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCOOKINGVIEW_SETDONENESS_OFFSET UNITYSDK_OFFSET(0x1E142490)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCOOKINGVIEW_SETMOTIONTIME_OFFSET UNITYSDK_OFFSET(0x1E142030)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCOOKINGVIEW_SETREADYEFFECT_OFFSET UNITYSDK_OFFSET(0x1E1420D0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCOOKINGVIEW_SPAWNED_OFFSET UNITYSDK_OFFSET(0x1E141F40)

namespace RPG::Client::LittleGame::ComicDessert
{
	inline static constexpr unsigned int ComicDessertCookingView_TypeDefinitionIndex = 80081;

	class ComicDessertCookingView : public ::RPG::Client::LittleGame::ComicDessert::ComicDessertView
	{
	public:
		::UnityEngine::Animator* _Animator; // 0x58
		::UnityEngine::GameObject* _ReadyEffect; // 0x60
		::RPG::Client::Feedback::TaiyakiCookedFeedback* _CookedFeedback; // 0x68
		::System::Single _DragPitchX; // 0x70
		::System::Byte _padding0[0x4];
		::UnityEngine::AnimationCurve* _DonenessCurve; // 0x78
		::System::Int32 GMPFGCMAKID; // 0x80
		::System::Boolean PDEBJNHNIHC; // 0x84
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCOOKINGVIEW_CTOR_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCOOKINGVIEW_SPAWNED_OFFSET))(this);
		}

		::System::Void PlayClickBounce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCOOKINGVIEW_PLAYCLICKBOUNCE_OFFSET))(this);
		}

		::System::Void PlayCookedFlop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCOOKINGVIEW_PLAYCOOKEDFLOP_OFFSET))(this);
		}

		::RPG::Client::Feedback::TaiyakiCookedFeedback* DIFDIAPHJAP()
		{
			return ((::RPG::Client::Feedback::TaiyakiCookedFeedback*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCOOKINGVIEW_DIFDIAPHJAP_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCOOKINGVIEW_DESPAWNED_OFFSET))(this);
		}

		::System::Void SetMotionTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCOOKINGVIEW_SETMOTIONTIME_OFFSET))(this, a1);
		}

		::System::Void SetDoneness(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCOOKINGVIEW_SETDONENESS_OFFSET))(this, a1);
		}

		::System::Single JIEHJHJHPPL(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCOOKINGVIEW_JIEHJHJHPPL_OFFSET))(this, a1);
		}

		::System::Void SetReadyEffect(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCOOKINGVIEW_SETREADYEFFECT_OFFSET))(this, a1);
		}

		::System::Void ApplyDragProxyTilt(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCOOKINGVIEW_APPLYDRAGPROXYTILT_OFFSET))(this, a1);
		}

	};
}
