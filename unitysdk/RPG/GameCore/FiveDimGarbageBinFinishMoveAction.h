#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimGarbageBinFinishMoveAction; }

#define RPG_GAMECORE_FIVEDIMGARBAGEBINFINISHMOVEACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C09A0)
#define RPG_GAMECORE_FIVEDIMGARBAGEBINFINISHMOVEACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6C09B0)
#define RPG_GAMECORE_FIVEDIMGARBAGEBINFINISHMOVEACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6C0930)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimGarbageBinFinishMoveAction_TypeDefinitionIndex = 18692;

	class FiveDimGarbageBinFinishMoveAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGARBAGEBINFINISHMOVEACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimGarbageBinFinishMoveAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimGarbageBinFinishMoveAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGARBAGEBINFINISHMOVEACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimGarbageBinFinishMoveAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimGarbageBinFinishMoveAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGARBAGEBINFINISHMOVEACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
