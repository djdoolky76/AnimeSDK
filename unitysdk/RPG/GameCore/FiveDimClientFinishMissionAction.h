#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimClientFinishMissionAction; }

#define RPG_GAMECORE_FIVEDIMCLIENTFINISHMISSIONACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B5D90)
#define RPG_GAMECORE_FIVEDIMCLIENTFINISHMISSIONACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6B5DA0)
#define RPG_GAMECORE_FIVEDIMCLIENTFINISHMISSIONACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6B5CF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimClientFinishMissionAction_TypeDefinitionIndex = 18779;

	class FiveDimClientFinishMissionAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::UInt32 SubmissionID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCLIENTFINISHMISSIONACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimClientFinishMissionAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimClientFinishMissionAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCLIENTFINISHMISSIONACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimClientFinishMissionAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimClientFinishMissionAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCLIENTFINISHMISSIONACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
