#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimSetConveyorDirectionAction; }

#define RPG_GAMECORE_FIVEDIMSETCONVEYORDIRECTIONACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6D94C0)
#define RPG_GAMECORE_FIVEDIMSETCONVEYORDIRECTIONACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6D94D0)
#define RPG_GAMECORE_FIVEDIMSETCONVEYORDIRECTIONACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6D93F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetConveyorDirectionAction_TypeDefinitionIndex = 18661;

	class FiveDimSetConveyorDirectionAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean IsNegative; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETCONVEYORDIRECTIONACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSetConveyorDirectionAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSetConveyorDirectionAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETCONVEYORDIRECTIONACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSetConveyorDirectionAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSetConveyorDirectionAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETCONVEYORDIRECTIONACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
