#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityPositionCheckMode.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventurePositionCheckConfig; }

#define RPG_GAMECORE_ADVENTUREPOSITIONCHECKCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3CC770)
#define RPG_GAMECORE_ADVENTUREPOSITIONCHECKCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3CC360)

namespace RPG::GameCore
{
	class AdventurePositionCheckConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::EntityPositionCheckMode CheckMode; // 0x10
		::System::Boolean CheckWhenInvisible; // 0x14
		::System::Byte _padding0[0x3];
		::System::Single GroundCheckUp; // 0x18
		::System::Single GroundCheckDown; // 0x1C
		::System::Single GroundCheckRadius; // 0x20
		::System::Boolean AutoPosAdaption; // 0x24
		::System::Byte _padding1[0x3];
		::System::Single PosAdaptionRadius; // 0x28
		::System::Boolean EnableAvoidance; // 0x2C
		::System::Byte _padding2[0x3];
		::System::Single AvoidanceSpace; // 0x30
		::System::Single RecheckTimeThresh; // 0x34
		::System::Single RecheckDistThresh; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPOSITIONCHECKCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventurePositionCheckConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventurePositionCheckConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPOSITIONCHECKCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
