#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Match3 { class BirdStyleWeightConfig; }

#define RPG_GAMECORE_MATCH3_BIRDSTYLEWEIGHTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D84B300)
#define RPG_GAMECORE_MATCH3_BIRDSTYLEWEIGHTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D84B210)

namespace RPG::GameCore::Match3
{
	class BirdStyleWeightConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 StyleID; // 0x10
		::System::UInt32 Weight; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_BIRDSTYLEWEIGHTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::BirdStyleWeightConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::BirdStyleWeightConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_BIRDSTYLEWEIGHTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
