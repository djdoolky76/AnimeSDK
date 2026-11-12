#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierAddNpcAndBonusRuleConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDNPCANDBONUSRULECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E93F9E0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDNPCANDBONUSRULECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E93F9A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAddNpcAndBonusRuleConfig_TypeDefinitionIndex = 19798;

	class GridFightModifierAddNpcAndBonusRuleConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDNPCANDBONUSRULECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAddNpcAndBonusRuleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAddNpcAndBonusRuleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDNPCANDBONUSRULECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
