#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PerformanceBackupConfig; }
namespace RPG::GameCore { class PerformanceSortedItem; }

#define RPG_GAMECORE_PERFORMANCESORTEDITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D906A60)
#define RPG_GAMECORE_PERFORMANCESORTEDITEM_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D906800)

namespace RPG::GameCore
{
	class PerformanceSortedItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 PerformanceID; // 0x10
		::RPG::GameCore::ELevelPerformanceType PerformanceType; // 0x14
		::System::Boolean IsBranch; // 0x18
		::System::Byte _padding0[0x3];
		::System::Int32 Indent; // 0x1C
		::System::Boolean HasCg; // 0x20
		::System::Byte _padding1[0x7];
		::RPG::GameCore::PerformanceBackupConfig* PerformanceBackupConfig; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESORTEDITEM_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PerformanceSortedItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PerformanceSortedItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESORTEDITEM_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
