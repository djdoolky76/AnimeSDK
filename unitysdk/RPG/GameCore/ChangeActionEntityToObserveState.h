#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChangeActionEntityToObserveState; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_CHANGEACTIONENTITYTOOBSERVESTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D563C80)
#define RPG_GAMECORE_CHANGEACTIONENTITYTOOBSERVESTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D563C90)
#define RPG_GAMECORE_CHANGEACTIONENTITYTOOBSERVESTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D563C40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChangeActionEntityToObserveState_TypeDefinitionIndex = 23452;

	class ChangeActionEntityToObserveState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* StateName; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEACTIONENTITYTOOBSERVESTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChangeActionEntityToObserveState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChangeActionEntityToObserveState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEACTIONENTITYTOOBSERVESTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChangeActionEntityToObserveState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChangeActionEntityToObserveState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEACTIONENTITYTOOBSERVESTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
