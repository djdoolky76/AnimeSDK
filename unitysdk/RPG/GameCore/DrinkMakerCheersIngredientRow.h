#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DrinkMakerCheersIngredientRow; }
namespace System { class String; }

#define RPG_GAMECORE_DRINKMAKERCHEERSINGREDIENTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D61C370)
#define RPG_GAMECORE_DRINKMAKERCHEERSINGREDIENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D61BFB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerCheersIngredientRow_TypeDefinitionIndex = 13203;

	class DrinkMakerCheersIngredientRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* EffParam; // 0x10
		::Il2CppArray<::System::UInt32>* IncludeTagList; // 0x18
		::Il2CppArray<::System::Single>* PhyParam; // 0x20
		::Il2CppArray<::System::UInt32>* Color; // 0x28
		::System::String* IconPath; // 0x30
		::System::String* SmallIconPath; // 0x38
		::RPG::Client::TextID IngredientName; // 0x40
		::System::UInt32 ID; // 0x50
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID IngredientDesc; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCHEERSINGREDIENTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::DrinkMakerCheersIngredientRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DrinkMakerCheersIngredientRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCHEERSINGREDIENTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
