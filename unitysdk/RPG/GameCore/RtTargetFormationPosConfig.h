#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtTargetFormationPosConfig; }

#define RPG_GAMECORE_RTTARGETFORMATIONPOSCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA68A20)
#define RPG_GAMECORE_RTTARGETFORMATIONPOSCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA64D50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtTargetFormationPosConfig_TypeDefinitionIndex = 24225;

	class RtTargetFormationPosConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::MVector3 LocalDelta; // 0x10
		::System::Single Yaw; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETFORMATIONPOSCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtTargetFormationPosConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtTargetFormationPosConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETFORMATIONPOSCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
