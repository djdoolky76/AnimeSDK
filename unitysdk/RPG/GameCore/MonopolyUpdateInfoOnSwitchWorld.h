#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonopolyUpdateInfoOnSwitchWorld; }

#define RPG_GAMECORE_MONOPOLYUPDATEINFOONSWITCHWORLD_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8AE0F0)
#define RPG_GAMECORE_MONOPOLYUPDATEINFOONSWITCHWORLD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8AE100)
#define RPG_GAMECORE_MONOPOLYUPDATEINFOONSWITCHWORLD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8AE030)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyUpdateInfoOnSwitchWorld_TypeDefinitionIndex = 20936;

	class MonopolyUpdateInfoOnSwitchWorld : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYUPDATEINFOONSWITCHWORLD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonopolyUpdateInfoOnSwitchWorld* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonopolyUpdateInfoOnSwitchWorld*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYUPDATEINFOONSWITCHWORLD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonopolyUpdateInfoOnSwitchWorld* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonopolyUpdateInfoOnSwitchWorld*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYUPDATEINFOONSWITCHWORLD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
