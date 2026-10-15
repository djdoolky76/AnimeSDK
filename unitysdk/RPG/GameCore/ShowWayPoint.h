#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowWayPoint; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SHOWWAYPOINT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE8000)
#define RPG_GAMECORE_SHOWWAYPOINT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAE8030)
#define RPG_GAMECORE_SHOWWAYPOINT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAE7FB0)

namespace RPG::GameCore
{
	class ShowWayPoint : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Int32 MinRange; // 0x20
		::System::Int32 MaxRange; // 0x24
		::System::String* IconPath; // 0x28
		::System::String* PrefabPath; // 0x30
		::RPG::MVector3 Offset; // 0x38
		::System::Boolean OnNameBoard; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWWAYPOINT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowWayPoint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowWayPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWWAYPOINT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowWayPoint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowWayPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWWAYPOINT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
