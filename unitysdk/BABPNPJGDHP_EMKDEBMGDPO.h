#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFormationPosConfig; }

#define BABPNPJGDHP_EMKDEBMGDPO_CTOR_OFFSET UNITYSDK_OFFSET(0x16CDE510)
#define BABPNPJGDHP_EMKDEBMGDPO_EIPBPHDOEOO_OFFSET UNITYSDK_OFFSET(0x16CDB780)
#define BABPNPJGDHP_EMKDEBMGDPO_NCEGDAPJGIK_OFFSET UNITYSDK_OFFSET(0x16CDC470)
#define BABPNPJGDHP_EMKDEBMGDPO_PENKCHBNLIO_OFFSET UNITYSDK_OFFSET(0x16CDB710)

inline static constexpr unsigned int BABPNPJGDHP_EMKDEBMGDPO_TypeDefinitionIndex = 60326;

	class BABPNPJGDHP_EMKDEBMGDPO : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* MBGIFEEHONI; // 0x10
		::RPG::GameCore::GameEntity* MCLLALGABAB; // 0x18
		::RPG::GameCore::GameEntity* LIACFBDAIJA; // 0x20
		::UnityEngine::Vector3 PBLCIKOCKPB; // 0x28
		::UnityEngine::Vector3 EPDFFDPDGCI; // 0x34
		::System::Single NEIDCIINFHO; // 0x40
		::UnityEngine::Vector3 MMGLHLBIICB; // 0x44
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BABPNPJGDHP_EMKDEBMGDPO_CTOR_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 NCEGDAPJGIK()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BABPNPJGDHP_EMKDEBMGDPO_NCEGDAPJGIK_OFFSET))(this);
		}

		::System::Void PENKCHBNLIO(::RPG::GameCore::TargetFormationPosConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFormationPosConfig*))((::PBYTE)hIl2Cpp + BABPNPJGDHP_EMKDEBMGDPO_PENKCHBNLIO_OFFSET))(this, a1);
		}

		::System::Void EIPBPHDOEOO(::RPG::GameCore::TargetFormationPosConfig* a1, ::RPG::GameCore::TargetFormationPosConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFormationPosConfig*, ::RPG::GameCore::TargetFormationPosConfig*))((::PBYTE)hIl2Cpp + BABPNPJGDHP_EMKDEBMGDPO_EIPBPHDOEOO_OFFSET))(this, a1, a2);
		}

	};
