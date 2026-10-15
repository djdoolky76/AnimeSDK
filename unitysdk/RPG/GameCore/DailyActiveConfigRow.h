#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DailyActiveConfigRow; }

#define RPG_GAMECORE_DAILYACTIVECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5EE250)
#define RPG_GAMECORE_DAILYACTIVECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5EDC20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DailyActiveConfigRow_TypeDefinitionIndex = 13113;

	class DailyActiveConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 DailyActiveReward; // 0x10
		::System::UInt32 WorldLevel; // 0x14
		::System::UInt32 Level; // 0x18
		::System::UInt32 DailyActivePoint; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAILYACTIVECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::DailyActiveConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DailyActiveConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAILYACTIVECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
