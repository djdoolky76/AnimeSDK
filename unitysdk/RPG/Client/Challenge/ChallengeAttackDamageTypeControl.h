#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_CHALLENGE_CHALLENGEATTACKDAMAGETYPECONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xC93D890)
#define RPG_CLIENT_CHALLENGE_CHALLENGEATTACKDAMAGETYPECONTROL_GET_DAMAGETYPE_OFFSET UNITYSDK_OFFSET(0xC93D770)
#define RPG_CLIENT_CHALLENGE_CHALLENGEATTACKDAMAGETYPECONTROL_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xC93D800)
#define RPG_CLIENT_CHALLENGE_CHALLENGEATTACKDAMAGETYPECONTROL_SET_DAMAGETYPE_OFFSET UNITYSDK_OFFSET(0xC93D7B0)

namespace RPG::Client::Challenge
{
	class ChallengeAttackDamageTypeControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::GameCore::AttackDamageType MDPMKJHENGC; // 0x18
		::System::Byte _padding0[0x4];
		::UnityEngine::UI::Image* _Icon; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGEATTACKDAMAGETYPECONTROL_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AttackDamageType get_DamageType()
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGEATTACKDAMAGETYPECONTROL_GET_DAMAGETYPE_OFFSET))(this);
		}

		::System::Void set_DamageType(::RPG::GameCore::AttackDamageType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGEATTACKDAMAGETYPECONTROL_SET_DAMAGETYPE_OFFSET))(this, a1);
		}

		::System::Void KANMCJHEFJJ(::RPG::GameCore::AttackDamageType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGEATTACKDAMAGETYPECONTROL_KANMCJHEFJJ_OFFSET))(this, a1);
		}

	};
}
