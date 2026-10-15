#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TreasureDungeonGroupConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_TREASUREDUNGEONGROUPCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC13320)
#define RPG_GAMECORE_TREASUREDUNGEONGROUPCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DC12E00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TreasureDungeonGroupConfigRow_TypeDefinitionIndex = 12522;

	class TreasureDungeonGroupConfigRow : public ::System::Object
	{
	public:
		::System::String* ATKExchangeIconPath; // 0x10
		::System::String* ImgPath; // 0x18
		::Il2CppArray<::System::UInt32>* DungeonIDList; // 0x20
		::System::UInt32 ATKMazeBuffID; // 0x28
		::System::UInt32 HpConversionRate2; // 0x2C
		::System::UInt32 MaxDEF; // 0x30
		::System::UInt32 GroupID; // 0x34
		::RPG::Client::TextID Name; // 0x38
		::RPG::Client::TextID ATKExchangeName; // 0x48
		::System::UInt32 DEFExchangeRatio; // 0x58
		::System::UInt32 ActivityModuleID; // 0x5C
		::System::UInt32 ATKExchangeRatio; // 0x60
		::System::UInt32 HpConversionRate; // 0x64
		::System::UInt32 MaxATK; // 0x68
		::System::UInt32 DEFMazeBuffID; // 0x6C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEONGROUPCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::TreasureDungeonGroupConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TreasureDungeonGroupConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEONGROUPCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
