#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/RPG/Client/MonoEffectPluginSyncTargetNormalizedTime_SyncAnimatorInfo.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
namespace RPG::Client { class MonoEffectPluginSyncTargetNormalizedTime; }
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class MonoBehaviour; }

#define CIAJLILJIAM_CTOR_OFFSET UNITYSDK_OFFSET(0xD8CE330)
#define CIAJLILJIAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD8CD280)
#define CIAJLILJIAM_DLPIEHDMKED_OFFSET UNITYSDK_OFFSET(0xD8CE250)
#define CIAJLILJIAM_EKHOGLFCCBI_OFFSET UNITYSDK_OFFSET(0xD8CD510)
#define CIAJLILJIAM_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0xD8CDEF0)
#define CIAJLILJIAM_IFEMMNPDLCM_OFFSET UNITYSDK_OFFSET(0xD8CDF40)
#define CIAJLILJIAM_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xD8CD560)
#define CIAJLILJIAM_KLIOBGEPFEH_OFFSET UNITYSDK_OFFSET(0xD8CD2F0)
#define CIAJLILJIAM_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xD8CD210)
#define CIAJLILJIAM_LODGFIDABBO_OFFSET UNITYSDK_OFFSET(0xD8CD350)
#define CIAJLILJIAM_PCJEOMHPCJM_OFFSET UNITYSDK_OFFSET(0xD8CE190)
#define CIAJLILJIAM_POPNLPIAOCM_OFFSET UNITYSDK_OFFSET(0xD8CD4C0)

inline static constexpr unsigned int CIAJLILJIAM_TypeDefinitionIndex = 71861;

	class CIAJLILJIAM : public ::RPG::Client::BehaviorBase
	{
	public:
		::UnityEngine::Animator* ENJHGOIKBMG; // 0x18
		::UnityEngine::Animator* FGJKNDNCCCJ; // 0x20
		::System::Int32 ENMONAJOEME; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIAJLILJIAM_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CIAJLILJIAM_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIAJLILJIAM_DISPOSE_OFFSET))(this);
		}

		::System::Void KLIOBGEPFEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIAJLILJIAM_KLIOBGEPFEH_OFFSET))(this);
		}

		::System::Void POPNLPIAOCM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIAJLILJIAM_POPNLPIAOCM_OFFSET))(this);
		}

		::System::Void EKHOGLFCCBI(::UnityEngine::Animator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CIAJLILJIAM_EKHOGLFCCBI_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CIAJLILJIAM_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void LODGFIDABBO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIAJLILJIAM_LODGFIDABBO_OFFSET))(this);
		}

		::UnityEngine::Animator* PCJEOMHPCJM(::RPG::GameCore::GameEntity* a1)
		{
			return ((::UnityEngine::Animator*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CIAJLILJIAM_PCJEOMHPCJM_OFFSET))(this, a1);
		}

		::System::Single IFEMMNPDLCM(::RPG::Client::MonoEffectPluginSyncTargetNormalizedTime_SyncAnimatorInfo a1, ::UnityEngine::AnimatorStateInfo a2, ::UnityEngine::Animator* a3)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::MonoEffectPluginSyncTargetNormalizedTime_SyncAnimatorInfo, ::UnityEngine::AnimatorStateInfo, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CIAJLILJIAM_IFEMMNPDLCM_OFFSET))(this, a1, a2, a3);
		}

		::System::Single DLPIEHDMKED(::RPG::Client::MonoEffectPluginSyncTargetNormalizedTime_SyncAnimatorInfo a1, ::UnityEngine::AnimatorStateInfo a2, ::UnityEngine::Animator* a3)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::MonoEffectPluginSyncTargetNormalizedTime_SyncAnimatorInfo, ::UnityEngine::AnimatorStateInfo, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CIAJLILJIAM_DLPIEHDMKED_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::MonoEffectPluginSyncTargetNormalizedTime* HPNDIIPEFLJ()
		{
			return ((::RPG::Client::MonoEffectPluginSyncTargetNormalizedTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIAJLILJIAM_HPNDIIPEFLJ_OFFSET))(this);
		}

	};
