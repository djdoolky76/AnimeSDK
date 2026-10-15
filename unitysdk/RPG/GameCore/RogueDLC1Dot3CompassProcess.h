#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueDLC1Dot3CompassProcess; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ROGUEDLC1DOT3COMPASSPROCESS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D985840)
#define RPG_GAMECORE_ROGUEDLC1DOT3COMPASSPROCESS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D985850)
#define RPG_GAMECORE_ROGUEDLC1DOT3COMPASSPROCESS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D985810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLC1Dot3CompassProcess_TypeDefinitionIndex = 22280;

	class RogueDLC1Dot3CompassProcess : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Compass; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLC1DOT3COMPASSPROCESS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueDLC1Dot3CompassProcess* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueDLC1Dot3CompassProcess*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLC1DOT3COMPASSPROCESS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueDLC1Dot3CompassProcess* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueDLC1Dot3CompassProcess*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLC1DOT3COMPASSPROCESS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
