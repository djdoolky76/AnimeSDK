#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISource.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ComplexSkillAISourceSPNeedRatio; }

#define RPG_GAMECORE_COMPLEXSKILLAISOURCESPNEEDRATIO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A4380)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCESPNEEDRATIO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5A4390)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCESPNEEDRATIO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5A4310)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAISourceSPNeedRatio_TypeDefinitionIndex = 15530;

	class ComplexSkillAISourceSPNeedRatio : public ::RPG::GameCore::ComplexSkillAISource
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCESPNEEDRATIO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAISourceSPNeedRatio* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAISourceSPNeedRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCESPNEEDRATIO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAISourceSPNeedRatio* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAISourceSPNeedRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCESPNEEDRATIO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
