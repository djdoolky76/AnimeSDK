#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PingPongBaseStateConfig; }

#define RPG_GAMECORE_PINGPONGBASESTATECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D915210)
#define RPG_GAMECORE_PINGPONGBASESTATECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D915080)

namespace RPG::GameCore
{
	class PingPongBaseStateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single BaseHP; // 0x10
		::System::Single BaseSP; // 0x14
		::System::Single BaseMP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGBASESTATECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PingPongBaseStateConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PingPongBaseStateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGBASESTATECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
