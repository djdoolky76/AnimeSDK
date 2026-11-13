#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/ChessRogueAreaGroupID.h"
#include "unitysdk/RPG/GameCore/ChessRogueDifficultyType.h"
#include "unitysdk/RPG/GameCore/RogueSubMode.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class GGONADMNDLP;
namespace RPG::GameCore { class RogueDLCAreaRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUEDLCAREAROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1F572A00)
#define RPG_GAMECORE_ROGUEDLCAREAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1F571F60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCAreaRow_TypeDefinitionIndex = 14919;

	class RogueDLCAreaRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* DifficultyID; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* DisplayMonsterMap; // 0x18
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* RecommendNature; // 0x20
		::Il2CppArray<::GGONADMNDLP*>* AreaScoreMap; // 0x28
		::Il2CppArray<::System::UInt32>* LayerIDList; // 0x30
		::System::UInt32 AreaID; // 0x38
		::System::UInt32 UnlockID; // 0x3C
		::System::UInt32 MonsterEliteDropDisplayID; // 0x40
		::System::UInt32 RecommendLevel; // 0x44
		::RPG::Client::TextID AreaNameID; // 0x48
		::RPG::Client::TextID AreaDescID; // 0x58
		::RPG::GameCore::RogueSubMode SubType; // 0x68
		::RPG::GameCore::ChessRogueAreaGroupID AreaGroupID; // 0x6C
		::System::UInt32 FirstReward; // 0x70
		::RPG::GameCore::ChessRogueDifficultyType Difficulty; // 0x74
		::System::Boolean IsHard; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAREAROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueDLCAreaRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueDLCAreaRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAREAROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
