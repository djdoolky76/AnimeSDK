#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISource.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ComplexSkillAISourceIsServantOwner; }

#define RPG_GAMECORE_COMPLEXSKILLAISOURCEISSERVANTOWNER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D0900)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCEISSERVANTOWNER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5D0910)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCEISSERVANTOWNER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5D0870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAISourceIsServantOwner_TypeDefinitionIndex = 15545;

	class ComplexSkillAISourceIsServantOwner : public ::RPG::GameCore::ComplexSkillAISource
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEISSERVANTOWNER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAISourceIsServantOwner* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAISourceIsServantOwner*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEISSERVANTOWNER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAISourceIsServantOwner* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAISourceIsServantOwner*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEISSERVANTOWNER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
