#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PingPongBallConfig; }
namespace System { class String; }

#define RPG_GAMECORE_PINGPONGBALLCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D915070)
#define RPG_GAMECORE_PINGPONGBALLCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D914E30)

namespace RPG::GameCore
{
	class PingPongBallConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* PrefabPath; // 0x10
		::System::Single DirectionRatioByRacket; // 0x18
		::System::Single BaseSpeed; // 0x1C
		::System::Single SpeedRatioByRacket; // 0x20
		::System::UInt32 MaxNum; // 0x24
		::System::UInt32 SplitNum; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGBALLCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PingPongBallConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PingPongBallConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGBALLCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
