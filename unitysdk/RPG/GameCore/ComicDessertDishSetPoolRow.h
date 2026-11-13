#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ComicDessertDishSetPoolRow; }

#define RPG_GAMECORE_COMICDESSERTDISHSETPOOLROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1F514AC0)
#define RPG_GAMECORE_COMICDESSERTDISHSETPOOLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1F5148D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComicDessertDishSetPoolRow_TypeDefinitionIndex = 11231;

	class ComicDessertDishSetPoolRow : public ::System::Object
	{
	public:
		::System::UInt32 CostAdjustment; // 0x10
		::System::UInt32 DishSetWeight; // 0x14
		::System::UInt32 ID; // 0x18
		::System::UInt32 Complexity; // 0x1C
		::System::UInt32 DishSetID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMICDESSERTDISHSETPOOLROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComicDessertDishSetPoolRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComicDessertDishSetPoolRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMICDESSERTDISHSETPOOLROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
