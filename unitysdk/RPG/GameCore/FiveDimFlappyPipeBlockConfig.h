#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimFlappyPipeBlockConfig; }

#define RPG_GAMECORE_FIVEDIMFLAPPYPIPEBLOCKCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6BE080)
#define RPG_GAMECORE_FIVEDIMFLAPPYPIPEBLOCKCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6BDF50)

namespace RPG::GameCore
{
	class FiveDimFlappyPipeBlockConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single Difficulty; // 0x10
		::System::Single Probability; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFLAPPYPIPEBLOCKCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimFlappyPipeBlockConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimFlappyPipeBlockConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFLAPPYPIPEBLOCKCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
