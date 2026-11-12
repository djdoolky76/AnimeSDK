#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DrinkMakerCheersGroupRow; }
namespace System { class String; }

#define RPG_GAMECORE_DRINKMAKERCHEERSGROUPROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E859B90)
#define RPG_GAMECORE_DRINKMAKERCHEERSGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E859710)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerCheersGroupRow_TypeDefinitionIndex = 13273;

	class DrinkMakerCheersGroupRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* IngredientList; // 0x10
		::System::String* AvatarRequestHeadIcon; // 0x18
		::System::String* HeadbookHeadIcon; // 0x20
		::RPG::Client::TextID AvatarName; // 0x28
		::RPG::Client::TextID GroupName; // 0x38
		::RPG::Client::TextID RoleRequirement; // 0x48
		::System::UInt32 HidingDrinkID; // 0x58
		::System::UInt32 TutorialGuideGroupID; // 0x5C
		::System::UInt32 GroupID; // 0x60
		::System::UInt32 NextGroupID; // 0x64
		::System::UInt32 PrimaryDrinkID; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCHEERSGROUPROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::DrinkMakerCheersGroupRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DrinkMakerCheersGroupRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCHEERSGROUPROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
