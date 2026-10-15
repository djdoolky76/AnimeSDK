#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetHLODSwitchDelay; }

#define RPG_GAMECORE_SETHLODSWITCHDELAY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB56E0)
#define RPG_GAMECORE_SETHLODSWITCHDELAY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAB56F0)
#define RPG_GAMECORE_SETHLODSWITCHDELAY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAB56B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetHLODSwitchDelay_TypeDefinitionIndex = 20517;

	class SetHLODSwitchDelay : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean NoDelay; // 0x18
		::System::Boolean DefaultDelay; // 0x19
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETHLODSWITCHDELAY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetHLODSwitchDelay* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetHLODSwitchDelay*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETHLODSWITCHDELAY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetHLODSwitchDelay* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetHLODSwitchDelay*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETHLODSWITCHDELAY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
