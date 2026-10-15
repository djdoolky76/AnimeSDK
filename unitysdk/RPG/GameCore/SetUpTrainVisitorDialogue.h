#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetUpTrainVisitorDialogue; }

#define RPG_GAMECORE_SETUPTRAINVISITORDIALOGUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA9BDB0)
#define RPG_GAMECORE_SETUPTRAINVISITORDIALOGUE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA9BDC0)
#define RPG_GAMECORE_SETUPTRAINVISITORDIALOGUE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA9BCF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetUpTrainVisitorDialogue_TypeDefinitionIndex = 21594;

	class SetUpTrainVisitorDialogue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPTRAINVISITORDIALOGUE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetUpTrainVisitorDialogue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetUpTrainVisitorDialogue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPTRAINVISITORDIALOGUE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetUpTrainVisitorDialogue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetUpTrainVisitorDialogue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPTRAINVISITORDIALOGUE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
