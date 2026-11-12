#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_TRANSPORTFLIGHTSETTINGS_CTOR_OFFSET UNITYSDK_OFFSET(0xDE92770)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_TRANSPORTFLIGHTSETTINGS_GET_BAKEDPOSITIONCURVE_OFFSET UNITYSDK_OFFSET(0xDE91EB0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_TRANSPORTFLIGHTSETTINGS_KFCHBNAJAJI_OFFSET UNITYSDK_OFFSET(0xDE92720)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_TRANSPORTFLIGHTSETTINGS_ONENABLE_OFFSET UNITYSDK_OFFSET(0xDE91EC0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_TRANSPORTFLIGHTSETTINGS_PNABFLODKLA_OFFSET UNITYSDK_OFFSET(0xDE91F20)

namespace RPG::Client::LittleGame::ComicDessert
{
	inline static constexpr unsigned int TransportFlightSettings_TypeDefinitionIndex = 79747;

	class TransportFlightSettings : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Single DepartureAngle; // 0x18
		::System::Single DepartureForce; // 0x1C
		::System::Single ArrivalAngle; // 0x20
		::System::Single ArrivalForce; // 0x24
		::System::Single Duration; // 0x28
		::System::Byte _padding0[0x4];
		::UnityEngine::AnimationCurve* SpeedCurve; // 0x30
		::UnityEngine::AnimationCurve* RotationCurve; // 0x38
		::UnityEngine::AnimationCurve* _BakedPositionCurve; // 0x40
		// static const ::System::Object _BAKE_SEGMENTS; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_TRANSPORTFLIGHTSETTINGS_CTOR_OFFSET))(this);
		}

		::UnityEngine::AnimationCurve* get_BakedPositionCurve()
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_TRANSPORTFLIGHTSETTINGS_GET_BAKEDPOSITIONCURVE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_TRANSPORTFLIGHTSETTINGS_ONENABLE_OFFSET))(this);
		}

		::System::Void KFCHBNAJAJI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_TRANSPORTFLIGHTSETTINGS_KFCHBNAJAJI_OFFSET))(this);
		}

		::System::Void PNABFLODKLA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_TRANSPORTFLIGHTSETTINGS_PNABFLODKLA_OFFSET))(this);
		}

	};
}
