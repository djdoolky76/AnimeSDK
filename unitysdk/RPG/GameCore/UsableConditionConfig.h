#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/UseSkillErrorCode.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicToastConfig; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class UsableConditionConfig; }

#define RPG_GAMECORE_USABLECONDITIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC78E70)
#define RPG_GAMECORE_USABLECONDITIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC78D30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UsableConditionConfig_TypeDefinitionIndex = 18187;

	class UsableConditionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::PredicateConfig* UsableCondition; // 0x10
		::RPG::GameCore::UseSkillErrorCode UnusableErrorCode; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicToastConfig* UnusableTip; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_USABLECONDITIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::UsableConditionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UsableConditionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_USABLECONDITIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
