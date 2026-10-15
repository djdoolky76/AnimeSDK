#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetComponentAssetAnimStateConfig; }
namespace RPG::GameCore { class SetComponentAssetLoadState; }
namespace RPG::GameCore { class SetComponentAssetLoadStateWithAnimState; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_SETCOMPONENTASSETLOADSTATEWITHANIMSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA9D4A0)
#define RPG_GAMECORE_SETCOMPONENTASSETLOADSTATEWITHANIMSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA9D4E0)
#define RPG_GAMECORE_SETCOMPONENTASSETLOADSTATEWITHANIMSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA9D440)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetComponentAssetLoadStateWithAnimState_TypeDefinitionIndex = 22813;

	class SetComponentAssetLoadStateWithAnimState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::SetComponentAssetLoadState* SetConfig; // 0x20
		::Il2CppArray<::RPG::GameCore::SetComponentAssetAnimStateConfig*>* StateConfigs; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* SuccessTaskList; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* FailedTaskList; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCOMPONENTASSETLOADSTATEWITHANIMSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetComponentAssetLoadStateWithAnimState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetComponentAssetLoadStateWithAnimState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCOMPONENTASSETLOADSTATEWITHANIMSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetComponentAssetLoadStateWithAnimState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetComponentAssetLoadStateWithAnimState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCOMPONENTASSETLOADSTATEWITHANIMSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
