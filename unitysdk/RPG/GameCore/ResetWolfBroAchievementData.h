#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ResetWolfBroAchievementData; }

#define RPG_GAMECORE_RESETWOLFBROACHIEVEMENTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D98C780)
#define RPG_GAMECORE_RESETWOLFBROACHIEVEMENTDATA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D98C790)
#define RPG_GAMECORE_RESETWOLFBROACHIEVEMENTDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D98C6C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ResetWolfBroAchievementData_TypeDefinitionIndex = 21992;

	class ResetWolfBroAchievementData : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETWOLFBROACHIEVEMENTDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ResetWolfBroAchievementData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ResetWolfBroAchievementData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETWOLFBROACHIEVEMENTDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ResetWolfBroAchievementData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ResetWolfBroAchievementData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETWOLFBROACHIEVEMENTDATA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
