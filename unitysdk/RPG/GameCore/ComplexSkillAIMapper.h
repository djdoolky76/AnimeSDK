#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ComplexSkillAIMapper; }

#define RPG_GAMECORE_COMPLEXSKILLAIMAPPER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A12D0)
#define RPG_GAMECORE_COMPLEXSKILLAIMAPPER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5A1270)
#define RPG_GAMECORE_COMPLEXSKILLAIMAPPER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D59FDF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAIMapper_TypeDefinitionIndex = 15554;

	class ComplexSkillAIMapper : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIMAPPER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAIMapper* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAIMapper*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIMAPPER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAIMapper* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAIMapper*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIMAPPER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
