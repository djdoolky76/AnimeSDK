#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattleLineupSkillTreePoint; }

#define RPG_GAMECORE_BATTLELINEUPSKILLTREEPOINT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D460450)
#define RPG_GAMECORE_BATTLELINEUPSKILLTREEPOINT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D460330)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleLineupSkillTreePoint_TypeDefinitionIndex = 18121;

	class BattleLineupSkillTreePoint : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 Id; // 0x10
		::System::Int32 Level; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPSKILLTREEPOINT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattleLineupSkillTreePoint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattleLineupSkillTreePoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPSKILLTREEPOINT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
