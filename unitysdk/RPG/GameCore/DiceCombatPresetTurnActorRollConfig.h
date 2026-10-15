#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatPresetTurnActorRollConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_DICECOMBATPRESETTURNACTORROLLCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5E2720)
#define RPG_GAMECORE_DICECOMBATPRESETTURNACTORROLLCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5E2630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPresetTurnActorRollConfig_TypeDefinitionIndex = 16130;

	class DiceCombatPresetTurnActorRollConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Result; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPRESETTURNACTORROLLCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatPresetTurnActorRollConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatPresetTurnActorRollConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPRESETTURNACTORROLLCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
