#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimEvilSmileState.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimEvilSmileStateOverrideConfig; }

#define RPG_GAMECORE_FIVEDIMEVILSMILESTATEOVERRIDECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6BD7D0)
#define RPG_GAMECORE_FIVEDIMEVILSMILESTATEOVERRIDECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6BD690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimEvilSmileStateOverrideConfig_TypeDefinitionIndex = 18584;

	class FiveDimEvilSmileStateOverrideConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FiveDimEvilSmileState StateType; // 0x10
		::System::Single StateTime; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEVILSMILESTATEOVERRIDECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimEvilSmileStateOverrideConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimEvilSmileStateOverrideConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEVILSMILESTATEOVERRIDECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
