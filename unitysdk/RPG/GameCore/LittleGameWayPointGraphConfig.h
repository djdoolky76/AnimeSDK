#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameWayPointGraphConfig; }
namespace RPG::GameCore { class LittleGameWayPointGraphEdge; }

#define RPG_GAMECORE_LITTLEGAMEWAYPOINTGRAPHCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7E77E0)
#define RPG_GAMECORE_LITTLEGAMEWAYPOINTGRAPHCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7E77F0)
#define RPG_GAMECORE_LITTLEGAMEWAYPOINTGRAPHCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7E7780)

namespace RPG::GameCore
{
	class LittleGameWayPointGraphConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::Il2CppArray<::RPG::MVector3>* Points; // 0x10
		::Il2CppArray<::RPG::GameCore::LittleGameWayPointGraphEdge*>* Edges; // 0x18
		::System::Single BezierMaxDistance; // 0x20
		::System::Single BezierContrlRatio; // 0x24
		::System::Single BezierT; // 0x28
		::System::Single BezierMaxAngle; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEWAYPOINTGRAPHCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameWayPointGraphConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameWayPointGraphConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEWAYPOINTGRAPHCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameWayPointGraphConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameWayPointGraphConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEWAYPOINTGRAPHCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
