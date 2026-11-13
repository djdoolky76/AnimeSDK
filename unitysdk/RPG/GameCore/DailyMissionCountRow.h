#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DailyMissionCountRow; }

#define RPG_GAMECORE_DAILYMISSIONCOUNTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EFF9FE0)
#define RPG_GAMECORE_DAILYMISSIONCOUNTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EFF9E70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DailyMissionCountRow_TypeDefinitionIndex = 13189;

	class DailyMissionCountRow : public ::System::Object
	{
	public:
		::System::UInt32 DailyCount; // 0x10
		::System::UInt32 ID; // 0x14
		::System::UInt32 DailyMissionType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAILYMISSIONCOUNTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::DailyMissionCountRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DailyMissionCountRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAILYMISSIONCOUNTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
