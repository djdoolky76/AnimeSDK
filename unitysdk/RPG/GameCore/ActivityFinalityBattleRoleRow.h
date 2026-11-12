#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityFinalityBattleRoleRow; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYFINALITYBATTLEROLEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E573780)
#define RPG_GAMECORE_ACTIVITYFINALITYBATTLEROLEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E5732B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityFinalityBattleRoleRow_TypeDefinitionIndex = 11657;

	class ActivityFinalityBattleRoleRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList_ModifiedSkill; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList_Stage; // 0x18
		::System::String* AvatarEnglishName; // 0x20
		::RPG::Client::TextID StageFeverCond; // 0x28
		::System::UInt32 SpecialAvatarID; // 0x38
		::System::UInt32 ID; // 0x3C
		::RPG::Client::TextID AvatarFeverDesc; // 0x40
		::RPG::Client::TextID StageFeverSimpleDesc; // 0x50
		::RPG::Client::TextID StageFeverDesc; // 0x60
		::RPG::Client::TextID AvatarFeverSimpleDesc; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFINALITYBATTLEROLEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityFinalityBattleRoleRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityFinalityBattleRoleRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFINALITYBATTLEROLEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
