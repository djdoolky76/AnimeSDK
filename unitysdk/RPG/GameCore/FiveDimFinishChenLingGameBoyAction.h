#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimFinishChenLingGameBoyAction; }

#define RPG_GAMECORE_FIVEDIMFINISHCHENLINGGAMEBOYACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D68FED0)
#define RPG_GAMECORE_FIVEDIMFINISHCHENLINGGAMEBOYACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D68FEE0)
#define RPG_GAMECORE_FIVEDIMFINISHCHENLINGGAMEBOYACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D68FE60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimFinishChenLingGameBoyAction_TypeDefinitionIndex = 18676;

	class FiveDimFinishChenLingGameBoyAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFINISHCHENLINGGAMEBOYACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimFinishChenLingGameBoyAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimFinishChenLingGameBoyAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFINISHCHENLINGGAMEBOYACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimFinishChenLingGameBoyAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimFinishChenLingGameBoyAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFINISHCHENLINGGAMEBOYACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
