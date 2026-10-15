#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISource.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ComplexSkillAISourceRandom01; }

#define RPG_GAMECORE_COMPLEXSKILLAISOURCERANDOM01_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D1AE0)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCERANDOM01_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5D1AF0)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCERANDOM01_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5D1A10)

namespace RPG::GameCore
{
	class ComplexSkillAISourceRandom01 : public ::RPG::GameCore::ComplexSkillAISource
	{
	public:
		::System::Boolean FromRecord; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCERANDOM01_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAISourceRandom01* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAISourceRandom01*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCERANDOM01_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAISourceRandom01* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAISourceRandom01*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCERANDOM01_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
