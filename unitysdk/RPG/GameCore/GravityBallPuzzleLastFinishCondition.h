#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class GravityBallCondition; }
namespace RPG::GameCore { class GravityBallPuzzleLastFinishCondition; }

#define RPG_GAMECORE_GRAVITYBALLPUZZLELASTFINISHCONDITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7237D0)
#define RPG_GAMECORE_GRAVITYBALLPUZZLELASTFINISHCONDITION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7237E0)
#define RPG_GAMECORE_GRAVITYBALLPUZZLELASTFINISHCONDITION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7237A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GravityBallPuzzleLastFinishCondition_TypeDefinitionIndex = 20382;

	class GravityBallPuzzleLastFinishCondition : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* DefaultGroupEvent; // 0x18
		::Il2CppArray<::RPG::GameCore::GravityBallCondition*>* ConditionLogic; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRAVITYBALLPUZZLELASTFINISHCONDITION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GravityBallPuzzleLastFinishCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GravityBallPuzzleLastFinishCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRAVITYBALLPUZZLELASTFINISHCONDITION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GravityBallPuzzleLastFinishCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GravityBallPuzzleLastFinishCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRAVITYBALLPUZZLELASTFINISHCONDITION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
