#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ReShaEasterEggStateListener; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_RESHAEASTEREGGSTATELISTENER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D96E160)
#define RPG_GAMECORE_RESHAEASTEREGGSTATELISTENER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D96E190)
#define RPG_GAMECORE_RESHAEASTEREGGSTATELISTENER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D96E110)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ReShaEasterEggStateListener_TypeDefinitionIndex = 22032;

	class ReShaEasterEggStateListener : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean Enable; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESHAEASTEREGGSTATELISTENER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ReShaEasterEggStateListener* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ReShaEasterEggStateListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESHAEASTEREGGSTATELISTENER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ReShaEasterEggStateListener* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ReShaEasterEggStateListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESHAEASTEREGGSTATELISTENER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
