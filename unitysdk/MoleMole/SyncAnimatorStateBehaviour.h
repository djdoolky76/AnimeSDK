#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedStateMachineBehaviour.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

namespace MoleMole { class SyncAnimatorStateBehaviourTarget; }
namespace System { class Object; }
namespace UnityEngine { class Animator; }

#define MOLEMOLE_SYNCANIMATORSTATEBEHAVIOUR_GET_SYNCTOANIMATORS_OFFSET UNITYSDK_OFFSET(0x19CF1980)
#define MOLEMOLE_SYNCANIMATORSTATEBEHAVIOUR_GMBDGCBMFKK_OFFSET UNITYSDK_OFFSET(0x19CF2590)
#define MOLEMOLE_SYNCANIMATORSTATEBEHAVIOUR_IPLMOHBNKLI_OFFSET UNITYSDK_OFFSET(0x19CF2350)
#define MOLEMOLE_SYNCANIMATORSTATEBEHAVIOUR_JMDEKPONKMF_OFFSET UNITYSDK_OFFSET(0x19CF1D00)
#define MOLEMOLE_SYNCANIMATORSTATEBEHAVIOUR_MOHLKAAELGB_OFFSET UNITYSDK_OFFSET(0x19CF22B0)
#define MOLEMOLE_SYNCANIMATORSTATEBEHAVIOUR_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0x19CF1B00)
#define MOLEMOLE_SYNCANIMATORSTATEBEHAVIOUR_ONSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0x19CF1F50)
#define MOLEMOLE_SYNCANIMATORSTATEBEHAVIOUR_POOMDENNKIK_OFFSET UNITYSDK_OFFSET(0x19CF25A0)
#define MOLEMOLE_SYNCANIMATORSTATEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x19CF2530)

namespace MoleMole
{
	inline static constexpr unsigned int SyncAnimatorStateBehaviour_TypeDefinitionIndex = 50053;

	class SyncAnimatorStateBehaviour : public ::Sirenix::OdinInspector::SerializedStateMachineBehaviour
	{
	public:
		::System::Boolean Initialized; // 0x58
		::System::Byte _padding0[0x7];
		::MoleMole::SyncAnimatorStateBehaviourTarget* SyncAnimatorTarget; // 0x60
		::Il2CppArray<::System::Object*>* SyncParamStates; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SYNCANIMATORSTATEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Animator*>* get_SyncToAnimators()
		{
			return ((::Il2CppArray<::UnityEngine::Animator*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SYNCANIMATORSTATEBEHAVIOUR_GET_SYNCTOANIMATORS_OFFSET))(this);
		}

		::System::Void OnStateEnter(::UnityEngine::Animator* ICAAMDMMDDJ, ::UnityEngine::AnimatorStateInfo LGAABHLIHKE, ::System::Int32 EEGBEFGJJBM)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SYNCANIMATORSTATEBEHAVIOUR_ONSTATEENTER_OFFSET))(this, ICAAMDMMDDJ, LGAABHLIHKE, EEGBEFGJJBM);
		}

		::System::Void OnStateUpdate(::UnityEngine::Animator* ICAAMDMMDDJ, ::UnityEngine::AnimatorStateInfo LGAABHLIHKE, ::System::Int32 EEGBEFGJJBM)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SYNCANIMATORSTATEBEHAVIOUR_ONSTATEUPDATE_OFFSET))(this, ICAAMDMMDDJ, LGAABHLIHKE, EEGBEFGJJBM);
		}

		::System::Void GMBDGCBMFKK(::UnityEngine::Animator* MIALFKCCCPI, ::UnityEngine::AnimatorStateInfo KMGKAIDEIBA, ::System::Int32 FDHMCIFPNCK)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SYNCANIMATORSTATEBEHAVIOUR_GMBDGCBMFKK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
		}

		::System::Boolean MOHLKAAELGB(::System::Int32 NKEGAAJBAHA, ::Il2CppArray<::System::Object*>*& DEHKDNOBINF)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Object*>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_SYNCANIMATORSTATEBEHAVIOUR_MOHLKAAELGB_OFFSET))(this, NKEGAAJBAHA, DEHKDNOBINF);
		}

		::System::Void POOMDENNKIK(::UnityEngine::Animator* MIALFKCCCPI, ::UnityEngine::AnimatorStateInfo KMGKAIDEIBA, ::System::Int32 FDHMCIFPNCK)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SYNCANIMATORSTATEBEHAVIOUR_POOMDENNKIK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
		}

		::System::Void IPLMOHBNKLI(::UnityEngine::Animator* KHGFAKJKDGG, ::UnityEngine::Animator* HODAIDNDKHD, ::Il2CppArray<::System::Object*>* DEHKDNOBINF)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::Animator*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SYNCANIMATORSTATEBEHAVIOUR_IPLMOHBNKLI_OFFSET))(this, KHGFAKJKDGG, HODAIDNDKHD, DEHKDNOBINF);
		}

		::System::Void JMDEKPONKMF(::UnityEngine::Animator* ICAAMDMMDDJ)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + MOLEMOLE_SYNCANIMATORSTATEBEHAVIOUR_JMDEKPONKMF_OFFSET))(this, ICAAMDMMDDJ);
		}
	};
}
