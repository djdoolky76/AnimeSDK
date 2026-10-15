#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EWaitFaceToTaskFinishMode.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvEntityFaceTo; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_ADVENTITYFACETO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D39D5F0)
#define RPG_GAMECORE_ADVENTITYFACETO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D39D620)
#define RPG_GAMECORE_ADVENTITYFACETO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D39D5A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvEntityFaceTo_TypeDefinitionIndex = 20545;

	class AdvEntityFaceTo : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* SourceType; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Boolean EnableSteer; // 0x28
		::System::Boolean EnableLookAt; // 0x29
		::System::Byte _padding0[0x6];
		::System::String* LookAtPoint; // 0x30
		::System::Boolean SteerImmediately; // 0x38
		::System::Boolean FinishImmediately; // 0x39
		::System::Byte _padding1[0x2];
		::RPG::GameCore::EWaitFaceToTaskFinishMode WaitFinishMode; // 0x3C
		::System::Boolean ForceToStandBy; // 0x40
		::System::Boolean TurnBackOnGraphEnd; // 0x41
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTITYFACETO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvEntityFaceTo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvEntityFaceTo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTITYFACETO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvEntityFaceTo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvEntityFaceTo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTITYFACETO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
