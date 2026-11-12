#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ILBattleMonsterSkillConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_ILBATTLEMONSTERSKILLCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E989F80)
#define RPG_GAMECORE_ILBATTLEMONSTERSKILLCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E989B80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ILBattleMonsterSkillConfigRow_TypeDefinitionIndex = 13952;

	class ILBattleMonsterSkillConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x10
		::System::String* SkillTriggerKey; // 0x18
		::RPG::Client::TextID SkillDesc; // 0x20
		::RPG::GameCore::AttackType AttackType; // 0x30
		::System::UInt32 ID; // 0x34
		::RPG::GameCore::FixPoint CoolDown; // 0x38
		::RPG::GameCore::FixPoint InitialCD; // 0x40
		::RPG::Client::TextID SkillName; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ILBATTLEMONSTERSKILLCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ILBattleMonsterSkillConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ILBattleMonsterSkillConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ILBATTLEMONSTERSKILLCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
