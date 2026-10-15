#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DailyActiveTypeRow; }

#define RPG_GAMECORE_DAILYACTIVETYPEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5EE4B0)
#define RPG_GAMECORE_DAILYACTIVETYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5EE390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DailyActiveTypeRow_TypeDefinitionIndex = 13117;

	class DailyActiveTypeRow : public ::System::Object
	{
	public:
		::System::UInt32 Type; // 0x10
		::System::UInt32 PoolSort; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAILYACTIVETYPEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::DailyActiveTypeRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DailyActiveTypeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAILYACTIVETYPEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
