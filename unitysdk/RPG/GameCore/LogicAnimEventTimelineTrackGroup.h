#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LogicAnimEventTimelineTrackGroup; }

#define RPG_GAMECORE_LOGICANIMEVENTTIMELINETRACKGROUP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7F3DA0)
#define RPG_GAMECORE_LOGICANIMEVENTTIMELINETRACKGROUP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7F3D60)

namespace RPG::GameCore
{
	class LogicAnimEventTimelineTrackGroup : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOGICANIMEVENTTIMELINETRACKGROUP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LogicAnimEventTimelineTrackGroup* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LogicAnimEventTimelineTrackGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOGICANIMEVENTTIMELINETRACKGROUP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
