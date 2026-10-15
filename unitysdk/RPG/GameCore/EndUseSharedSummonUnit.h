#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EndUseSharedSummonUnit; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ENDUSESHAREDSUMMONUNIT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D614100)
#define RPG_GAMECORE_ENDUSESHAREDSUMMONUNIT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D614110)
#define RPG_GAMECORE_ENDUSESHAREDSUMMONUNIT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6140D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EndUseSharedSummonUnit_TypeDefinitionIndex = 21166;

	class EndUseSharedSummonUnit : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* SummonUnit; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENDUSESHAREDSUMMONUNIT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EndUseSharedSummonUnit* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EndUseSharedSummonUnit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENDUSESHAREDSUMMONUNIT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::EndUseSharedSummonUnit* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EndUseSharedSummonUnit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENDUSESHAREDSUMMONUNIT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
