#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AddFinishMissionData_ResultValue; }

#define RPG_GAMECORE_ADDFINISHMISSIONDATA_RESULTVALUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3875C0)
#define RPG_GAMECORE_ADDFINISHMISSIONDATA_RESULTVALUE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3875D0)
#define RPG_GAMECORE_ADDFINISHMISSIONDATA_RESULTVALUE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D387590)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddFinishMissionData_ResultValue_TypeDefinitionIndex = 21576;

	class AddFinishMissionData_ResultValue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 SubmissionID; // 0x18
		::System::UInt32 MissionResultValue; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDFINISHMISSIONDATA_RESULTVALUE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddFinishMissionData_ResultValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddFinishMissionData_ResultValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDFINISHMISSIONDATA_RESULTVALUE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddFinishMissionData_ResultValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddFinishMissionData_ResultValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDFINISHMISSIONDATA_RESULTVALUE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
