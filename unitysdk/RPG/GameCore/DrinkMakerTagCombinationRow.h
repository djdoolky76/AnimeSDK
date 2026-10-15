#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/DrinkMakerQuantifyTagType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DrinkMakerTagCombinationRow; }
namespace System { class String; }

#define RPG_GAMECORE_DRINKMAKERTAGCOMBINATIONROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D625BF0)
#define RPG_GAMECORE_DRINKMAKERTAGCOMBINATIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D625930)

namespace RPG::GameCore
{
	class DrinkMakerTagCombinationRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ExcludeTags; // 0x10
		::Il2CppArray<::System::UInt32>* IncludeTags; // 0x18
		::System::String* HintStr; // 0x20
		::RPG::Client::TextID TagRequestDesc; // 0x28
		::System::UInt32 TagCombinationID; // 0x38
		::RPG::GameCore::DrinkMakerQuantifyTagType HintIconType; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERTAGCOMBINATIONROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::DrinkMakerTagCombinationRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DrinkMakerTagCombinationRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERTAGCOMBINATIONROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
