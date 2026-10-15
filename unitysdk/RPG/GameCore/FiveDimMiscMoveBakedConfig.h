#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimMiscMoveBakedConfig; }

#define RPG_GAMECORE_FIVEDIMMISCMOVEBAKEDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C8D40)
#define RPG_GAMECORE_FIVEDIMMISCMOVEBAKEDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6C8A90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimMiscMoveBakedConfig_TypeDefinitionIndex = 16658;

	class FiveDimMiscMoveBakedConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single PipePortalSpeed; // 0x10
		::RPG::MVector3 BeatBackInitVelocity; // 0x14
		::RPG::MVector3 MascotBeatBackInitVelocity; // 0x20
		::System::Single MascotBeatBackSpeedLerpDuration; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMISCMOVEBAKEDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimMiscMoveBakedConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimMiscMoveBakedConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMISCMOVEBAKEDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
