#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/DrinkMakerFormulaUnlockType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DrinkMakerFormulaRow; }
namespace System { class String; }

#define RPG_GAMECORE_DRINKMAKERFORMULAROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E85C300)
#define RPG_GAMECORE_DRINKMAKERFORMULAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E85BDD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerFormulaRow_TypeDefinitionIndex = 13261;

	class DrinkMakerFormulaRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::String* SmallIconPath; // 0x18
		::Il2CppArray<::System::UInt32>* IngredientList; // 0x20
		::System::UInt32 IceID; // 0x28
		::System::UInt32 UnlockParam; // 0x2C
		::System::UInt32 DecoID; // 0x30
		::System::UInt32 FormulaID; // 0x34
		::RPG::Client::TextID FormulaDesc; // 0x38
		::RPG::Client::TextID FormulaName; // 0x48
		::RPG::GameCore::DrinkMakerFormulaUnlockType UnlockType; // 0x58
		::System::UInt32 CupID; // 0x5C
		::System::Boolean IsChallengeMode; // 0x60
		::System::Boolean IsMission; // 0x61
		::System::Byte _padding0[0x2];
		::System::UInt32 MixRate; // 0x64
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERFORMULAROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::DrinkMakerFormulaRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DrinkMakerFormulaRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERFORMULAROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
