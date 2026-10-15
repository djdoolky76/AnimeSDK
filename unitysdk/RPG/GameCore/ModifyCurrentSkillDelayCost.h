#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class ModifyCurrentSkillDelayCost; }

#define RPG_GAMECORE_MODIFYCURRENTSKILLDELAYCOST_CTOR_OFFSET UNITYSDK_OFFSET(0x1D891780)
#define RPG_GAMECORE_MODIFYCURRENTSKILLDELAYCOST_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D891790)
#define RPG_GAMECORE_MODIFYCURRENTSKILLDELAYCOST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D891740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifyCurrentSkillDelayCost_TypeDefinitionIndex = 22704;

	class ModifyCurrentSkillDelayCost : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* NormalizedValue; // 0x18
		::RPG::GameCore::PropertyModifyFunction ModifyFunction; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYCURRENTSKILLDELAYCOST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifyCurrentSkillDelayCost* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifyCurrentSkillDelayCost*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYCURRENTSKILLDELAYCOST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifyCurrentSkillDelayCost* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifyCurrentSkillDelayCost*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYCURRENTSKILLDELAYCOST_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
