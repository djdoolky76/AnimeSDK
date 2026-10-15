#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FakeSkillConfig; }

#define RPG_GAMECORE_FAKESKILLCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D695DB0)
#define RPG_GAMECORE_FAKESKILLCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D695C50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FakeSkillConfig_TypeDefinitionIndex = 18191;

	class FakeSkillConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean IsFakeSkill; // 0x10
		::System::Boolean PendingUltraSkill; // 0x11
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FAKESKILLCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FakeSkillConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FakeSkillConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FAKESKILLCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
