#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SkillCustomFormationConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SKILLCUSTOMFORMATIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAEEDF0)
#define RPG_GAMECORE_SKILLCUSTOMFORMATIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAEE9D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SkillCustomFormationConfig_TypeDefinitionIndex = 18186;

	class SkillCustomFormationConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* FormationTarget; // 0x10
		::System::String* CustomFormationName; // 0x18
		::System::Boolean UseLevelAreaRoot; // 0x20
		::System::Byte _padding0[0x7];
		::RPG::GameCore::TargetEvaluator* CustomCenterTargetType; // 0x28
		::System::Boolean CustomFormationIgnoreDying; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCUSTOMFORMATIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SkillCustomFormationConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SkillCustomFormationConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCUSTOMFORMATIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
