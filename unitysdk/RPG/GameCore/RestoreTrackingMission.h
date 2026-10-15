#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RestoreTrackingMission; }

#define RPG_GAMECORE_RESTORETRACKINGMISSION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D969A20)
#define RPG_GAMECORE_RESTORETRACKINGMISSION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D969A30)
#define RPG_GAMECORE_RESTORETRACKINGMISSION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D969960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestoreTrackingMission_TypeDefinitionIndex = 20763;

	class RestoreTrackingMission : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTORETRACKINGMISSION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RestoreTrackingMission* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RestoreTrackingMission*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTORETRACKINGMISSION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RestoreTrackingMission* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RestoreTrackingMission*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTORETRACKINGMISSION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
