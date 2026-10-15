#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MultiPlayerGameMode.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarblePVPRankConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_MARBLEPVPRANKCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8431D0)
#define RPG_GAMECORE_MARBLEPVPRANKCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D842E00)

namespace RPG::GameCore
{
	class MarblePVPRankConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* LevelPool; // 0x10
		::System::String* SmallIconPath; // 0x18
		::Il2CppArray<::System::UInt32>* ScoreArea; // 0x20
		::System::String* BigIconPath; // 0x28
		::System::String* IconPath; // 0x30
		::RPG::GameCore::MultiPlayerGameMode GameMode; // 0x38
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID Name; // 0x40
		::System::UInt32 Rank; // 0x50
		::System::UInt32 ID; // 0x54
		::System::UInt32 TimeOutAIRank; // 0x58
		::System::UInt32 LoseAIRank; // 0x5C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEPVPRANKCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarblePVPRankConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarblePVPRankConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEPVPRANKCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
