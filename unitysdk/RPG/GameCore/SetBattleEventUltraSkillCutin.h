#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetBattleEventUltraSkillCutin; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETBATTLEEVENTULTRASKILLCUTIN_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA693D0)
#define RPG_GAMECORE_SETBATTLEEVENTULTRASKILLCUTIN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA693E0)
#define RPG_GAMECORE_SETBATTLEEVENTULTRASKILLCUTIN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA693A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetBattleEventUltraSkillCutin_TypeDefinitionIndex = 22746;

	class SetBattleEventUltraSkillCutin : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* BETarget; // 0x18
		::System::Boolean IsCutin; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLEEVENTULTRASKILLCUTIN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetBattleEventUltraSkillCutin* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetBattleEventUltraSkillCutin*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLEEVENTULTRASKILLCUTIN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetBattleEventUltraSkillCutin* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetBattleEventUltraSkillCutin*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLEEVENTULTRASKILLCUTIN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
