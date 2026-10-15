#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattleEntityPromotionWhiteBoxData; }
namespace RPG::GameCore { class BattleEntitySkillWhiteBoxData; }
namespace RPG::GameCore { class BattleEntityWhiteBoxData; }
namespace System { class String; }

#define RPG_GAMECORE_BATTLEENTITYWHITEBOXDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D42A460)
#define RPG_GAMECORE_BATTLEENTITYWHITEBOXDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D429F70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleEntityWhiteBoxData_TypeDefinitionIndex = 22753;

	class BattleEntityWhiteBoxData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 AvatarID; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID CharacterName; // 0x18
		::System::String* JsonPath; // 0x28
		::System::String* ModelPath; // 0x30
		::System::String* HeadIconPath; // 0x38
		::System::String* ActionIconPath; // 0x40
		::System::String* AIPath; // 0x48
		::RPG::GameCore::AttackDamageType DamageType; // 0x50
		::System::Byte _padding1[0x4];
		::RPG::GameCore::FixPoint SPNeed; // 0x58
		::RPG::GameCore::AvatarBaseType AvatarBaseType; // 0x60
		::System::Byte _padding2[0x4];
		::System::String* AvatarVOTag; // 0x68
		::Il2CppArray<::RPG::GameCore::BattleEntityPromotionWhiteBoxData*>* PromotionList; // 0x70
		::Il2CppArray<::RPG::GameCore::BattleEntitySkillWhiteBoxData*>* SkillList; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEENTITYWHITEBOXDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattleEntityWhiteBoxData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattleEntityWhiteBoxData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEENTITYWHITEBOXDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
