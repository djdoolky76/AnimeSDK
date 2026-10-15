#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SimulateAvatarLineupConfig; }
namespace RPG::GameCore { class SimulateLineupConfig; }

#define RPG_GAMECORE_SIMULATELINEUPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAEAAD0)
#define RPG_GAMECORE_SIMULATELINEUPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAEA9E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SimulateLineupConfig_TypeDefinitionIndex = 18143;

	class SimulateLineupConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::SimulateAvatarLineupConfig*>* avatarList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SIMULATELINEUPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SimulateLineupConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SimulateLineupConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SIMULATELINEUPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
