#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareRaidFinished; }

#define RPG_GAMECORE_BYCOMPARERAIDFINISHED_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4A0870)
#define RPG_GAMECORE_BYCOMPARERAIDFINISHED_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4A0880)
#define RPG_GAMECORE_BYCOMPARERAIDFINISHED_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4A0830)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareRaidFinished_TypeDefinitionIndex = 20797;

	class ByCompareRaidFinished : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARERAIDFINISHED_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareRaidFinished* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareRaidFinished*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARERAIDFINISHED_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareRaidFinished* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareRaidFinished*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARERAIDFINISHED_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
