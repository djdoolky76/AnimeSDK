#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/PingPongPositionType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PingPongFloatPos; }
namespace RPG::GameCore { class PingPongGridIndex; }
namespace RPG::GameCore { class PingPongPositionConfig; }

#define RPG_GAMECORE_PINGPONGPOSITIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9185D0)
#define RPG_GAMECORE_PINGPONGPOSITIONCONFIG_DOINJGECHLB_OFFSET UNITYSDK_OFFSET(0x1D918630)
#define RPG_GAMECORE_PINGPONGPOSITIONCONFIG_JJODLKHOHND_OFFSET UNITYSDK_OFFSET(0x1D9185E0)
#define RPG_GAMECORE_PINGPONGPOSITIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D918490)

namespace RPG::GameCore
{
	class PingPongPositionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::PingPongPositionType Type; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::PingPongGridIndex* GridIndex; // 0x18
		::RPG::GameCore::PingPongFloatPos* FloatPos; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGPOSITIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PingPongPositionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PingPongPositionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGPOSITIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		::System::Single JJODLKHOHND()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGPOSITIONCONFIG_JJODLKHOHND_OFFSET))(this);
		}

		::System::Single DOINJGECHLB()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGPOSITIONCONFIG_DOINJGECHLB_OFFSET))(this);
		}

	};
}
