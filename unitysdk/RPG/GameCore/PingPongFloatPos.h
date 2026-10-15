#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PingPongFloatPos; }

#define RPG_GAMECORE_PINGPONGFLOATPOS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D917550)
#define RPG_GAMECORE_PINGPONGFLOATPOS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D917420)

namespace RPG::GameCore
{
	class PingPongFloatPos : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single x; // 0x10
		::System::Single z; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGFLOATPOS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PingPongFloatPos* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PingPongFloatPos*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGFLOATPOS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
