#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CutInSourceType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowSkillCutIn; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SHOWSKILLCUTIN_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE4A70)
#define RPG_GAMECORE_SHOWSKILLCUTIN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAE4A80)
#define RPG_GAMECORE_SHOWSKILLCUTIN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAE4A40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowSkillCutIn_TypeDefinitionIndex = 22951;

	class ShowSkillCutIn : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::CutInSourceType Type; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* SkillTriggerKey; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28
		::System::UInt32 ParamID; // 0x30
		::System::UInt32 ParamID2; // 0x34
		::System::String* ParamStr; // 0x38
		::System::Single ParamFloat; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWSKILLCUTIN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowSkillCutIn* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowSkillCutIn*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWSKILLCUTIN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowSkillCutIn* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowSkillCutIn*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWSKILLCUTIN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
