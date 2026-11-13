#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AttachPreshowDamageTypeForSkill; }
namespace RPG::GameCore { class AttackDamageTypeConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_ATTACHPRESHOWDAMAGETYPEFORSKILL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEB99F0)
#define RPG_GAMECORE_ATTACHPRESHOWDAMAGETYPEFORSKILL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DEB9A00)
#define RPG_GAMECORE_ATTACHPRESHOWDAMAGETYPEFORSKILL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DEB99C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AttachPreshowDamageTypeForSkill_TypeDefinitionIndex = 23261;

	class AttachPreshowDamageTypeForSkill : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsCancel; // 0x18
		::System::Byte _padding0[0x7];
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::Il2CppArray<::System::String*>* SkillNameList; // 0x28
		::RPG::GameCore::AttackDamageTypeConfig* WeakType; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATTACHPRESHOWDAMAGETYPEFORSKILL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AttachPreshowDamageTypeForSkill* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AttachPreshowDamageTypeForSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATTACHPRESHOWDAMAGETYPEFORSKILL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AttachPreshowDamageTypeForSkill* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AttachPreshowDamageTypeForSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATTACHPRESHOWDAMAGETYPEFORSKILL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
