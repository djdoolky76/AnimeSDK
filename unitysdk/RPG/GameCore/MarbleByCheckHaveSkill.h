#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarblePredicateConfig.h"
#include "unitysdk/RPG/GameCore/MarbleTarget.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleByCheckHaveSkill; }

#define RPG_GAMECORE_MARBLEBYCHECKHAVESKILL_CTOR_OFFSET UNITYSDK_OFFSET(0x1F094930)
#define RPG_GAMECORE_MARBLEBYCHECKHAVESKILL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F094940)
#define RPG_GAMECORE_MARBLEBYCHECKHAVESKILL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F0948E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleByCheckHaveSkill_TypeDefinitionIndex = 17056;

	class MarbleByCheckHaveSkill : public ::RPG::GameCore::MarblePredicateConfig
	{
	public:
		::RPG::GameCore::MarbleTarget TargetType; // 0x28
		::System::UInt32 SkillID; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYCHECKHAVESKILL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleByCheckHaveSkill* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleByCheckHaveSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYCHECKHAVESKILL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleByCheckHaveSkill* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleByCheckHaveSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYCHECKHAVESKILL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
