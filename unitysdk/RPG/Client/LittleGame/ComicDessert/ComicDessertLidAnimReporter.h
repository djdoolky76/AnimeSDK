#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/LidAnimEvent.h"
#include "unitysdk/UnityEngine/StateMachineBehaviour.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTLIDANIMREPORTER_CTOR_OFFSET UNITYSDK_OFFSET(0xDE898F0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTLIDANIMREPORTER_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0xDE897E0)

namespace RPG::Client::LittleGame::ComicDessert
{
	inline static constexpr unsigned int ComicDessertLidAnimReporter_TypeDefinitionIndex = 80090;

	class ComicDessertLidAnimReporter : public ::UnityEngine::StateMachineBehaviour
	{
	public:
		::RPG::Client::LittleGame::ComicDessert::LidAnimEvent _Event; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTLIDANIMREPORTER_CTOR_OFFSET))(this);
		}

		::System::Void OnStateEnter(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTLIDANIMREPORTER_ONSTATEENTER_OFFSET))(this, a1, a2, a3);
		}

	};
}
