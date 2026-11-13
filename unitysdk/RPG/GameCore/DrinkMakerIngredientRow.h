#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/DrinkMakerUnlockType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DrinkMakerIngredientRow; }
namespace System { class String; }

#define RPG_GAMECORE_DRINKMAKERINGREDIENTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3D0D40)
#define RPG_GAMECORE_DRINKMAKERINGREDIENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1F3D0880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerIngredientRow_TypeDefinitionIndex = 13244;

	class DrinkMakerIngredientRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* UnlockParam; // 0x10
		::Il2CppArray<::System::Single>* PhyParam; // 0x18
		::System::String* IconPath; // 0x20
		::System::String* SmallIconPath; // 0x28
		::Il2CppArray<::System::Single>* EffParam; // 0x30
		::Il2CppArray<::System::UInt32>* IncludeTagList; // 0x38
		::Il2CppArray<::System::UInt32>* Color; // 0x40
		::RPG::Client::TextID IngredientName; // 0x48
		::RPG::Client::TextID IngredientDesc; // 0x58
		::RPG::GameCore::DrinkMakerUnlockType UnlockType; // 0x68
		::System::UInt32 ID; // 0x6C
		::System::Boolean IsMission; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERINGREDIENTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::DrinkMakerIngredientRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DrinkMakerIngredientRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERINGREDIENTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
