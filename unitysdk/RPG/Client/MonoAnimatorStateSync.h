#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/RPG/Client/MonoAnimatorStateSync_AnimatorStateSync.h"
namespace RPG::Client { class RootMotionHandler; }
namespace System { class Object; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_MONOANIMATORSTATESYNC_AEPKOLKKPAI_OFFSET UNITYSDK_OFFSET(0xD72FBB0)
#define RPG_CLIENT_MONOANIMATORSTATESYNC_AWAKE_OFFSET UNITYSDK_OFFSET(0xD72F910)
#define RPG_CLIENT_MONOANIMATORSTATESYNC_BHCCNFIJMHM_OFFSET UNITYSDK_OFFSET(0xD72FC70)
#define RPG_CLIENT_MONOANIMATORSTATESYNC_CIFDOCJNMHK_OFFSET UNITYSDK_OFFSET(0xD72FC60)
#define RPG_CLIENT_MONOANIMATORSTATESYNC_CTOR_OFFSET UNITYSDK_OFFSET(0xD72FED0)
#define RPG_CLIENT_MONOANIMATORSTATESYNC_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xD72FA70)
#define RPG_CLIENT_MONOANIMATORSTATESYNC_NJIMMONGKLE_OFFSET UNITYSDK_OFFSET(0xD72FC80)
#define RPG_CLIENT_MONOANIMATORSTATESYNC_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xD72FB50)
#define RPG_CLIENT_MONOANIMATORSTATESYNC_ONENABLE_OFFSET UNITYSDK_OFFSET(0xD72FAE0)

namespace RPG::Client
{
	class MonoAnimatorStateSync : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::RootMotionHandler* source; // 0x18
		::Il2CppArray<::System::Object*>* stateSyncs; // 0x20
		::UnityEngine::Animator* SyncAnimator; // 0x28
		::System::Int32 EEJHLPPFAII; // 0x30
		::System::Boolean FNFBEKPGHLF; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATORSTATESYNC_CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATORSTATESYNC_AWAKE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATORSTATESYNC_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATORSTATESYNC_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATORSTATESYNC_ONDISABLE_OFFSET))(this);
		}

		::System::Boolean AEPKOLKKPAI(::System::Int32 a1, ::RPG::Client::MonoAnimatorStateSync_AnimatorStateSync a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::RPG::Client::MonoAnimatorStateSync_AnimatorStateSync))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATORSTATESYNC_AEPKOLKKPAI_OFFSET))(this, a1, a2);
		}

		::System::Int32 CIFDOCJNMHK()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATORSTATESYNC_CIFDOCJNMHK_OFFSET))(this);
		}

		::System::Boolean BHCCNFIJMHM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATORSTATESYNC_BHCCNFIJMHM_OFFSET))(this);
		}

		::System::Void NJIMMONGKLE(::UnityEngine::Animator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATORSTATESYNC_NJIMMONGKLE_OFFSET))(this, a1);
		}

	};
}
