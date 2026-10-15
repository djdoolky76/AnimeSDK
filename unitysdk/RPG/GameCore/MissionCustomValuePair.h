#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/MissionCustomValuePairType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MissionCustomValue; }
namespace RPG::GameCore { class MissionCustomValuePair; }

#define RPG_GAMECORE_MISSIONCUSTOMVALUEPAIR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D885D20)
#define RPG_GAMECORE_MISSIONCUSTOMVALUEPAIR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D885B80)

namespace RPG::GameCore
{
	class MissionCustomValuePair : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::MissionCustomValuePairType Type; // 0x10
		::System::UInt32 DirectValue; // 0x14
		::System::UInt32 MainMissionID; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::MissionCustomValue* MissionCustomValue; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONCUSTOMVALUEPAIR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MissionCustomValuePair* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MissionCustomValuePair*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONCUSTOMVALUEPAIR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
