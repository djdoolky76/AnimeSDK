#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFormationPosConfig; }

#define RPG_GAMECORE_TARGETFORMATIONPOSCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB67AE0)
#define RPG_GAMECORE_TARGETFORMATIONPOSCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB67940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFormationPosConfig_TypeDefinitionIndex = 22496;

	class TargetFormationPosConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::MVector3 LocalDelta; // 0x10
		::System::Single Yaw; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFORMATIONPOSCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFormationPosConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFormationPosConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFORMATIONPOSCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
