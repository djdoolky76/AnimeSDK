#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceHalfGravityConfig; }

#define RPG_GAMECORE_CAKERACEHALFGRAVITYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5508A0)
#define RPG_GAMECORE_CAKERACEHALFGRAVITYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5501C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceHalfGravityConfig_TypeDefinitionIndex = 18405;

	class CakeRaceHalfGravityConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 PhysicsPercent; // 0x10
		::System::UInt32 DurationPercent; // 0x14
		::System::UInt32 OnEnterParaboleGravityPercent; // 0x18
		::System::UInt32 OnLeaveParaboleGravityPercent; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEHALFGRAVITYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceHalfGravityConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceHalfGravityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEHALFGRAVITYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
