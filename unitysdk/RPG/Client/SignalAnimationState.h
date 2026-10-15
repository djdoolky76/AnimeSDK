#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class SignalAnimationState; }
namespace RPG::Client { class SignalAnimationStateConnection; }
namespace RPG::Client { class SignalAnimationStateMachine; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationClip; }

#define RPG_CLIENT_SIGNALANIMATIONSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0xE0BF380)
#define RPG_CLIENT_SIGNALANIMATIONSTATE_DLGAJPNGFIH_OFFSET UNITYSDK_OFFSET(0xE0BEB20)
#define RPG_CLIENT_SIGNALANIMATIONSTATE_DPDJNAHGDPO_OFFSET UNITYSDK_OFFSET(0xE0BEC80)
#define RPG_CLIENT_SIGNALANIMATIONSTATE_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0xE0BF310)
#define RPG_CLIENT_SIGNALANIMATIONSTATE_JDAGFHEPMHF_OFFSET UNITYSDK_OFFSET(0xE0BF290)
#define RPG_CLIENT_SIGNALANIMATIONSTATE_NAHDIOLPDNN_OFFSET UNITYSDK_OFFSET(0xE0BECD0)
#define RPG_CLIENT_SIGNALANIMATIONSTATE_OKFKLBDNFME_OFFSET UNITYSDK_OFFSET(0xE0BF250)
#define RPG_CLIENT_SIGNALANIMATIONSTATE_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xE0BEE60)

namespace RPG::Client
{
	inline static constexpr unsigned int SignalAnimationState_TypeDefinitionIndex = 70978;

	class SignalAnimationState : public ::System::Object
	{
	public:
		::System::String* StateName; // 0x10
		::UnityEngine::AnimationClip* AnimationClip; // 0x18
		::System::Boolean IsLooping; // 0x20
		::System::Byte _padding0[0x3];
		::System::Single PlaybackSpeed; // 0x24
		::System::Collections::Generic::List_1<::RPG::Client::SignalAnimationStateConnection*>* StateConnections; // 0x28
		::RPG::Client::SignalAnimationStateMachine* _controller; // 0x30
		::System::Single _stateTime; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALANIMATIONSTATE_CTOR_OFFSET))(this);
		}

		::System::Single DLGAJPNGFIH()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALANIMATIONSTATE_DLGAJPNGFIH_OFFSET))(this);
		}

		::System::Void DPDJNAHGDPO(::RPG::Client::SignalAnimationStateMachine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SignalAnimationStateMachine*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALANIMATIONSTATE_DPDJNAHGDPO_OFFSET))(this, a1);
		}

		::System::Void NAHDIOLPDNN(::UnityEngine::Animation* a1, ::RPG::Client::SignalAnimationState* a2, ::System::Single a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animation*, ::RPG::Client::SignalAnimationState*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALANIMATIONSTATE_NAHDIOLPDNN_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1, ::System::Single a2, ::RPG::Client::SignalAnimationStateMachine* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::RPG::Client::SignalAnimationStateMachine*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALANIMATIONSTATE_PAGKOAEOLKA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OKFKLBDNFME()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALANIMATIONSTATE_OKFKLBDNFME_OFFSET))(this);
		}

		::System::Void JDAGFHEPMHF(::UnityEngine::Animation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALANIMATIONSTATE_JDAGFHEPMHF_OFFSET))(this, a1);
		}

		::System::Void HFKFNFKIEON(::UnityEngine::Animation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALANIMATIONSTATE_HFKFNFKIEON_OFFSET))(this, a1);
		}

	};
}
