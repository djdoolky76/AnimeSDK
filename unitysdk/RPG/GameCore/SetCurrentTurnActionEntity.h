#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetCurrentTurnActionEntity; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETCURRENTTURNACTIONENTITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA702D0)
#define RPG_GAMECORE_SETCURRENTTURNACTIONENTITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA70310)
#define RPG_GAMECORE_SETCURRENTTURNACTIONENTITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA70270)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetCurrentTurnActionEntity_TypeDefinitionIndex = 23667;

	class SetCurrentTurnActionEntity : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCURRENTTURNACTIONENTITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetCurrentTurnActionEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetCurrentTurnActionEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCURRENTTURNACTIONENTITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetCurrentTurnActionEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetCurrentTurnActionEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCURRENTTURNACTIONENTITY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
