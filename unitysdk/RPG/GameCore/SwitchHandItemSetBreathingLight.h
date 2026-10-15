#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwitchHandItemSetBreathingLight; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SWITCHHANDITEMSETBREATHINGLIGHT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB14B00)
#define RPG_GAMECORE_SWITCHHANDITEMSETBREATHINGLIGHT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB14B10)
#define RPG_GAMECORE_SWITCHHANDITEMSETBREATHINGLIGHT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB14AC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchHandItemSetBreathingLight_TypeDefinitionIndex = 20971;

	class SwitchHandItemSetBreathingLight : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean Enable; // 0x20
		::System::Boolean EnableItem; // 0x21
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDITEMSETBREATHINGLIGHT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchHandItemSetBreathingLight* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchHandItemSetBreathingLight*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDITEMSETBREATHINGLIGHT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchHandItemSetBreathingLight* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchHandItemSetBreathingLight*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDITEMSETBREATHINGLIGHT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
