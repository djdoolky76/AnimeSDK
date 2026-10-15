#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAICombineType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ComplexSkillAIFactor; }
namespace RPG::GameCore { class ComplexSkillAIFactorGroup; }

#define RPG_GAMECORE_COMPLEXSKILLAIFACTORGROUP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A0380)
#define RPG_GAMECORE_COMPLEXSKILLAIFACTORGROUP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5A01E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAIFactorGroup_TypeDefinitionIndex = 15565;

	class ComplexSkillAIFactorGroup : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ComplexSkillAICombineType CombineOperator; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::ComplexSkillAIFactor*>* Factors; // 0x18
		::System::Boolean IsBpGroup; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIFACTORGROUP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAIFactorGroup* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAIFactorGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIFACTORGROUP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
