#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class QuestGetReward; }

#define RPG_GAMECORE_QUESTGETREWARD_CTOR_OFFSET UNITYSDK_OFFSET(0x1D960B80)
#define RPG_GAMECORE_QUESTGETREWARD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D960B90)
#define RPG_GAMECORE_QUESTGETREWARD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D960B50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int QuestGetReward_TypeDefinitionIndex = 21884;

	class QuestGetReward : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::DynamicFloat*>* QuestIDList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QUESTGETREWARD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::QuestGetReward* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::QuestGetReward*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QUESTGETREWARD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::QuestGetReward* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::QuestGetReward*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QUESTGETREWARD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
