#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FirstPerformanceRow; }

#define RPG_GAMECORE_FIRSTPERFORMANCEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D67F7C0)
#define RPG_GAMECORE_FIRSTPERFORMANCEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D67F700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FirstPerformanceRow_TypeDefinitionIndex = 13140;

	class FirstPerformanceRow : public ::System::Object
	{
	public:
		::System::UInt32 PerformanceID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIRSTPERFORMANCEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::FirstPerformanceRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FirstPerformanceRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIRSTPERFORMANCEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
