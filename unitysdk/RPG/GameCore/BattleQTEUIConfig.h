#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattleQTEUIConfig; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_BATTLEQTEUICONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4396F0)
#define RPG_GAMECORE_BATTLEQTEUICONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D439420)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleQTEUIConfig_TypeDefinitionIndex = 23347;

	class BattleQTEUIConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* UIPath; // 0x10
		::System::String* IconPath; // 0x18
		::RPG::GameCore::DynamicFloat* Delay; // 0x20
		::RPG::GameCore::TargetEvaluator* FollowTargetType; // 0x28
		::System::String* FollowAttachPoint; // 0x30
		::System::String* FollowEffectUniqueName; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEQTEUICONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattleQTEUIConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattleQTEUIConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEQTEUICONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
