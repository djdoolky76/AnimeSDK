#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/StateMachineBehaviour.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
namespace RPG::Client { class MonoAnimationTrigger; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_STATETRANSITIONAUDIO_CCLJAIADDGA_OFFSET UNITYSDK_OFFSET(0xE133B80)
#define RPG_CLIENT_STATETRANSITIONAUDIO_CJCHJIHIMDH_OFFSET UNITYSDK_OFFSET(0xE134300)
#define RPG_CLIENT_STATETRANSITIONAUDIO_CTOR_OFFSET UNITYSDK_OFFSET(0xE134450)
#define RPG_CLIENT_STATETRANSITIONAUDIO_DBHKLIJGFHG_OFFSET UNITYSDK_OFFSET(0xE133FC0)
#define RPG_CLIENT_STATETRANSITIONAUDIO_FGHBEOLMDDC_OFFSET UNITYSDK_OFFSET(0xE134230)
#define RPG_CLIENT_STATETRANSITIONAUDIO_HGOJNFKDIMA_OFFSET UNITYSDK_OFFSET(0xE133DE0)
#define RPG_CLIENT_STATETRANSITIONAUDIO_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0xE133A10)
#define RPG_CLIENT_STATETRANSITIONAUDIO_ONSTATEEXIT_OFFSET UNITYSDK_OFFSET(0xE133CD0)
#define RPG_CLIENT_STATETRANSITIONAUDIO_ONSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0xE133EB0)
#define RPG_CLIENT_STATETRANSITIONAUDIO_PGDBOEHKJAI_OFFSET UNITYSDK_OFFSET(0xE133F60)

namespace RPG::Client
{
	class StateTransitionAudio : public ::UnityEngine::StateMachineBehaviour
	{
	public:
		::Il2CppArray<::System::Object*>* transferInfos; // 0x18
		::System::Boolean _isInExitTransfer; // 0x20
		::System::Boolean _transferBeginTrigger; // 0x21
		::System::Boolean _transfreEndTrigger; // 0x22
		::System::Byte _padding0[0x5];
		::RPG::Client::MonoAnimationTrigger* _triggerComp; // 0x28
		::UnityEngine::Animator* _animator; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATETRANSITIONAUDIO_CTOR_OFFSET))(this);
		}

		::System::Void OnStateEnter(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATETRANSITIONAUDIO_ONSTATEENTER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateExit(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATETRANSITIONAUDIO_ONSTATEEXIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateUpdate(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATETRANSITIONAUDIO_ONSTATEUPDATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CCLJAIADDGA(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATETRANSITIONAUDIO_CCLJAIADDGA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PGDBOEHKJAI(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATETRANSITIONAUDIO_PGDBOEHKJAI_OFFSET))(this, a1);
		}

		::System::Void FGHBEOLMDDC(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATETRANSITIONAUDIO_FGHBEOLMDDC_OFFSET))(this, a1);
		}

		::System::Void DBHKLIJGFHG(::System::Boolean a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATETRANSITIONAUDIO_DBHKLIJGFHG_OFFSET))(this, a1, a2);
		}

		::System::Void HGOJNFKDIMA(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATETRANSITIONAUDIO_HGOJNFKDIMA_OFFSET))(this, a1);
		}

		::System::Void CJCHJIHIMDH(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATETRANSITIONAUDIO_CJCHJIHIMDH_OFFSET))(this, a1);
		}

	};
}
