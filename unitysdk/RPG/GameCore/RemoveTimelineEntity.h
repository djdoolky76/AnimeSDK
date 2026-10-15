#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RemoveTimelineEntity; }
namespace RPG::GameCore { class TimelineEntityConfig; }

#define RPG_GAMECORE_REMOVETIMELINEENTITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D986CD0)
#define RPG_GAMECORE_REMOVETIMELINEENTITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D986CE0)
#define RPG_GAMECORE_REMOVETIMELINEENTITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D986CA0)

namespace RPG::GameCore
{
	class RemoveTimelineEntity : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TimelineEntityConfig*>* Target; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVETIMELINEENTITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RemoveTimelineEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RemoveTimelineEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVETIMELINEENTITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RemoveTimelineEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RemoveTimelineEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVETIMELINEENTITY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
