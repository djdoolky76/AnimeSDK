#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PointGeneratorConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CirclePointGeneratorConfig; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_CIRCLEPOINTGENERATORCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5B31C0)
#define RPG_GAMECORE_CIRCLEPOINTGENERATORCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5B31D0)
#define RPG_GAMECORE_CIRCLEPOINTGENERATORCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5B3180)

namespace RPG::GameCore
{
	class CirclePointGeneratorConfig : public ::RPG::GameCore::PointGeneratorConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x10
		::System::Single StartAngle; // 0x18
		::System::Single DistanceInerval; // 0x1C
		::System::Single AngleInterval; // 0x20
		::System::UInt32 DistanceInervalRepeatCount; // 0x24
		::System::Single MaxAngle; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CIRCLEPOINTGENERATORCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CirclePointGeneratorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CirclePointGeneratorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CIRCLEPOINTGENERATORCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CirclePointGeneratorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CirclePointGeneratorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CIRCLEPOINTGENERATORCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
