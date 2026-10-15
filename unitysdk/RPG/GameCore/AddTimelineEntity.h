#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AddTimelineEntity; }
namespace RPG::GameCore { class TimelineEntityConfig; }

#define RPG_GAMECORE_ADDTIMELINEENTITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D38C8B0)
#define RPG_GAMECORE_ADDTIMELINEENTITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D38C8C0)
#define RPG_GAMECORE_ADDTIMELINEENTITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D38C880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddTimelineEntity_TypeDefinitionIndex = 20632;

	class AddTimelineEntity : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TimelineEntityConfig*>* Target; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDTIMELINEENTITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddTimelineEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddTimelineEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDTIMELINEENTITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddTimelineEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddTimelineEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDTIMELINEENTITY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
