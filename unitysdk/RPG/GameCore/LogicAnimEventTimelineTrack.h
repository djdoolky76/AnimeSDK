#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LogicAnimEventTimelineTrack; }

#define RPG_GAMECORE_LOGICANIMEVENTTIMELINETRACK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7F3D50)
#define RPG_GAMECORE_LOGICANIMEVENTTIMELINETRACK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7F3D10)

namespace RPG::GameCore
{
	class LogicAnimEventTimelineTrack : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOGICANIMEVENTTIMELINETRACK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LogicAnimEventTimelineTrack* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LogicAnimEventTimelineTrack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOGICANIMEVENTTIMELINETRACK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
