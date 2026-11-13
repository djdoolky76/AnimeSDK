#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class NNLPMCPJJIM;
namespace RPG::GameCore { class ILBattleAvatarSkillConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_ILBATTLEAVATARSKILLCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE80D30)
#define RPG_GAMECORE_ILBATTLEAVATARSKILLCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EE807E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ILBattleAvatarSkillConfigRow_TypeDefinitionIndex = 13941;

	class ILBattleAvatarSkillConfigRow : public ::System::Object
	{
	public:
		::System::String* SkillNameKey; // 0x10
		::Il2CppArray<::NNLPMCPJJIM*>* ParamList; // 0x18
		::System::String* SkillTriggerKey; // 0x20
		::System::UInt32 ID; // 0x28
		::System::UInt32 MaxLevel; // 0x2C
		::System::UInt32 RatedPromotionID; // 0x30
		::RPG::GameCore::AttackType AttackType; // 0x34
		::RPG::Client::TextID SimpleSkillDesc; // 0x38
		::RPG::Client::TextID SkillDesc; // 0x48
		::RPG::GameCore::FixPoint InitialCD; // 0x58
		::RPG::Client::TextID SkillName; // 0x60
		::RPG::GameCore::FixPoint CoolDown; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ILBATTLEAVATARSKILLCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ILBattleAvatarSkillConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ILBattleAvatarSkillConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ILBATTLEAVATARSKILLCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
