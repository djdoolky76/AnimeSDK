#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DeployMapPoseSwitcher; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_DEPLOYMAPPOSESWITCHER_CTOR_OFFSET UNITYSDK_OFFSET(0x1E80E770)
#define RPG_GAMECORE_DEPLOYMAPPOSESWITCHER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E80E780)
#define RPG_GAMECORE_DEPLOYMAPPOSESWITCHER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E80E740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DeployMapPoseSwitcher_TypeDefinitionIndex = 21258;

	class DeployMapPoseSwitcher : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEPLOYMAPPOSESWITCHER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DeployMapPoseSwitcher* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DeployMapPoseSwitcher*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEPLOYMAPPOSESWITCHER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DeployMapPoseSwitcher* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DeployMapPoseSwitcher*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEPLOYMAPPOSESWITCHER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
