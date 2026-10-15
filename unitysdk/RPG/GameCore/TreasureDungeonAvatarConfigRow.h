#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TreasureDungeonAvatarConfigRow; }

#define RPG_GAMECORE_TREASUREDUNGEONAVATARCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC3EE00)
#define RPG_GAMECORE_TREASUREDUNGEONAVATARCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DC3E5C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TreasureDungeonAvatarConfigRow_TypeDefinitionIndex = 12538;

	class TreasureDungeonAvatarConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* FigureDiff; // 0x10
		::System::UInt32 AvatarPickID; // 0x18
		::System::Single FigureScale; // 0x1C
		::RPG::Client::TextID Dialogue1; // 0x20
		::System::UInt32 SpecialAvataID; // 0x30
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID Dialogue2; // 0x38
		::RPG::Client::TextID Dialogue3; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEONAVATARCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::TreasureDungeonAvatarConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TreasureDungeonAvatarConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEONAVATARCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
