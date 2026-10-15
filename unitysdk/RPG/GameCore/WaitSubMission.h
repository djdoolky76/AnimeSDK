#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WaitSubMission; }

#define RPG_GAMECORE_WAITSUBMISSION_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC75050)
#define RPG_GAMECORE_WAITSUBMISSION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC75060)
#define RPG_GAMECORE_WAITSUBMISSION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC75020)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitSubMission_TypeDefinitionIndex = 21698;

	class WaitSubMission : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 SubMissionID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSUBMISSION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitSubMission* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitSubMission*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSUBMISSION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitSubMission* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitSubMission*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSUBMISSION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
