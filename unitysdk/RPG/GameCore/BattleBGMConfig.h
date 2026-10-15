#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattleBGMConfig; }
namespace RPG::GameCore { class BattleBGMStateConfig; }

#define RPG_GAMECORE_BATTLEBGMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D425130)
#define RPG_GAMECORE_BATTLEBGMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D425070)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleBGMConfig_TypeDefinitionIndex = 18119;

	class BattleBGMConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::BattleBGMStateConfig*>* BattleBGMPriorityState; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEBGMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattleBGMConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattleBGMConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEBGMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
