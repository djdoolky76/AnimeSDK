#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class RtInsertSkill; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_RTINSERTSKILL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA305D0)
#define RPG_GAMECORE_RTINSERTSKILL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA30610)
#define RPG_GAMECORE_RTINSERTSKILL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA30570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtInsertSkill_TypeDefinitionIndex = 24218;

	class RtInsertSkill : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* SkillName; // 0x20
		::RPG::GameCore::TargetEvaluator* SkillTargetType; // 0x28
		::RPG::GameCore::JsonEnum* Priority; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnInsertAbort; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTINSERTSKILL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtInsertSkill* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtInsertSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTINSERTSKILL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtInsertSkill* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtInsertSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTINSERTSKILL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
