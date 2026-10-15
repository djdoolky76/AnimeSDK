#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameWayPointGraphEdge; }

#define RPG_GAMECORE_LITTLEGAMEWAYPOINTGRAPHEDGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7E7B70)
#define RPG_GAMECORE_LITTLEGAMEWAYPOINTGRAPHEDGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7E7A50)

namespace RPG::GameCore
{
	class LittleGameWayPointGraphEdge : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 PointIndexA; // 0x10
		::System::UInt32 PointIndexB; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEWAYPOINTGRAPHEDGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameWayPointGraphEdge* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameWayPointGraphEdge*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEWAYPOINTGRAPHEDGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
