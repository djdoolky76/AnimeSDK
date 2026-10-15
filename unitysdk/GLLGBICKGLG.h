#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CustomTeamFormationRefreshReason.h"
#include "unitysdk/RPG/GameCore/TeamFormationType.h"
#include "unitysdk/RPG/GameCore/TurnState.h"
#include "unitysdk/RPG/GameCore/VCameraState.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillData; }
namespace RPG::GameCore { class TeamFormationComponent; }

#define GLLGBICKGLG_DPNCMDJEPMJ_OFFSET UNITYSDK_OFFSET(0x2E7D940)
#define GLLGBICKGLG_EHFLDBMLBPM_OFFSET UNITYSDK_OFFSET(0x15AB0AC0)

inline static constexpr unsigned int GLLGBICKGLG_TypeDefinitionIndex = 57717;

	struct alignas(8) GLLGBICKGLG
	{
		::RPG::GameCore::CustomTeamFormationRefreshReason NFKJAMNLPLO; // 0x10
		::RPG::GameCore::TeamFormationType CGBJOAJEMKN; // 0x14
		::RPG::GameCore::TurnState PIGMOFHJCOG; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::GameEntity* BCBBPMNBGEI; // 0x20
		::RPG::GameCore::SkillData* CEODEDALAHK; // 0x28
		::RPG::GameCore::VCameraState FIOICBCELHD; // 0x30
		::System::Boolean ECDCNLHOLPG; // 0x34
		/*
		static ::GLLGBICKGLG EHFLDBMLBPM(::RPG::GameCore::TeamFormationComponent* a1, ::RPG::GameCore::CustomTeamFormationRefreshReason a2)
		{
			return ((::GLLGBICKGLG(*)(::RPG::GameCore::TeamFormationComponent*, ::RPG::GameCore::CustomTeamFormationRefreshReason))((::PBYTE)hIl2Cpp + GLLGBICKGLG_EHFLDBMLBPM_OFFSET))(a1, a2);
		}
		*/

		::System::Void DPNCMDJEPMJ(::RPG::GameCore::TeamFormationComponent* a1, ::RPG::GameCore::CustomTeamFormationRefreshReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TeamFormationComponent*, ::RPG::GameCore::CustomTeamFormationRefreshReason))((::PBYTE)hIl2Cpp + GLLGBICKGLG_DPNCMDJEPMJ_OFFSET))(this, a1, a2);
		}

	};
