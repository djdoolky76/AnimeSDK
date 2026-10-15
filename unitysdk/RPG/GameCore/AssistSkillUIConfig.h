#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AssistSkillUIConfig; }
namespace RPG::GameCore { class HimekoNovaAssistSkillUIConfig; }

#define RPG_GAMECORE_ASSISTSKILLUICONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3CABB0)
#define RPG_GAMECORE_ASSISTSKILLUICONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3CAB20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AssistSkillUIConfig_TypeDefinitionIndex = 18194;

	class AssistSkillUIConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::HimekoNovaAssistSkillUIConfig* HimekoNovaAssistSkillUIConfig; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTSKILLUICONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AssistSkillUIConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AssistSkillUIConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTSKILLUICONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
