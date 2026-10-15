#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/StateMachineBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_STATECOMMONIDLETIMER_AKBCBGHALJK_OFFSET UNITYSDK_OFFSET(0xE12B6E0)
#define RPG_CLIENT_STATECOMMONIDLETIMER_CTOR_OFFSET UNITYSDK_OFFSET(0xE12BE60)
#define RPG_CLIENT_STATECOMMONIDLETIMER_KFCHIJHFLDN_OFFSET UNITYSDK_OFFSET(0xE12BB50)
#define RPG_CLIENT_STATECOMMONIDLETIMER_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0xE12BA20)
#define RPG_CLIENT_STATECOMMONIDLETIMER_ONSTATEEXIT_OFFSET UNITYSDK_OFFSET(0xE12BBB0)
#define RPG_CLIENT_STATECOMMONIDLETIMER_ONSTATEIK_OFFSET UNITYSDK_OFFSET(0xE12BDF0)
#define RPG_CLIENT_STATECOMMONIDLETIMER_ONSTATEMOVE_OFFSET UNITYSDK_OFFSET(0xE12BD80)
#define RPG_CLIENT_STATECOMMONIDLETIMER_ONSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0xE12BC70)
#define RPG_CLIENT_STATECOMMONIDLETIMER_PLFEIOCNDAN_OFFSET UNITYSDK_OFFSET(0xE12B8A0)

namespace RPG::Client
{
	inline static constexpr unsigned int StateCommonIdleTimer_TypeDefinitionIndex = 68824;

	class StateCommonIdleTimer : public ::UnityEngine::StateMachineBehaviour
	{
	public:
		::System::Single CurrentTime; // 0x18
		::UnityEngine::Vector2 TimerRandomRange; // 0x1C
		::System::Boolean UpdateEnable; // 0x24
		::System::Byte _padding0[0x3];
		::System::Collections::Generic::List_1<::System::Int32>* IdleRandomList; // 0x28
		::System::Collections::Generic::List_1<::System::Int32>* RuntimeIdleRandomList; // 0x30
		::System::Collections::Generic::HashSet_1<::System::Int32>* ParamHashSet; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATECOMMONIDLETIMER_CTOR_OFFSET))(this);
		}

		::System::Void AKBCBGHALJK(::UnityEngine::Animator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATECOMMONIDLETIMER_AKBCBGHALJK_OFFSET))(this, a1);
		}

		::System::Void OnStateEnter(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATECOMMONIDLETIMER_ONSTATEENTER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateExit(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATECOMMONIDLETIMER_ONSTATEEXIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateUpdate(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATECOMMONIDLETIMER_ONSTATEUPDATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateMove(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATECOMMONIDLETIMER_ONSTATEMOVE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateIK(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATECOMMONIDLETIMER_ONSTATEIK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KFCHIJHFLDN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATECOMMONIDLETIMER_KFCHIJHFLDN_OFFSET))(this);
		}

		::System::Boolean PLFEIOCNDAN(::UnityEngine::Animator* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animator*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATECOMMONIDLETIMER_PLFEIOCNDAN_OFFSET))(this, a1, a2);
		}

	};
}
