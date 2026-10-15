#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DrinkMakerCheersGroupRow; }
namespace System { class String; }

#define RPG_GAMECORE_DRINKMAKERCHEERSGROUPROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5EE170)
#define RPG_GAMECORE_DRINKMAKERCHEERSGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5EDCF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerCheersGroupRow_TypeDefinitionIndex = 13199;

	class DrinkMakerCheersGroupRow : public ::System::Object
	{
	public:
		::System::String* AvatarRequestHeadIcon; // 0x10
		::System::String* HeadbookHeadIcon; // 0x18
		::Il2CppArray<::System::UInt32>* IngredientList; // 0x20
		::System::UInt32 TutorialGuideGroupID; // 0x28
		::System::UInt32 GroupID; // 0x2C
		::RPG::Client::TextID RoleRequirement; // 0x30
		::RPG::Client::TextID GroupName; // 0x40
		::System::UInt32 HidingDrinkID; // 0x50
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID AvatarName; // 0x58
		::System::UInt32 NextGroupID; // 0x68
		::System::UInt32 PrimaryDrinkID; // 0x6C
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
