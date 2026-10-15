#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MissionVersionConstRow; }

#define RPG_GAMECORE_MISSIONVERSIONCONSTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D88AC50)
#define RPG_GAMECORE_MISSIONVERSIONCONSTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D88A660)

namespace RPG::GameCore
{
	class MissionVersionConstRow : public ::System::Object
	{
	public:
		::System::UInt32 VersionFinalGapMainMissionID; // 0x10
		::System::UInt32 ID; // 0x14
		::System::UInt32 VersionFinalMainMissionID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONVERSIONCONSTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MissionVersionConstRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MissionVersionConstRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONVERSIONCONSTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
