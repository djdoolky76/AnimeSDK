#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamLocationType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattleEntityWhiteBoxData; }
namespace RPG::GameCore { class CreateBattleCharacter; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_CREATEBATTLECHARACTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5E0D90)
#define RPG_GAMECORE_CREATEBATTLECHARACTER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5E0DD0)
#define RPG_GAMECORE_CREATEBATTLECHARACTER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5E0D30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CreateBattleCharacter_TypeDefinitionIndex = 22754;

	class CreateBattleCharacter : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::UInt32 AvatarID; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* EnhancedID; // 0x28
		::RPG::GameCore::DynamicFloat* Level; // 0x30
		::RPG::GameCore::DynamicFloat* Promotion; // 0x38
		::RPG::GameCore::DynamicFloat* Rank; // 0x40
		::RPG::GameCore::TeamLocationType LocationType; // 0x48
		::System::Byte _padding1[0x4];
		::System::String* InitAnimStateName; // 0x50
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnCreate; // 0x58
		::RPG::GameCore::BattleEntityWhiteBoxData* CharacterData; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEBATTLECHARACTER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CreateBattleCharacter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CreateBattleCharacter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEBATTLECHARACTER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CreateBattleCharacter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CreateBattleCharacter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEBATTLECHARACTER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
