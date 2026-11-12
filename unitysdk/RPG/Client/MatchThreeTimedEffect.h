#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
namespace RPG::Client { class MatchThreeBoard; }
namespace System { class Action; }
namespace System { class Object; }

#define RPG_CLIENT_MATCHTHREETIMEDEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0xE002130)
#define RPG_CLIENT_MATCHTHREETIMEDEFFECT_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xE001AF0)
#define RPG_CLIENT_MATCHTHREETIMEDEFFECT_GOGBDOGNGHJ_OFFSET UNITYSDK_OFFSET(0xE001FA0)
#define RPG_CLIENT_MATCHTHREETIMEDEFFECT_KAHKPGDMBMM_OFFSET UNITYSDK_OFFSET(0xE002070)
#define RPG_CLIENT_MATCHTHREETIMEDEFFECT_ONCREATE_OFFSET UNITYSDK_OFFSET(0xE001EE0)
#define RPG_CLIENT_MATCHTHREETIMEDEFFECT_PLAY_OFFSET UNITYSDK_OFFSET(0xE001DE0)
#define RPG_CLIENT_MATCHTHREETIMEDEFFECT_SETHORIZONTAL_OFFSET UNITYSDK_OFFSET(0xE001CA0)
#define RPG_CLIENT_MATCHTHREETIMEDEFFECT_SETPOSITION_1_OFFSET UNITYSDK_OFFSET(0xE001BD0)
#define RPG_CLIENT_MATCHTHREETIMEDEFFECT_SETPOSITION_OFFSET UNITYSDK_OFFSET(0xE001B30)
#define RPG_CLIENT_MATCHTHREETIMEDEFFECT_SETVERTICAL_OFFSET UNITYSDK_OFFSET(0xE001D40)
#define RPG_CLIENT_MATCHTHREETIMEDEFFECT_SPAWNED_OFFSET UNITYSDK_OFFSET(0xE001AB0)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeTimedEffect_TypeDefinitionIndex = 67898;

	class MatchThreeTimedEffect : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::MatchThreeBoard* MIPPNCGOJNM; // 0x18
		::System::Single DDPJNLAFNAN; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREETIMEDEFFECT_CTOR_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREETIMEDEFFECT_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREETIMEDEFFECT_DESPAWNED_OFFSET))(this);
		}

		::System::Void SetPosition(::UnityEngine::Vector2Int a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREETIMEDEFFECT_SETPOSITION_OFFSET))(this, a1);
		}

		::System::Void SetPosition_1(::UnityEngine::Vector2Int a1, ::UnityEngine::Vector2Int a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREETIMEDEFFECT_SETPOSITION_1_OFFSET))(this, a1, a2);
		}

		::System::Void SetHorizontal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREETIMEDEFFECT_SETHORIZONTAL_OFFSET))(this);
		}

		::System::Void SetVertical()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREETIMEDEFFECT_SETVERTICAL_OFFSET))(this);
		}

		::System::Void Play(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREETIMEDEFFECT_PLAY_OFFSET))(this, a1);
		}

		::System::Void OnCreate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREETIMEDEFFECT_ONCREATE_OFFSET))(this, a1);
		}

		::System::Void KAHKPGDMBMM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREETIMEDEFFECT_KAHKPGDMBMM_OFFSET))(this);
		}

		::System::Void GOGBDOGNGHJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREETIMEDEFFECT_GOGBDOGNGHJ_OFFSET))(this);
		}

	};
}
