#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/DrinkMakerQuantifyTagType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DrinkMakerTagCombinationRow; }
namespace System { class String; }

#define RPG_GAMECORE_DRINKMAKERTAGCOMBINATIONROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3D5C00)
#define RPG_GAMECORE_DRINKMAKERTAGCOMBINATIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1F3D5940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerTagCombinationRow_TypeDefinitionIndex = 13226;

	class DrinkMakerTagCombinationRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* IncludeTags; // 0x10
		::System::String* HintStr; // 0x18
		::Il2CppArray<::System::UInt32>* ExcludeTags; // 0x20
		::System::UInt32 TagCombinationID; // 0x28
		::RPG::GameCore::DrinkMakerQuantifyTagType HintIconType; // 0x2C
		::RPG::Client::TextID TagRequestDesc; // 0x30
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
