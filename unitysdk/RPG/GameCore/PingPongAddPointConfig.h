#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PingPongAddPointConfig; }

#define RPG_GAMECORE_PINGPONGADDPOINTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D914E10)
#define RPG_GAMECORE_PINGPONGADDPOINTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D914C80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PingPongAddPointConfig_TypeDefinitionIndex = 16977;

	class PingPongAddPointConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single HPAddPerPoint; // 0x10
		::System::Single SPAddPerPoint; // 0x14
		::System::Single MPAddPerPoint; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGADDPOINTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PingPongAddPointConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PingPongAddPointConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGADDPOINTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
