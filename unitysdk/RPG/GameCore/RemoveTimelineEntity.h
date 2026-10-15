#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RemoveTimelineEntity; }
namespace RPG::GameCore { class TimelineEntityConfig; }

#define RPG_GAMECORE_REMOVETIMELINEENTITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D959360)
#define RPG_GAMECORE_REMOVETIMELINEENTITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D959370)
#define RPG_GAMECORE_REMOVETIMELINEENTITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D959330)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RemoveTimelineEntity_TypeDefinitionIndex = 20633;

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
