#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MultiPlayerGameMode.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleSealRow; }
namespace System { class String; }

#define RPG_GAMECORE_MARBLESEALROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA62720)
#define RPG_GAMECORE_MARBLESEALROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EA61DE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleSealRow_TypeDefinitionIndex = 11904;

	class MarbleSealRow : public ::System::Object
	{
	public:
		::System::String* EnemyIconPath; // 0x10
		::System::String* SmallEnemyIconPath; // 0x18
		::System::String* Name; // 0x20
		::System::String* IconPath; // 0x28
		::System::String* VoiceType; // 0x30
		::System::String* Desc; // 0x38
		::System::String* PrefabPath; // 0x40
		::System::String* SmallIconPath; // 0x48
		::Il2CppArray<::System::UInt32>* BuffIDList; // 0x50
		::Il2CppArray<::System::UInt32>* CommonTalkIDList; // 0x58
		::System::UInt32 AiStrategyID; // 0x60
		::System::UInt32 VideoID; // 0x64
		::System::UInt32 ID; // 0x68
		::System::UInt32 ActionPriority; // 0x6C
		::System::Int32 Attack; // 0x70
		::System::UInt32 ShopTalkID; // 0x74
		::System::UInt32 Price; // 0x78
		::System::UInt32 LevelUpPriority; // 0x7C
		::System::Int32 Hp; // 0x80
		::System::UInt32 UnlockBuySubMissionID; // 0x84
		::RPG::Client::TextID UnlockHint; // 0x88
		::System::UInt32 ActivityID; // 0x98
		::RPG::GameCore::MultiPlayerGameMode GameMode; // 0x9C
		::System::Single Size; // 0xA0
		::System::Single MaxSpeed; // 0xA4
		::System::Boolean IsShow; // 0xA8
		::System::Byte _padding0[0x3];
		::System::Single Mass; // 0xAC
		::System::UInt32 UnlockShowSubMissionID; // 0xB0
		::System::UInt32 UnlockSubMissionID; // 0xB4
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESEALROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleSealRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleSealRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESEALROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
