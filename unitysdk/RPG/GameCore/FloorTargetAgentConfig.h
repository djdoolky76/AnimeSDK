#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FloorCustomValueConfig.h"
#include "unitysdk/RPG/GameCore/FloorInstanceType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FloorTargetAgentConfig; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_FLOORTARGETAGENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6E63C0)
#define RPG_GAMECORE_FLOORTARGETAGENTCONFIG_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D6E71E0)
#define RPG_GAMECORE_FLOORTARGETAGENTCONFIG_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D6E6B40)
#define RPG_GAMECORE_FLOORTARGETAGENTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6E63D0)
#define RPG_GAMECORE_FLOORTARGETAGENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6E71B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FloorTargetAgentConfig_TypeDefinitionIndex = 18285;

	class FloorTargetAgentConfig : public ::RPG::GameCore::FloorCustomValueConfig
	{
	public:
		::RPG::GameCore::FloorInstanceType AgentType; // 0x20
		::System::UInt32 GroupID; // 0x24
		::System::UInt32 InstanceID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORTARGETAGENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FloorTargetAgentConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FloorTargetAgentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORTARGETAGENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FloorTargetAgentConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FloorTargetAgentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORTARGETAGENTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FloorTargetAgentConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FloorTargetAgentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORTARGETAGENTCONFIG_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FloorTargetAgentConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FloorTargetAgentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORTARGETAGENTCONFIG_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
