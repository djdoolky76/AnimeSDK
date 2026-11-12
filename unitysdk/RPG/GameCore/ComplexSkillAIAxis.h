#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ConsiderationAxisConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ComplexSkillAIAxis; }

#define RPG_GAMECORE_COMPLEXSKILLAIAXIS_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7DF3B0)
#define RPG_GAMECORE_COMPLEXSKILLAIAXIS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E7DF3C0)
#define RPG_GAMECORE_COMPLEXSKILLAIAXIS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E7DF340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAIAxis_TypeDefinitionIndex = 15674;

	class ComplexSkillAIAxis : public ::RPG::GameCore::ConsiderationAxisConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIAXIS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAIAxis* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAIAxis*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIAXIS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAIAxis* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAIAxis*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIAXIS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
