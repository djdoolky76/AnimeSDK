#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RevertActionEntityToObserveState; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_REVERTACTIONENTITYTOOBSERVESTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D96BC00)
#define RPG_GAMECORE_REVERTACTIONENTITYTOOBSERVESTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D96BC10)
#define RPG_GAMECORE_REVERTACTIONENTITYTOOBSERVESTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D96BBD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RevertActionEntityToObserveState_TypeDefinitionIndex = 23453;

	class RevertActionEntityToObserveState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REVERTACTIONENTITYTOOBSERVESTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RevertActionEntityToObserveState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RevertActionEntityToObserveState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REVERTACTIONENTITYTOOBSERVESTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RevertActionEntityToObserveState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RevertActionEntityToObserveState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REVERTACTIONENTITYTOOBSERVESTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
