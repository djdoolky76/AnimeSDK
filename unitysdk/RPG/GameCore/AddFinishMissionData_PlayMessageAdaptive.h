#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PhoneMessagePlayMode.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AddFinishMissionData_PlayMessageAdaptive; }

#define RPG_GAMECORE_ADDFINISHMISSIONDATA_PLAYMESSAGEADAPTIVE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D387320)
#define RPG_GAMECORE_ADDFINISHMISSIONDATA_PLAYMESSAGEADAPTIVE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D387330)
#define RPG_GAMECORE_ADDFINISHMISSIONDATA_PLAYMESSAGEADAPTIVE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3872E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddFinishMissionData_PlayMessageAdaptive_TypeDefinitionIndex = 21938;

	class AddFinishMissionData_PlayMessageAdaptive : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 SubmissionID; // 0x18
		::System::UInt32 MessageSectionID; // 0x1C
		::System::Boolean ShowNotice; // 0x20
		::System::Byte _padding0[0x3];
		::RPG::GameCore::PhoneMessagePlayMode PlayMode; // 0x24
		::System::Boolean EnableUIDOF; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDFINISHMISSIONDATA_PLAYMESSAGEADAPTIVE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddFinishMissionData_PlayMessageAdaptive* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddFinishMissionData_PlayMessageAdaptive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDFINISHMISSIONDATA_PLAYMESSAGEADAPTIVE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddFinishMissionData_PlayMessageAdaptive* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddFinishMissionData_PlayMessageAdaptive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDFINISHMISSIONDATA_PLAYMESSAGEADAPTIVE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
