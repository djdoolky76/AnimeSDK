#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DrinkMakerQuantifyTagType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DrinkMakerQuantifyTagRow; }

#define RPG_GAMECORE_DRINKMAKERQUANTIFYTAGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3D4920)
#define RPG_GAMECORE_DRINKMAKERQUANTIFYTAGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1F3D4330)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerQuantifyTagRow_TypeDefinitionIndex = 13237;

	class DrinkMakerQuantifyTagRow : public ::System::Object
	{
	public:
		::RPG::GameCore::DrinkMakerQuantifyTagType Type; // 0x10
		::System::Int32 Value; // 0x14
		::System::UInt32 TagID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERQUANTIFYTAGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::DrinkMakerQuantifyTagRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DrinkMakerQuantifyTagRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERQUANTIFYTAGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
