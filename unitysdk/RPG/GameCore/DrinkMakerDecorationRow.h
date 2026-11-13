#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DrinkMakerDecorationRow; }
namespace System { class String; }

#define RPG_GAMECORE_DRINKMAKERDECORATIONROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3CDDF0)
#define RPG_GAMECORE_DRINKMAKERDECORATIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1F3CDB70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerDecorationRow_TypeDefinitionIndex = 13248;

	class DrinkMakerDecorationRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* IncludeTagList; // 0x10
		::System::String* CupAnchoPath; // 0x18
		::System::String* PrefabPath; // 0x20
		::System::String* IconPath; // 0x28
		::RPG::Client::TextID DecorationName; // 0x30
		::System::UInt32 DecorationID; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDECORATIONROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::DrinkMakerDecorationRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DrinkMakerDecorationRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDECORATIONROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
