#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MultiPlayerGameMode.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleSealRow; }
namespace System { class String; }

#define RPG_GAMECORE_MARBLESEALROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB4E7A0)
#define RPG_GAMECORE_MARBLESEALROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EB4DE60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleSealRow_TypeDefinitionIndex = 11904;

	class MarbleSealRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::String* Name; // 0x18
		::System::String* Desc; // 0x20
		::Il2CppArray<::System::UInt32>* BuffIDList; // 0x28
		::System::String* EnemyIconPath; // 0x30
		::System::String* PrefabPath; // 0x38
		::System::String* SmallIconPath; // 0x40
		::System::String* SmallEnemyIconPath; // 0x48
		::Il2CppArray<::System::UInt32>* CommonTalkIDList; // 0x50
		::System::String* VoiceType; // 0x58
		::System::UInt32 Price; // 0x60
		::System::UInt32 UnlockBuySubMissionID; // 0x64
		::System::UInt32 ShopTalkID; // 0x68
		::System::UInt32 LevelUpPriority; // 0x6C
		::RPG::Client::TextID UnlockHint; // 0x70
		::RPG::GameCore::MultiPlayerGameMode GameMode; // 0x80
		::System::Int32 Attack; // 0x84
		::System::Int32 Hp; // 0x88
		::System::Single Mass; // 0x8C
		::System::UInt32 AiStrategyID; // 0x90
		::System::Single MaxSpeed; // 0x94
		::System::UInt32 ActivityID; // 0x98
		::System::UInt32 ActionPriority; // 0x9C
		::System::Boolean IsShow; // 0xA0
		::System::Byte _padding0[0x3];
		::System::Single Size; // 0xA4
		::System::UInt32 VideoID; // 0xA8
		::System::UInt32 ID; // 0xAC
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
