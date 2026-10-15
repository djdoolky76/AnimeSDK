#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarSkillTreePointTriggerKey.h"
#include "unitysdk/RPG/GameCore/BattleExtraPropertyAdditionPair.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattleExtraSkillTreeAdditionPair; }

#define RPG_GAMECORE_BATTLEEXTRASKILLTREEADDITIONPAIR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D45ED80)
#define RPG_GAMECORE_BATTLEEXTRASKILLTREEADDITIONPAIR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D45ED90)
#define RPG_GAMECORE_BATTLEEXTRASKILLTREEADDITIONPAIR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D45EFA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleExtraSkillTreeAdditionPair_TypeDefinitionIndex = 23644;

	class BattleExtraSkillTreeAdditionPair : public ::RPG::GameCore::BattleExtraPropertyAdditionPair
	{
	public:
		::Il2CppArray<::RPG::GameCore::AvatarSkillTreePointTriggerKey>* PointTriggerKeyList; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEXTRASKILLTREEADDITIONPAIR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattleExtraSkillTreeAdditionPair* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattleExtraSkillTreeAdditionPair*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEXTRASKILLTREEADDITIONPAIR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattleExtraSkillTreeAdditionPair* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattleExtraSkillTreeAdditionPair*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEXTRASKILLTREEADDITIONPAIR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
