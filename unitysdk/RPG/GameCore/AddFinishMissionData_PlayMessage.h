#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AddFinishMissionData_PlayMessage; }

#define RPG_GAMECORE_ADDFINISHMISSIONDATA_PLAYMESSAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D387120)
#define RPG_GAMECORE_ADDFINISHMISSIONDATA_PLAYMESSAGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D387130)
#define RPG_GAMECORE_ADDFINISHMISSIONDATA_PLAYMESSAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3870E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddFinishMissionData_PlayMessage_TypeDefinitionIndex = 21937;

	class AddFinishMissionData_PlayMessage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 SubmissionID; // 0x18
		::System::UInt32 MessageSectionID; // 0x1C
		::System::Boolean ShowNotice; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDFINISHMISSIONDATA_PLAYMESSAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddFinishMissionData_PlayMessage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddFinishMissionData_PlayMessage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDFINISHMISSIONDATA_PLAYMESSAGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddFinishMissionData_PlayMessage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddFinishMissionData_PlayMessage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDFINISHMISSIONDATA_PLAYMESSAGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
