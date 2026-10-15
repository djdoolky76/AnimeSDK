#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimApplyPlayerInteractAction; }

#define RPG_GAMECORE_FIVEDIMAPPLYPLAYERINTERACTACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6812A0)
#define RPG_GAMECORE_FIVEDIMAPPLYPLAYERINTERACTACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6812B0)
#define RPG_GAMECORE_FIVEDIMAPPLYPLAYERINTERACTACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D681230)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimApplyPlayerInteractAction_TypeDefinitionIndex = 18767;

	class FiveDimApplyPlayerInteractAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMAPPLYPLAYERINTERACTACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimApplyPlayerInteractAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimApplyPlayerInteractAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMAPPLYPLAYERINTERACTACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimApplyPlayerInteractAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimApplyPlayerInteractAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMAPPLYPLAYERINTERACTACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
