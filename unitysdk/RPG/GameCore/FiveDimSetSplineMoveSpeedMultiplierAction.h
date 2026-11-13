#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimSetSplineMoveSpeedMultiplierAction; }

#define RPG_GAMECORE_FIVEDIMSETSPLINEMOVESPEEDMULTIPLIERACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1F7A1B90)
#define RPG_GAMECORE_FIVEDIMSETSPLINEMOVESPEEDMULTIPLIERACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F7A1BA0)
#define RPG_GAMECORE_FIVEDIMSETSPLINEMOVESPEEDMULTIPLIERACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F7A1AE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetSplineMoveSpeedMultiplierAction_TypeDefinitionIndex = 18823;

	class FiveDimSetSplineMoveSpeedMultiplierAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Single SpeedMultiplier; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETSPLINEMOVESPEEDMULTIPLIERACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSetSplineMoveSpeedMultiplierAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSetSplineMoveSpeedMultiplierAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETSPLINEMOVESPEEDMULTIPLIERACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSetSplineMoveSpeedMultiplierAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSetSplineMoveSpeedMultiplierAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETSPLINEMOVESPEEDMULTIPLIERACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
