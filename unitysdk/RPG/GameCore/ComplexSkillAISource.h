#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ComplexSkillAISource; }

#define RPG_GAMECORE_COMPLEXSKILLAISOURCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D59F180)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5A1CB0)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D59F130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAISource_TypeDefinitionIndex = 15517;

	class ComplexSkillAISource : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAISource* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAISource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAISource* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAISource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
