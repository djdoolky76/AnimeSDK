#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ComplexSkillAIPostProcess; }

#define RPG_GAMECORE_COMPLEXSKILLAIPOSTPROCESS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A1BC0)
#define RPG_GAMECORE_COMPLEXSKILLAIPOSTPROCESS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5A1B60)
#define RPG_GAMECORE_COMPLEXSKILLAIPOSTPROCESS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D59FFB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAIPostProcess_TypeDefinitionIndex = 15559;

	class ComplexSkillAIPostProcess : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIPOSTPROCESS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAIPostProcess* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAIPostProcess*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIPOSTPROCESS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAIPostProcess* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAIPostProcess*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIPOSTPROCESS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
