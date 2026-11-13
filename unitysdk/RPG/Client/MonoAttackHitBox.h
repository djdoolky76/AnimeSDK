#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::Client { class MonoAttackHitBox_JHIPMDABILM; }
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOATTACKHITBOX_BEHMOIBIIEL_OFFSET UNITYSDK_OFFSET(0x19878740)
#define RPG_CLIENT_MONOATTACKHITBOX_CTOR_OFFSET UNITYSDK_OFFSET(0x19878D70)
#define RPG_CLIENT_MONOATTACKHITBOX_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x198785A0)
#define RPG_CLIENT_MONOATTACKHITBOX_LIFFDIEINAN_OFFSET UNITYSDK_OFFSET(0x198787E0)
#define RPG_CLIENT_MONOATTACKHITBOX_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x19878AC0)
#define RPG_CLIENT_MONOATTACKHITBOX_RIGISTERHITDETECTRESULTFUNC_OFFSET UNITYSDK_OFFSET(0x19878CD0)
#define RPG_CLIENT_MONOATTACKHITBOX_SPAWNED_OFFSET UNITYSDK_OFFSET(0x19878560)
#define RPG_CLIENT_MONOATTACKHITBOX_UNRIGISTERHITDETECTRESULTFUNC_OFFSET UNITYSDK_OFFSET(0x19878D20)
#define RPG_CLIENT_MONOATTACKHITBOX_UPDATE_OFFSET UNITYSDK_OFFSET(0x198785F0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoAttackHitBox_TypeDefinitionIndex = 70477;

	class MonoAttackHitBox : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::GameCore::GameEntity* HOEGAPJBABG; // 0x18
		::UnityEngine::Transform* PKHCMAKACLF; // 0x20
		::RPG::Client::MonoAttackHitBox_JHIPMDABILM* PLIMJDDAMHM; // 0x28
		// static const ::System::String* BIOKDLGFAKD; // 0x0
		// static const ::System::String* PNEBBDIFAFJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOATTACKHITBOX_CTOR_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOATTACKHITBOX_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOATTACKHITBOX_DESPAWNED_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOATTACKHITBOX_UPDATE_OFFSET))(this);
		}

		::System::Void OnTriggerEnter(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOATTACKHITBOX_ONTRIGGERENTER_OFFSET))(this, a1);
		}

		::System::Void RigisterHitDetectResultFunc(::RPG::Client::MonoAttackHitBox_JHIPMDABILM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoAttackHitBox_JHIPMDABILM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOATTACKHITBOX_RIGISTERHITDETECTRESULTFUNC_OFFSET))(this, a1);
		}

		::System::Void UnRigisterHitDetectResultFunc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOATTACKHITBOX_UNRIGISTERHITDETECTRESULTFUNC_OFFSET))(this);
		}

		::System::Boolean BEHMOIBIIEL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOATTACKHITBOX_BEHMOIBIIEL_OFFSET))(this);
		}

		::System::Void LIFFDIEINAN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOATTACKHITBOX_LIFFDIEINAN_OFFSET))(this);
		}

	};
}
