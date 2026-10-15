#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
class OIEAECJBMNO;
namespace RPG::Client { class QuadricBezier; }
namespace System { class Object; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_BATTLEAVATARULTRASKILLFLYEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0xC80C9A0)
#define RPG_CLIENT_BATTLEAVATARULTRASKILLFLYEFFECT_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xC80C250)
#define RPG_CLIENT_BATTLEAVATARULTRASKILLFLYEFFECT_EGHCKNKAJHD_OFFSET UNITYSDK_OFFSET(0xC80C5F0)
#define RPG_CLIENT_BATTLEAVATARULTRASKILLFLYEFFECT_ONCREATE_OFFSET UNITYSDK_OFFSET(0xC80BF50)
#define RPG_CLIENT_BATTLEAVATARULTRASKILLFLYEFFECT_PLAY_OFFSET UNITYSDK_OFFSET(0xC80C290)
#define RPG_CLIENT_BATTLEAVATARULTRASKILLFLYEFFECT_SPAWNED_OFFSET UNITYSDK_OFFSET(0xC80C210)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleAvatarUltraSkillFlyEffect_TypeDefinitionIndex = 71473;

	class BattleAvatarUltraSkillFlyEffect : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* KNGEKPKBIDK; // 0x18
		::UnityEngine::Transform* GNPBGAKIAHM; // 0x20
		::UnityEngine::Transform* CEEAKCACHGJ; // 0x28
		::RPG::Client::QuadricBezier* BKHMEKLPNHJ; // 0x30
		::UnityEngine::ParticleSystem* HDNJKMJLOOG; // 0x38
		::UnityEngine::Animation* KCOAILOHDND; // 0x40
		::System::Single HBDJCFFDGDD; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEAVATARULTRASKILLFLYEFFECT_CTOR_OFFSET))(this);
		}

		::System::Void OnCreate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEAVATARULTRASKILLFLYEFFECT_ONCREATE_OFFSET))(this, a1);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEAVATARULTRASKILLFLYEFFECT_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEAVATARULTRASKILLFLYEFFECT_DESPAWNED_OFFSET))(this);
		}

		::System::Void Play(::OIEAECJBMNO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OIEAECJBMNO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEAVATARULTRASKILLFLYEFFECT_PLAY_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 EGHCKNKAJHD(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEAVATARULTRASKILLFLYEFFECT_EGHCKNKAJHD_OFFSET))(this, a1, a2, a3);
		}

	};
}
