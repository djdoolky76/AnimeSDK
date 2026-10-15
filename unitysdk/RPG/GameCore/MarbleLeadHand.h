#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleLeadHand; }

#define RPG_GAMECORE_MARBLELEADHAND_CTOR_OFFSET UNITYSDK_OFFSET(0x1D83FE10)
#define RPG_GAMECORE_MARBLELEADHAND_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D83FE20)
#define RPG_GAMECORE_MARBLELEADHAND_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D83FD10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleLeadHand_TypeDefinitionIndex = 16865;

	class MarbleLeadHand : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::System::Boolean EnemyTeam; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLELEADHAND_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleLeadHand* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleLeadHand*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLELEADHAND_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleLeadHand* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleLeadHand*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLELEADHAND_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
