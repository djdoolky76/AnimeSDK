#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTarget.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleAddSkill; }

#define RPG_GAMECORE_MARBLEADDSKILL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D836F60)
#define RPG_GAMECORE_MARBLEADDSKILL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D836F70)
#define RPG_GAMECORE_MARBLEADDSKILL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D836F10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleAddSkill_TypeDefinitionIndex = 16862;

	class MarbleAddSkill : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::RPG::GameCore::MarbleTarget TargetType; // 0x10
		::System::UInt32 SkillId; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEADDSKILL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleAddSkill* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleAddSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEADDSKILL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleAddSkill* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleAddSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEADDSKILL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
