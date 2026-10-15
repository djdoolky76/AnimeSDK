#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ConeSphereTrigger_TriggerPattern.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/BCENMJEPKMP.h"
class AGICAGILHJI;
namespace RPG::Client { class ConeCollider; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class MeshCollider; }
namespace UnityEngine { class SphereCollider; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_CONESPHERETRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0xCBBED60)
#define RPG_CLIENT_CONESPHERETRIGGER_FOLLOWCHANGE_OFFSET UNITYSDK_OFFSET(0xCBBE890)
#define RPG_CLIENT_CONESPHERETRIGGER_GET_PATTERN_OFFSET UNITYSDK_OFFSET(0xCBBE3B0)
#define RPG_CLIENT_CONESPHERETRIGGER_INIT_OFFSET UNITYSDK_OFFSET(0xCBBE400)
#define RPG_CLIENT_CONESPHERETRIGGER_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0xCBBEC00)
#define RPG_CLIENT_CONESPHERETRIGGER_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0xCBBECB0)
#define RPG_CLIENT_CONESPHERETRIGGER_SYNCLIGHTCONETRANSWHENFOLLOW_OFFSET UNITYSDK_OFFSET(0xCBBEA00)
#define RPG_CLIENT_CONESPHERETRIGGER_SYNCLIGHTCONETRANS_OFFSET UNITYSDK_OFFSET(0xCBBE5E0)

namespace RPG::Client
{
	class ConeSphereTrigger : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean IsFollowing; // 0x18
		::System::Boolean IsHitalbe; // 0x19
		::System::Byte _padding0[0x6];
		::UnityEngine::MeshCollider* MHINJGKOAOO; // 0x20
		::RPG::Client::ConeCollider* PMCNGKGAGHH; // 0x28
		::UnityEngine::SphereCollider* HKPKGJNFEDK; // 0x30
		::UnityEngine::Transform* MEMMLNBHMHA; // 0x38
		::System::Single MECMIGFMJCL; // 0x40
		::System::Byte _padding1[0x4];
		::AGICAGILHJI* PNJEPPDLNJO; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONESPHERETRIGGER_CTOR_OFFSET))(this);
		}

		::RPG::Client::ConeSphereTrigger_TriggerPattern get_Pattern()
		{
			return ((::RPG::Client::ConeSphereTrigger_TriggerPattern(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONESPHERETRIGGER_GET_PATTERN_OFFSET))(this);
		}

		::System::Void Init(::AGICAGILHJI* a1, ::UnityEngine::Transform* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::AGICAGILHJI*, ::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONESPHERETRIGGER_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SyncLightConeTrans(::BCENMJEPKMP a1, ::System::Boolean a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::BCENMJEPKMP, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONESPHERETRIGGER_SYNCLIGHTCONETRANS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FollowChange(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONESPHERETRIGGER_FOLLOWCHANGE_OFFSET))(this, a1, a2);
		}

		::System::Void SyncLightConeTransWhenFollow(::BCENMJEPKMP a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::BCENMJEPKMP, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONESPHERETRIGGER_SYNCLIGHTCONETRANSWHENFOLLOW_OFFSET))(this, a1, a2);
		}

		::System::Void OnTriggerEnter(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONESPHERETRIGGER_ONTRIGGERENTER_OFFSET))(this, a1);
		}

		::System::Void OnTriggerExit(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONESPHERETRIGGER_ONTRIGGEREXIT_OFFSET))(this, a1);
		}

	};
}
