#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISource.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ComplexSkillAISourceMaxSkillTagWeight; }

#define RPG_GAMECORE_COMPLEXSKILLAISOURCEMAXSKILLTAGWEIGHT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A2FD0)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCEMAXSKILLTAGWEIGHT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5A2FE0)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCEMAXSKILLTAGWEIGHT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5A2EE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAISourceMaxSkillTagWeight_TypeDefinitionIndex = 15537;

	class ComplexSkillAISourceMaxSkillTagWeight : public ::RPG::GameCore::ComplexSkillAISource
	{
	public:
		::System::Boolean IsTarget; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEMAXSKILLTAGWEIGHT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAISourceMaxSkillTagWeight* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAISourceMaxSkillTagWeight*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEMAXSKILLTAGWEIGHT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAISourceMaxSkillTagWeight* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAISourceMaxSkillTagWeight*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEMAXSKILLTAGWEIGHT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
