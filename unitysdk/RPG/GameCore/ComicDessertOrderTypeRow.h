#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ComicDessertOrderTypeRow; }

#define RPG_GAMECORE_COMICDESSERTORDERTYPEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7DD320)
#define RPG_GAMECORE_COMICDESSERTORDERTYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E7DD120)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComicDessertOrderTypeRow_TypeDefinitionIndex = 11229;

	class ComicDessertOrderTypeRow : public ::System::Object
	{
	public:
		::System::UInt32 OrderType; // 0x10
		::System::Single CalmPeriod; // 0x14
		::System::Single Patience; // 0x18
		::System::Single ActualPatience; // 0x1C
		::System::Single HappyPeriod; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMICDESSERTORDERTYPEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComicDessertOrderTypeRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComicDessertOrderTypeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMICDESSERTORDERTYPEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
