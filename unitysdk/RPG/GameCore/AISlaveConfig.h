#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AISlaveConfig; }

#define RPG_GAMECORE_AISLAVECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D33B200)
#define RPG_GAMECORE_AISLAVECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D33B010)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AISlaveConfig_TypeDefinitionIndex = 17231;

	class AISlaveConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 GroupID; // 0x10
		::System::UInt32 ID; // 0x14
		::RPG::MVector3 PatrolOffset; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AISLAVECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AISlaveConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AISlaveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AISLAVECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
