#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WaitGetLevelReward; }

#define RPG_GAMECORE_WAITGETLEVELREWARD_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC996E0)
#define RPG_GAMECORE_WAITGETLEVELREWARD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC996F0)
#define RPG_GAMECORE_WAITGETLEVELREWARD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC99620)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitGetLevelReward_TypeDefinitionIndex = 21245;

	class WaitGetLevelReward : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITGETLEVELREWARD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitGetLevelReward* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitGetLevelReward*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITGETLEVELREWARD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitGetLevelReward* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitGetLevelReward*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITGETLEVELREWARD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
