#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DrinkMakerCheersPerformanceRow; }

#define RPG_GAMECORE_DRINKMAKERCHEERSPERFORMANCEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D61C4F0)
#define RPG_GAMECORE_DRINKMAKERCHEERSPERFORMANCEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D61C380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerCheersPerformanceRow_TypeDefinitionIndex = 13211;

	class DrinkMakerCheersPerformanceRow : public ::System::Object
	{
	public:
		::System::UInt32 GroupID; // 0x10
		::System::UInt32 ID; // 0x14
		::System::UInt32 PerformanceID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCHEERSPERFORMANCEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::DrinkMakerCheersPerformanceRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DrinkMakerCheersPerformanceRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCHEERSPERFORMANCEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
