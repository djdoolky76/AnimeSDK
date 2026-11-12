#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/DrinkMakerRequestMode.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DrinkMakerCheersConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_DRINKMAKERCHEERSCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E859010)
#define RPG_GAMECORE_DRINKMAKERCHEERSCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E858A80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerCheersConfigRow_TypeDefinitionIndex = 13275;

	class DrinkMakerCheersConfigRow : public ::System::Object
	{
	public:
		::System::String* DrinkIconPrefab; // 0x10
		::System::String* DrinkIconPath; // 0x18
		::Il2CppArray<::System::UInt32>* CommentList; // 0x20
		::Il2CppArray<::System::UInt32>* ParamList; // 0x28
		::RPG::Client::TextID AvatarRequestText; // 0x30
		::System::UInt32 ID; // 0x40
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID Contraindications; // 0x48
		::RPG::Client::TextID FunctionName; // 0x58
		::RPG::Client::TextID OriginalName; // 0x68
		::System::UInt32 DrinkNameTextJoinID; // 0x78
		::RPG::GameCore::DrinkMakerRequestMode Mode; // 0x7C
		::RPG::Client::TextID TagName; // 0x80
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCHEERSCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::DrinkMakerCheersConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DrinkMakerCheersConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCHEERSCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
