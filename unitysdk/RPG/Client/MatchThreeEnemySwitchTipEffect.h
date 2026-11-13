#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
namespace RPG::Client { class MatchThreeBoard; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MATCHTHREEENEMYSWITCHTIPEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8C6880)
#define RPG_CLIENT_MATCHTHREEENEMYSWITCHTIPEFFECT_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x1D8C6610)
#define RPG_CLIENT_MATCHTHREEENEMYSWITCHTIPEFFECT_EMCBHIAHJOH_OFFSET UNITYSDK_OFFSET(0x1D8C6650)
#define RPG_CLIENT_MATCHTHREEENEMYSWITCHTIPEFFECT_FNMGNOBEOFP_OFFSET UNITYSDK_OFFSET(0x1D8C6590)
#define RPG_CLIENT_MATCHTHREEENEMYSWITCHTIPEFFECT_ONCREATE_OFFSET UNITYSDK_OFFSET(0x1D8C6710)
#define RPG_CLIENT_MATCHTHREEENEMYSWITCHTIPEFFECT_PLAY_OFFSET UNITYSDK_OFFSET(0x1D8BB350)
#define RPG_CLIENT_MATCHTHREEENEMYSWITCHTIPEFFECT_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x1D8BB230)
#define RPG_CLIENT_MATCHTHREEENEMYSWITCHTIPEFFECT_SPAWNED_OFFSET UNITYSDK_OFFSET(0x1D8C64F0)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeEnemySwitchTipEffect_TypeDefinitionIndex = 67862;

	class MatchThreeEnemySwitchTipEffect : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::MatchThreeBoard* MIPPNCGOJNM; // 0x18
		::UnityEngine::Animation* PMOJILOJEPE; // 0x20
		::UnityEngine::Transform* BILCCJLCGKN; // 0x28
		// static const ::System::String* BDCLGLGCCIF; // 0x0
		// static const ::System::String* DNDKBBEACHG; // 0x0
		// static const ::System::String* IJEAHEBAMPH; // 0x0
		// static const ::System::String* ECINKALGKNN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEENEMYSWITCHTIPEFFECT_CTOR_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEENEMYSWITCHTIPEFFECT_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEENEMYSWITCHTIPEFFECT_DESPAWNED_OFFSET))(this);
		}

		::System::Void SetPosition(::UnityEngine::Vector2Int a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEENEMYSWITCHTIPEFFECT_SETPOSITION_OFFSET))(this, a1);
		}

		::System::Void Play(::UnityEngine::Vector2Int a1, ::System::Action* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEENEMYSWITCHTIPEFFECT_PLAY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnCreate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEENEMYSWITCHTIPEFFECT_ONCREATE_OFFSET))(this, a1);
		}

		::System::Void FNMGNOBEOFP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEENEMYSWITCHTIPEFFECT_FNMGNOBEOFP_OFFSET))(this);
		}

		::System::String* EMCBHIAHJOH(::UnityEngine::Vector2Int a1)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEENEMYSWITCHTIPEFFECT_EMCBHIAHJOH_OFFSET))(this, a1);
		}

	};
}
