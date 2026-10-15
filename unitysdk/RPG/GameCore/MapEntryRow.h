#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MapEntryType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MapEntryRow; }

#define RPG_GAMECORE_MAPENTRYROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D82BA90)
#define RPG_GAMECORE_MAPENTRYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D82A380)

namespace RPG::GameCore
{
	class MapEntryRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* FinishSubMissionList; // 0x10
		::Il2CppArray<::System::UInt32>* FinishMainMissionList; // 0x18
		::Il2CppArray<::System::UInt32>* BeginMainMissionList; // 0x20
		::RPG::GameCore::MapEntryType EntranceType; // 0x28
		::System::UInt32 ID; // 0x2C
		::System::UInt32 StartGroupID; // 0x30
		::System::UInt32 FloorID; // 0x34
		::System::UInt32 PlaneID; // 0x38
		::System::UInt32 StartAnchorID; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPENTRYROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MapEntryRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MapEntryRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPENTRYROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
