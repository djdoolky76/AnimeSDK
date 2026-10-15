#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAICombineType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ComplexSkillAIFactor; }
namespace RPG::GameCore { class ComplexSkillAIMapper; }
namespace RPG::GameCore { class ComplexSkillAIPostProcess; }
namespace RPG::GameCore { class ComplexSkillAISource; }

#define RPG_GAMECORE_COMPLEXSKILLAIFACTOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5CD870)
#define RPG_GAMECORE_COMPLEXSKILLAIFACTOR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5CD710)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAIFactor_TypeDefinitionIndex = 15564;

	class ComplexSkillAIFactor : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ComplexSkillAICombineType CombineOperator; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::ComplexSkillAISource* Source; // 0x18
		::RPG::GameCore::ComplexSkillAIMapper* Mapper; // 0x20
		::RPG::GameCore::ComplexSkillAIPostProcess* PostProcess; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIFACTOR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAIFactor* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAIFactor*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIFACTOR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
