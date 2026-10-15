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

#define RPG_GAMECORE_ILBATTLEAVATARSKILLCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D747EE0)
#define RPG_GAMECORE_ILBATTLEAVATARSKILLCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D747990)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ILBattleAvatarSkillConfigRow_TypeDefinitionIndex = 13784;

	class ILBattleAvatarSkillConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::NNLPMCPJJIM*>* ParamList; // 0x10
		::System::String* SkillNameKey; // 0x18
		::System::String* SkillTriggerKey; // 0x20
		::RPG::Client::TextID SimpleSkillDesc; // 0x28
		::RPG::Client::TextID SkillName; // 0x38
		::System::UInt32 RatedPromotionID; // 0x48
		::System::UInt32 MaxLevel; // 0x4C
		::RPG::GameCore::FixPoint CoolDown; // 0x50
		::RPG::Client::TextID SkillDesc; // 0x58
		::RPG::GameCore::FixPoint InitialCD; // 0x68
		::RPG::GameCore::AttackType AttackType; // 0x70
		::System::UInt32 ID; // 0x74
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
