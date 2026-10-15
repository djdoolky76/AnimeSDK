#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PerFloorConflictRelativeMissionBakedData; }

#define RPG_GAMECORE_PERFLOORCONFLICTRELATIVEMISSIONBAKEDDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8F5300)
#define RPG_GAMECORE_PERFLOORCONFLICTRELATIVEMISSIONBAKEDDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8F51D0)

namespace RPG::GameCore
{
	class PerFloorConflictRelativeMissionBakedData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* MainMissionIDList; // 0x10
		::Il2CppArray<::System::UInt32>* SubMissionIDList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFLOORCONFLICTRELATIVEMISSIONBAKEDDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PerFloorConflictRelativeMissionBakedData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PerFloorConflictRelativeMissionBakedData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFLOORCONFLICTRELATIVEMISSIONBAKEDDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
