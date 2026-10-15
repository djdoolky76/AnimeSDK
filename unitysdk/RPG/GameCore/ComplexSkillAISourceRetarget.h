#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AISourceRetargetType.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAIListCombineType.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISource.h"
#include "unitysdk/RPG/GameCore/TeamTypeMask.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ComplexSkillAISource; }
namespace RPG::GameCore { class ComplexSkillAISourceRetarget; }

#define RPG_GAMECORE_COMPLEXSKILLAISOURCERETARGET_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D1BF0)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCERETARGET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5D1C00)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCERETARGET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5D1BB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAISourceRetarget_TypeDefinitionIndex = 15539;

	class ComplexSkillAISourceRetarget : public ::RPG::GameCore::ComplexSkillAISource
	{
	public:
		::RPG::GameCore::AISourceRetargetType Retarget; // 0x10
		::RPG::GameCore::TeamTypeMask TeamTypeMask; // 0x14
		::RPG::GameCore::ComplexSkillAISource* Evaluator; // 0x18
		::RPG::GameCore::ComplexSkillAIListCombineType ListCombineType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCERETARGET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAISourceRetarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAISourceRetarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCERETARGET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAISourceRetarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAISourceRetarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCERETARGET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
